[%bs.raw {|require('./PopUpWindow.css')|}];

module PopUpMenuItem = {
  let component = ReasonReact.statelessComponent("PopUpMenuItem");
  let make = (~label, ~onClick, children) => {
    ...component,
    render: _self =>
      <div className="popup__row" onClick onDoubleClick=onClick>
        <div className="popup__width35"> ...children </div>
        <div className="popup__gap" />
        <div> (ReasonReact.string(label)) </div>
      </div>,
  };
};

[@bs.val]
external requestAnimationFrame : (unit => unit) => float =
  "requestAnimationFrame";

type state = {increaseOpacity: bool};
type action =
  | SetIncreaseOpacityTrue
  | ClosePopUp;
let component = ReasonReact.reducerComponent("PopUpWindow");

let make = (~handleClosePopupClicked, ~handleRestart, _children) => {
  ...component,
  initialState: () => {increaseOpacity: false},
  reducer: (action, _state) =>
    switch (action) {
    | SetIncreaseOpacityTrue => ReasonReact.Update({increaseOpacity: true})
    | ClosePopUp =>
      ReasonReact.UpdateWithSideEffects(
        {increaseOpacity: false},
        (
          _ => {
            let _ = Js.Global.setTimeout(handleClosePopupClicked, 500);
            ();
          }
        ),
      )
    },
  didMount: ({send}) => {
    let _ = requestAnimationFrame(_ => send(SetIncreaseOpacityTrue));
    ();
  },
  render: ({state, send}) => {
    Js.log("PopUpWindow render");
    <div
      className=(
        state.increaseOpacity === true ?
          "popup__opacity_1" : "popup__opacity_0"
      )
      onClick=(_ => send(ClosePopUp))
      onDoubleClick=(_ => send(ClosePopUp))>
      <div className="popup__full_screen_div_opacity" />
      <div className="popup__full_screen_div">
        <div className="popup__window">
          <div className="popup__cancel">
            <Icon.Cancel
              color=Constants.whiteColor
              height=Constants.iconSmallSize
            />
          </div>
          <div className="popup__list">
            <PopUpMenuItem label="Advanced" onClick=(_ => send(ClosePopUp))>
              <div />
            </PopUpMenuItem>
            <PopUpMenuItem
              label="reset all info"
              onClick=(
                _ => {
                  let _ = Dom.Storage.(clear(localStorage));
                  handleRestart();
                  send(ClosePopUp);
                }
              )>
              <Icon.ClearAllInfo
                color=Constants.redColor
                height=Constants.iconSize
              />
            </PopUpMenuItem>
            <PopUpMenuItem
              label="dict #1"
              onClick=(
                _ => {
                  let _ =
                    Dom.Storage.(localStorage |> removeItem(Constants.dict));
                  handleRestart();
                  send(ClosePopUp);
                }
              )>
              <div className="appcode__eng_text_color">
                (ReasonReact.string("D1"))
              </div>
            </PopUpMenuItem>
            <PopUpMenuItem
              label="dict #2"
              onClick=(
                _ => {
                  let _ =
                    Dom.Storage.(
                      localStorage |> setItem(Constants.dict, "+")
                    );
                  handleRestart();
                  send(ClosePopUp);
                }
              )>
              <div className="appcode__eng_text_color">
                (ReasonReact.string("D2"))
              </div>
            </PopUpMenuItem>
          </div>
        </div>
      </div>
    </div>;
  },
};