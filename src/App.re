[%bs.raw {|require('./App.css')|}];
/* [@bs.val] external setTimeout : (unit => unit, int) => float = "setTimeout";
   [@bs.val] external clearTimeout : float => unit = "clearTimeout"; */

type state = {
  showEnglish: bool,
  showAdvanced: bool,
  showVoiceMenu: bool,
  appcodeIsSpeaking: bool,
  allCards: Dictionaries.pairList,
  remainingCards: Dictionaries.pairList,
  whiteColor: string,
  advancedColor: string,
  englishTextColor: string,
  dangerColor: string,
};
type action =
  | GotoNextCard(Dictionaries.pairList)
  | GotoPreviousCard(int)
  | SwitchEnglishShowing(string, int)
  | SpeakEnglish(string)
  | SpeechEnd
  | ShowAdvancedMenu
  | ShowVoiceMenu
  | HideAdvancedMenu
  | Restart;

open List;

let component = ReasonReact.reducerComponent("App");

let make = _children => {
  ...component,
  initialState: () => {
    showEnglish: false,
    showAdvanced: false,
    showVoiceMenu: false,
    appcodeIsSpeaking: false,
    allCards: [],
    remainingCards: [],
    whiteColor: "#000000",
    advancedColor: "#000000",
    englishTextColor: "#000000",
    dangerColor: "#000000",
  },
  /* reducer must be pure */
  reducer: (action, state) =>
    switch (action) {
    | GotoNextCard(tail) =>
      ReasonReact.Update({...state, remainingCards: tail, showEnglish: false})
    | GotoPreviousCard(index) =>
      let newCurrentDictionary =
        if (index < 0) {
          state.allCards;
        } else {
          ItemFunc.dropItems(index, state.allCards);
        };
      ReasonReact.Update({...state, remainingCards: newCurrentDictionary});

    | ShowAdvancedMenu => ReasonReact.Update({...state, showAdvanced: true})
    | HideAdvancedMenu =>
      ReasonReact.Update({
        ...state,
        showAdvanced: false,
        showVoiceMenu: false,
      })
    | ShowVoiceMenu => ReasonReact.Update({...state, showVoiceMenu: true})
    | SpeechEnd => ReasonReact.Update({...state, appcodeIsSpeaking: false})
    | SpeakEnglish(text) =>
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
            SpeechSynthesis.Utterance.on_end(
              ut,
              _ => {
                self.send(SpeechEnd);
                Js.Global.clearTimeout(ti);
              },
            );
            SpeechSynthesis.Utterance.set_text(ut, text);
            SpeechSynthesis.speak(ut);
          }
        ),
      )
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

    | Restart =>
      Js.log("Restart");
      Random.self_init();
      let item = Dom.Storage.(localStorage |> getItem(Constants.dict));

      let (dict, dictOld) =
        switch (item) {
        | Some(_) => (Dictionaries.dictionary2, Dictionaries.oldDictionary2)
        | None => (Dictionaries.dictionary1, Dictionaries.oldDictionary1)
        };
      let allCards =
        List.append(
          ItemFunc.takeItems(3, Reshuffle.reshuffle5(dictOld)),
          Reshuffle.reshuffle5(dict),
        );

      /* open Webapi.Dom;
         let styles = Window.getComputedStyle(el, window);
             greenColor: "#6b5ee0", /*styles.getPropertyValue("--english-text-color"),*/
           advancedColor: "#add8e6", /*styles.getPropertyValue("--advanced-color"),*/
           whiteColor: "#000000", /*styles.getPropertyValue("--base-text-color"),*/
           */

      ReasonReact.Update({
        ...state,
        appcodeIsSpeaking: false,
        showEnglish: false,
        allCards,
        remainingCards: allCards,
        whiteColor: "#000000",
        advancedColor: "#add8e6",
        englishTextColor: "#6b5ee0",
        dangerColor: "#00bfff",
      });
    },
  didMount: self => self.send(Restart),
  render: ({state, send}) => {
    Js.log("App render");

    switch (state.remainingCards) {
    | [] =>
      <div onClick=(_ => send(Restart))>
        (ReasonReact.string("The end !"))
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
              <Icon.Arrow color=state.whiteColor height=Constants.iconSize />
            </div>
            <div onClick=(_ => send(ShowAdvancedMenu))>
              <Icon.Advanced
                color=state.advancedColor
                height=Constants.iconSize
              />
            </div>
            (
              state.showEnglish ?
                <div
                  className="appcode__icon_rotate_back"
                  onClick=(
                    _ => send(SwitchEnglishShowing(currentCard.rus, shown))
                  )>
                  <Icon.Arrow
                    color=state.whiteColor
                    height=Constants.iconSize
                  />
                </div> :
                <div
                  className="appcode__icon_rotate"
                  onClick=(
                    _ => send(SwitchEnglishShowing(currentCard.rus, shown))
                  )>
                  <Icon.Arrow
                    color=state.englishTextColor
                    height=Constants.iconSize
                  />
                </div>
            )
            <div>
              <span>
                (
                  ReasonReact.string(
                    string_of_int(countAll - countRemain)
                    ++ "/"
                    ++ string_of_int(countAll),
                  )
                )
              </span>
              <span className="appcode__eng_text_color">
                (ReasonReact.string("(" ++ string_of_int(shown) ++ ")"))
              </span>
            </div>
            <div
              className="appcode__icon_invert__horizontal"
              onClick=(_ => send(GotoNextCard(tail)))>
              <Icon.Arrow color=state.whiteColor height=Constants.iconSize />
            </div>
          </div>
        </div>
        <div
          className="appcode__russian"
          onClick=(_ => send(SwitchEnglishShowing(currentCard.rus, shown)))>
          <div className="appcode__center" key=currentCard.eng>
            <div className="appcode__scroll">
              <div> (ReasonReact.string(currentCard.rus)) </div>
            </div>
          </div>
        </div>
        <div
          className="appcode__english"
          onClick=(_ => send(SpeakEnglish(currentCard.eng)))>
          (
            state.showEnglish ?
              <div className="appcode__center">
                <div className="appcode__scroll">
                  <div
                    className=(
                      "appcode__eng_text_color"
                      ++ (state.appcodeIsSpeaking ? " appcode__speaking" : "")
                    )>
                    <div> (ReasonReact.string(currentCard.eng)) </div>
                  </div>
                </div>
              </div> :
              <div className="appcode__center" />
          )
        </div>
        (
          state.showAdvanced ?
            <PopUpWindow
              handleClosePopupClicked=(_ => send(HideAdvancedMenu))
              handleVoiceMenuClicked=(_ => send(ShowAdvancedMenu))
              handleRestart=(_ => send(Restart))
              whiteColor=state.whiteColor
              dangerColor=state.dangerColor
            /> :
            <div />
        )
        (
          state.showVoiceMenu ?
            <PopUpVoiceMenu
              handleClosePopupClicked=(_ => send(HideAdvancedMenu))
              handleRestart=(_ => send(Restart))
              whiteColor=state.whiteColor
              dangerColor=state.dangerColor
            /> :
            <div />
        )
      </div>;
    };
  },
};