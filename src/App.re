[%bs.raw {|require('./App.css')|}];
/* [@bs.val] external setTimeout : (unit => unit, int) => float = "setTimeout";
   [@bs.val] external clearTimeout : float => unit = "clearTimeout"; */
type state = {
  activeIndex: int,
  showEnglish: bool,
  showAdvanced: bool,
  appcodeIsSpeaking: bool,
  randomDictionary: Dictionaries.pairList,
};
type action =
  | ChangeActiveIndex(int)
  | SwitchEnglishShowing(string, int)
  | SpeakEnglish(string)
  | SpeechEnd
  | ShowAdvancedMenu
  | HideAdvancedMenu
  | Restart;

let component = ReasonReact.reducerComponent("App");

let make = (~message, _children) => {
  ...component,
  initialState: () => {
    activeIndex: 0,
    showEnglish: false,
    showAdvanced: false,
    appcodeIsSpeaking: false,
    randomDictionary: [],
  },
  /* reducer must be pure */
  reducer: (action, state) => {
    Js.log("App reducer action = ");
    Js.log(action);
    Js.log("App reducer state activeIndex = " ++ string_of_int(   state.activeIndex));

   switch (action) {
    | ShowAdvancedMenu => ReasonReact.Update({...state, showAdvanced: true})

    | HideAdvancedMenu => ReasonReact.Update({...state, showAdvanced: false})

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
    | ChangeActiveIndex(ince) =>
      let nI = state.activeIndex + ince;
      let newIndex =
        if (nI < 0) {
          List.length(state.randomDictionary) - 1;
        } else if (nI >= List.length(state.randomDictionary)) {
          0;
        } else {
          nI;
        };

      ReasonReact.Update({
        ...state,
        activeIndex: newIndex,
        appcodeIsSpeaking: false,
        showEnglish: false,
      });

    | Restart =>
      Js.log("Restart");
      Random.self_init();
      let item = Dom.Storage.(localStorage |> getItem(Constants.dict));
      let dict =
        switch (item) {
        | Some(_) => Dictionaries.dictionary2
        | None => Dictionaries.dictionary1
        };
      ReasonReact.Update({
        ...state,
        activeIndex: 0,
        appcodeIsSpeaking: false,
        showEnglish: false,
        randomDictionary: Reshuffle.reshuffle(dict),
      });
    };
  },
  didMount: self => self.send(Restart),
  render: ({state, send}) => {
    let count = List.length(state.randomDictionary);
    if (count === 0) {
      <div> (ReasonReact.string("No records found!")) </div>;
    } else {
      let activeObj = List.nth(state.randomDictionary, state.activeIndex);
      let item = Dom.Storage.(localStorage |> getItem(activeObj.rus));

      let shown =
        switch (item) {
        | Some(n) => int_of_string(n)
        | None => 0
        };

      Js.log("App render");

      <div className="appcode__grid">
        <div className="appcode__info">
          <div className="appcode__info2">
            <div onClick=(_ => send(ChangeActiveIndex(-1)))>
              <Icon.Arrow
                color=Constants.whiteColor
                height=Constants.iconSize
              />
            </div>
            <div onClick=(_ => send(ShowAdvancedMenu))>
              <Icon.Advanced
                color=Constants.advancedColor
                height=Constants.iconSize
              />
            </div>
            (
              state.showEnglish ?
                <div
                  className="appcode__icon_rotate_back"
                  onClick=(
                    _ => send(SwitchEnglishShowing(activeObj.rus, shown))
                  )>
                  <Icon.Arrow
                    color=Constants.whiteColor
                    height=Constants.iconSize
                  />
                </div> :
                <div
                  className="appcode__icon_rotate"
                  onClick=(
                    _ => send(SwitchEnglishShowing(activeObj.rus, shown))
                  )>
                  <Icon.Arrow
                    color=Constants.englishTextColor
                    height=Constants.iconSize
                  />
                </div>
            )
            <div>
              <span>
                (
                  ReasonReact.string(
                    string_of_int(state.activeIndex + 1)
                    ++ "/"
                    ++ string_of_int(count),
                  )
                )
              </span>
              <span className="appcode__eng_text_color">
                (ReasonReact.string("(" ++ string_of_int(shown) ++ ")"))
              </span>
            </div>
            <div
              className="appcode__icon_invert__horizontal"
              onClick=(_ => send(ChangeActiveIndex(1)))>
              <Icon.Arrow
                color=Constants.whiteColor
                height=Constants.iconSize
              />
            </div>
          </div>
        </div>
        <div
          className="appcode__russian"
          onClick=(_ => send(SwitchEnglishShowing(activeObj.rus, shown)))>
          <div className="appcode__center" key=activeObj.eng>
            <div className="appcode__scroll">
              <div> (ReasonReact.string(activeObj.rus)) </div>
            </div>
          </div>
        </div>
        <div
          className="appcode__english"
          onClick=(_ => send(SpeakEnglish(activeObj.eng)))>
          (
            state.showEnglish ?
              <div className="appcode__center">
                <div className="appcode__scroll">
                  <div
                    className=(
                      "appcode__eng_text_color"
                      ++ (state.appcodeIsSpeaking ? " appcode__speaking" : "")
                    )>
                    <div> (ReasonReact.string(activeObj.eng)) </div>
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
              handleRestart=(_ => send(Restart))
            /> :
            <div />
        )
      </div>;
    };
  },
};
