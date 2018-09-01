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
      ~voices,
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

    let fVoices =
      voices
      |> Array.to_list
      |> List.mapi((i, voice) => {
           let lang: string = SpeechSynthesis.Voice.langGet(voice);
           let name: string = SpeechSynthesis.Voice.nameGet(voice);
           (i, lang ++ " " ++ name);
         })
      |> List.filter(((_, name)) => String.sub(name, 0, 2) === "en");

    Js.log2("didMount fVoices=", fVoices);

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
              fVoices
              |> List.map(((index, name)) =>
                   <PopUpMenuItem
                     key=(string_of_int(index))
                     label=name
                     onClick=(_ => handleRestart())
                   />
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