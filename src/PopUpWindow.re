[%bs.raw {|require('./PopUpWindow.css')|}];

[@bs.val]
external requestAnimationFrame : (unit => unit) => float =
  "requestAnimationFrame";

type state = {increaseOpacity: bool};
type action =
  | SetIncreaseOpacityTrue
  | ClosePopUp;
let component = ReasonReact.reducerComponent("PopUpWindow");

let make = (~handleClosePopupClicked, _children) => {
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
            <IconCancel color=Constants.whiteColor height="16" />
          </div>
          <div className="popup__list">
            <PopUpMenuItem label="Advanced" onClick=(_ => send(ClosePopUp))>
              <div />
            </PopUpMenuItem>
            <PopUpMenuItem
              label="reset all info" onClick=(_ => send(ClosePopUp))>
              <ClearAllInfo color=Constants.redColor height="24" />
            </PopUpMenuItem>
            <PopUpMenuItem label="dict #1" onClick=(_ => send(ClosePopUp))>
              <div className="appcode__eng_text_color">
                (ReasonReact.string("D1"))
              </div>
            </PopUpMenuItem>
            <PopUpMenuItem label="dict #2" onClick=(_ => send(ClosePopUp))>
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