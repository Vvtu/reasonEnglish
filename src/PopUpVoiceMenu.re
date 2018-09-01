[@bs.val]
external requestAnimationFrame : (unit => unit) => float =
  "requestAnimationFrame";

type state = {increaseOpacity: bool};
type action =
  | SetIncreaseOpacityTrue
  | ClosePopUpSettingsMenu;
let component = ReasonReact.reducerComponent("PopUpVoiceMenu");

let make =
    (
      ~handleClosePopupClicked,
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
    Js.log("PopUpVoiceMenu render");

    <div
      className=(
        state.increaseOpacity === true ?
          "popup__opacity_1 popup_voices_zindex" :
          "popup__opacity_0 popup_voices_zindex"
      )
      onClick=(_ => send(ClosePopUpSettingsMenu))
      onDoubleClick=(_ => send(ClosePopUpSettingsMenu))>
      <div className="popup__full_screen_div_opacity" />
      <div className="popup__full_screen_div">
        <div className="popup__window popup__scroll">
          <div className="popup__cancel">
            <Icon.Cancel color=whiteColor height=Constants.iconSmallSize />
          </div>
          <div className="popup__list">
            (
              [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]
              |> List.map(item =>
                   <PopUpMenuItem
                     key=(string_of_int(item))
                     label="dict #2"
                     onClick=(_ => ())>
                     <div className="appcode__eng_text_color">
                       (ReasonReact.string("D2"))
                     </div>
                   </PopUpMenuItem>
                 )
              |> Array.of_list
              |> ReasonReact.array
            )
          </div>
        </div>
      </div>
    </div>;
  },
};