[%bs.raw {|require('./App.css')|}];

open List;

type state = {
  allCards: Dictionaries.pairList,
  remainingCards: Dictionaries.pairList,
  appcodeIsSpeaking: bool,
  showEnglish: bool,
  showSettings: bool,
  showVoiceMenu: bool,
  voices: array(SpeechSynthesis.Voice.t),
  dangerColor: string,
  englishTextColor: string,
  settingsColor: string,
  baseTextColor: string,
};

type action =
  | GotoNextCard
  | GotoPreviousCard(int)
  | SwitchEnglishShowing(string, int)
  | SpeakEnglish(string)
  | SpeechEnd
  | ShowSettingsMenu
  | ShowVoiceMenu
  | HideSettingsMenu
  | HideVoiceMenu
  | StoreVoicesToSate(array(SpeechSynthesis.Voice.t))
  | Restart;

let component = ReasonReact.reducerComponent("App");

let make = _children => {
  ...component,
  initialState: () => {
    /* 11 fields */
    allCards: [],
    remainingCards: [],
    appcodeIsSpeaking: false,
    showEnglish: false,
    showSettings: false,
    showVoiceMenu: false,
    voices: [||],
    dangerColor: "#000",
    englishTextColor: "#000",
    settingsColor: "#000",
    baseTextColor: "#000",
  },
  /* reducer must be pure */
  reducer: (action, state) =>
    switch (action) {
    | GotoNextCard =>
      ReasonReact.Update({
        ...state,
        remainingCards: MyLib.dropItems(1, state.remainingCards),
        showEnglish: false,
      })

    | GotoPreviousCard(index) =>
      let newCurrentDictionary =
        if (index < 0) {
          state.allCards;
        } else {
          MyLib.dropItems(index, state.allCards);
        };
      ReasonReact.Update({...state, remainingCards: newCurrentDictionary});

    | ShowSettingsMenu => ReasonReact.Update({...state, showSettings: true})
    | HideSettingsMenu => ReasonReact.Update({...state, showSettings: false})
    | ShowVoiceMenu => ReasonReact.Update({...state, showVoiceMenu: true})
    | HideVoiceMenu => ReasonReact.Update({...state, showVoiceMenu: false})
    | SpeechEnd => ReasonReact.Update({...state, appcodeIsSpeaking: false})

    | SpeakEnglish(text) =>
      if (state.appcodeIsSpeaking) {
        ReasonReact.NoUpdate;
      } else {
        ReasonReact.UpdateWithSideEffects(
          {...state, appcodeIsSpeaking: true},
          (
            self => {
              let ut = SpeechSynthesis.Utterance.create("");
              let ti =
                Js.Global.setTimeout(
                  _ => self.send(SpeechEnd),
                  7000 /* in case of utterThis.onend failed */
                );
              let voiceIndex = MyLib.getVoiceIndex();
              if (voiceIndex >= 0 && voiceIndex < Array.length(state.voices)) {
                SpeechSynthesis.Utterance.set_voice(
                  ut,
                  state.voices[voiceIndex],
                );
              };
              SpeechSynthesis.Utterance.on_end(
                ut,
                _ => {
                  self.send(SpeechEnd);
                  Js.Global.clearTimeout(ti);
                },
              );
              let regex = [%re "/\/\//"];
              let splitedList0 = Js.String.splitByRe(regex, text);

              let splitedList1 =
                Js.Array.mapi(
                  (a, index) =>
                    Int32.(rem(of_int(index), of_int(2)) === of_int(0)) ?
                      a : "",
                  splitedList0,
                );

              let textWithoutComments = Js.Array.joinWith("", splitedList1);

              SpeechSynthesis.Utterance.set_text(ut, textWithoutComments);
              let _ =
                Js.Global.setTimeout(_ => SpeechSynthesis.speak(ut), 150);
              ();
            }
          ),
        );
      }

    | SwitchEnglishShowing(str, shown) =>
      let newShowEnglish = state.showEnglish != true;
      if (newShowEnglish) {
        Dom.Storage.(localStorage |> setItem(str, string_of_int(shown + 1)));
      };
      ReasonReact.Update({
        ...state,
        showEnglish: newShowEnglish,
        appcodeIsSpeaking: false,
      });

    | StoreVoicesToSate(voices) => ReasonReact.Update({...state, voices})

    | Restart =>
      Js.log("Restart");
      Random.self_init();

      let item = Dom.Storage.(localStorage |> getItem(Constants.dict));

      let (dict, dictOld) =
        Dictionaries.(
          switch (item) {
          | Some(_) => (dictionary2, oldDictionary2)
          | None => (dictionary1, oldDictionary1)
          }
        );

      let allCards =
        append(
          MyLib.takeItems(
            Constants.numberOfPairsFromOldDictionary,
            Reshuffle.reshuffle4(dictOld),
          ),
          Reshuffle.reshuffle4(dict),
        )
        |> filter(({rus, eng}: Dictionaries.wordPair) =>
             eng !== "" || rus !== ""
           );

      let (baseTextColor, settingsColor, englishTextColor, dangerColor) =
        MyLib.getColorsFromCSS();

      ReasonReact.Update({
        ...state,
        allCards,
        remainingCards: allCards,
        appcodeIsSpeaking: false,
        showEnglish: false,
        showSettings: false,
        showVoiceMenu: false,
        /* only voices field is absent */
        baseTextColor,
        settingsColor,
        englishTextColor,
        dangerColor,
      });
    },
  didMount: self => {
    let _ = SpeechSynthesis.getVoices();
    let _ =
      Js.Global.setTimeout(
        _ => {
          let voices = SpeechSynthesis.getVoices();
          /* Js.log2("didMount timeOut voices=", voices); */
          self.send(StoreVoicesToSate(voices));
        },
        100,
      );
    self.send(Restart);
  },
  render: ({state, send}) => {
    Js.log("App render");
    switch (state.remainingCards) {
    | [] =>
      <div
        onClick=(_ => send(Restart))
        onDoubleClick=(_ => send(Restart))
        className="popup__opacity_1 popup_voices_zindex">
        <div className="popup__full_screen_div_opacity" />
        <div className="popup__full_screen_div">
          <div className="popup__window popup__scroll appcode__eng_text_color">
            {ReasonReact.string("That's all!. Click to restart.")}
          </div>
        </div>
      </div>

    | [currentCard, ...tail] =>
      let countAll = length(state.allCards);
      let countRemain = length(tail);
      let item = Dom.Storage.(localStorage |> getItem(currentCard.rus));
      let shown =
        switch (item) {
        | Some(n) => int_of_string(n)
        | None => 0
        };

      <div className="appcode__grid">
        <div className="appcode__info">
          <div className="appcode__info2">
            <div
              onClick=(
                _ => send(GotoPreviousCard(countAll - countRemain - 2))
              )>
              <Icon.Arrow
                color={state.baseTextColor}
                height=Constants.iconSize
              />
            </div>
            <div onClick=(_ => send(ShowSettingsMenu))>
              <Icon.Settings
                color={state.settingsColor}
                height=Constants.iconSize
              />
            </div>
            {
              state.showEnglish ?
                <div
                  className="appcode__icon_rotate_back"
                  onClick=(
                    _ => send(SwitchEnglishShowing(currentCard.rus, shown))
                  )>
                  <Icon.Arrow
                    color={state.baseTextColor}
                    height=Constants.iconSize
                  />
                </div> :
                <div
                  className="appcode__icon_rotate"
                  onClick=(
                    _ => send(SwitchEnglishShowing(currentCard.rus, shown))
                  )>
                  <Icon.Arrow
                    color={state.englishTextColor}
                    height=Constants.iconSize
                  />
                </div>
            }
            <div>
              <span onClick=(_ => send(GotoNextCard))>
                {
                  ReasonReact.string(
                    string_of_int(countAll - countRemain)
                    ++ "/"
                    ++ string_of_int(countAll),
                  )
                }
              </span>
              <span className="appcode__eng_text_color">
                {ReasonReact.string("(" ++ string_of_int(shown) ++ ")")}
              </span>
            </div>
            <div
              className="appcode__icon_invert__horizontal"
              onClick=(_ => send(GotoNextCard))>
              <Icon.Arrow
                color={state.baseTextColor}
                height=Constants.iconSize
              />
            </div>
          </div>
        </div>
        /* Russian field */
        <div
          className="appcode__russian"
          onClick=(_ => send(SwitchEnglishShowing(currentCard.rus, shown)))>
          <div className="appcode__center" key={currentCard.eng}>
            <div className="appcode__scroll">
              <div> {ReasonReact.string(currentCard.rus)} </div>
            </div>
          </div>
        </div>
        /* English field */
        <div
          className="appcode__english"
          onClick=(_ => send(SpeakEnglish(currentCard.eng)))>
          {
            state.showEnglish ?
              <div className="appcode__center">
                <div className="appcode__scroll">
                  <div
                    className={
                      "appcode__eng_text_color"
                      ++ (state.appcodeIsSpeaking ? " appcode__speaking" : "")
                    }>
                    <div> {ReasonReact.string(currentCard.eng)} </div>
                  </div>
                </div>
              </div> :
              <div className="appcode__center" />
          }
        </div>
        /* ************** */
        {
          state.showSettings ?
            <PopUpSettingsMenu
              handleClosePopupClicked=(_ => send(HideSettingsMenu))
              handleVoiceMenuClicked=(
                event => {
                  ReactEvent.Synthetic.stopPropagation(event);
                  send(ShowVoiceMenu);
                }
              )
              handleRestart=(_ => send(Restart))
              baseTextColor={state.baseTextColor}
              dangerColor={state.dangerColor}
            /> :
            <div />
        }
        {
          state.showVoiceMenu ?
            <PopUpVoiceMenu
              handleClosePopupClicked=(_ => send(HideVoiceMenu))
              baseTextColor={state.baseTextColor}
              voices={state.voices}
            /> :
            <div />
        }
      </div>;
    };
  },
};