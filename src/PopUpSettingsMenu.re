[@bs.val]
external requestAnimationFrame : (unit => unit) => float =
  "requestAnimationFrame";

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

type state = {increaseOpacity: bool};
type action =
  | SetIncreaseOpacityTrue
  | ClosePopUpSettingsMenu;
let component = ReasonReact.reducerComponent("PopUpSettingsMenu");

let make =
    (
      ~handleClosePopupClicked,
      ~handleVoiceMenuClicked,
      ~handleRestart,
      ~whiteColor,
      ~dangerColor,
      _children,
    ) => {
  ...component,
  initialState: () => {increaseOpacity: false},
  reducer: (action, _state) =>
    switch (action) {
    | SetIncreaseOpacityTrue => ReasonReact.Update({increaseOpacity: true})
    | ClosePopUpSettingsMenu =>
      ReasonReact.UpdateWithSideEffects(
        {increaseOpacity: false},
        (
          _ => {
            let _ = Js.Global.setTimeout(handleClosePopupClicked, 1000);
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
    Js.log("PopUpSettingsMenu render");
    <div
      className=(
        state.increaseOpacity === true ?
          "popup__opacity_1" : "popup__opacity_0"
      )
      onClick=(_ => send(ClosePopUpSettingsMenu))
      onDoubleClick=(_ => send(ClosePopUpSettingsMenu))>
      <div className="popup__full_screen_div_opacity" />
      <div className="popup__full_screen_div">
        <div className="popup__window">
          <div className="popup__cancel">
            <Icon.Cancel color=whiteColor height=Constants.iconSmallSize />
          </div>
          <div className="popup__list popup__row popup__header">
            (ReasonReact.string("settings:"))
          </div>
          <div className="popup__list">
            <PopUpMenuItem
              label="reset all"
              onClick=(
                _ => {
                  let _ = Dom.Storage.(clear(localStorage));
                  handleRestart();
                  send(ClosePopUpSettingsMenu);
                }
              )>
              <Icon.ClearAllInfo color=dangerColor height=Constants.iconSize />
            </PopUpMenuItem>
            <PopUpMenuItem
              label="dict #1"
              onClick=(
                _ => {
                  let _ =
                    Dom.Storage.(localStorage |> removeItem(Constants.dict));
                  handleRestart();
                  send(ClosePopUpSettingsMenu);
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
                  send(ClosePopUpSettingsMenu);
                }
              )>
              <div className="appcode__eng_text_color">
                (ReasonReact.string("D2"))
              </div>
            </PopUpMenuItem>
            <PopUpMenuItem label="voices" onClick=handleVoiceMenuClicked>
              <Icon.Voices color=dangerColor height=Constants.iconSize />
            </PopUpMenuItem>
          </div>
        </div>
      </div>
    </div>;
  },
};