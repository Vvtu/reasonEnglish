type state = {increaseOpacity: bool};
type action =
  | SetIncreaseOpacityTrue
  | ClosePopUpSettingsMenu;
let component = ReasonReact.reducerComponent("PopUpVoiceMenu");

let make = (~handleClosePopupClicked, ~baseTextColor, ~voices, _children) => {
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
    Js.log("PopUpVoiceMenu render");
    let fVoices =
      voices
      |> Array.to_list
      |> List.mapi((i, voice) => {
           let lang: string = SpeechSynthesis.Voice.langGet(voice);
           let name: string = SpeechSynthesis.Voice.nameGet(voice);
           (i, lang ++ " " ++ name);
         })
      |> List.filter(((_, name)) => String.sub(name, 0, 2) === "en")
      |> List.sort(((_, name1), (_, name2)) => name1 > name2 ? 1 : (-1));

    let currentVoiceIndex = MyLib.getVoiceIndex();

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
            <Icon.Cancel color=baseTextColor height=Constants.iconSmallSize />
          </div>
          <div className="popup__list popup__row popup__header">
            (ReasonReact.string("voices:"))
          </div>
          <div className="popup__list">
            (
              fVoices
              |> List.map(((index, name)) =>
                   <div
                     key=(string_of_int(index))
                     className=(
                       "popup__row"
                       ++ (
                         index === currentVoiceIndex ?
                           " popup__row_selected" : ""
                       )
                     )
                     onClick=(
                       _ => {
                         Dom.Storage.(
                           localStorage
                           |> setItem(
                                Constants.voiceIndexTeg,
                                string_of_int(index),
                              )
                         );
                         handleClosePopupClicked();
                       }
                     )>
                     <div> (ReasonReact.string(name)) </div>
                   </div>
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