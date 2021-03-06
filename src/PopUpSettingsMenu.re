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
      ~baseTextColor,
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
    let _ = MyLib.requestAnimationFrame(_ => send(SetIncreaseOpacityTrue));
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
            <Icon.Cancel color=baseTextColor height=Constants.iconSmallSize />
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
              <Icon.D1 color=dangerColor height=Constants.iconSize />
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
              <Icon.D2 color=dangerColor height=Constants.iconSize />
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