[%bs.raw {|require('./App.css')|}];

type state = {
  activeIndex: int,
  showEnglish: bool,
  showAdvanced: bool,
  appcodeIsSpeaking: bool,
  randomDictionary: Dictionaries.pairList,
};
type action =
  | GoPrevious
  | GoNext
  | ShowEnglish
  | HideEnglish;

let component = ReasonReact.reducerComponent("App");

let make = (~message, _children) => {
  ...component,
  initialState: () => {
    activeIndex: 0,
    showEnglish: false,
    showAdvanced: false,
    appcodeIsSpeaking: false,
    randomDictionary: Reshuffle.reshuffle(Dictionaries.dictionary1),
  },
  reducer: (action, state) =>
    switch (action) {
    | ShowEnglish =>
      ReasonReact.Update({
        ...state,
        showEnglish: true,
        appcodeIsSpeaking: false,
      })
    | HideEnglish =>
      ReasonReact.Update({
        ...state,
        showEnglish: false,
        appcodeIsSpeaking: false,
      })
    | GoNext =>
      state.activeIndex == List.length(state.randomDictionary) - 1 ?
        ReasonReact.Update({
          ...state,
          activeIndex: 0,
          appcodeIsSpeaking: false,
        }) :
        ReasonReact.Update({
          ...state,
          activeIndex: state.activeIndex + 1,
          appcodeIsSpeaking: false,
        })
    | GoPrevious =>
      state.activeIndex == 0 ?
        ReasonReact.Update({
          ...state,
          activeIndex: List.length(state.randomDictionary) - 1,
          appcodeIsSpeaking: false,
        }) :
        ReasonReact.Update({
          ...state,
          activeIndex: state.activeIndex - 1,
          appcodeIsSpeaking: false,
        })
    },
  didMount: _self => Js.log("didMount"),
  /*    self.state.timerId :=
        Some(Js.Global.setInterval(() => self.send(Tick), 1000)), */
  render: ({state, send}) => {
    let count = List.length(state.randomDictionary);
    let activeObj = List.nth(state.randomDictionary, state.activeIndex);
    let item = Dom.Storage.(localStorage |> getItem(activeObj.rus));

    /* let saveTokenToStorage = value =>
       Dom.Storage.(localStorage |> setItem("jwt", value)); */

    let shown =
      switch (item) {
      | Some(n) => int_of_string(n)
      | None => 0
      };

    <div className="appcode__grid">
      <div className="appcode__info">
        <div className="appcode__info2">
          <div onClick=(_ => send(GoPrevious))>
            <IconArrow color=Constants.whiteColor height=Constants.iconSize />
          </div>
          <div>
            <IconAdvanced
              color=Constants.advancedColor
              height=Constants.iconSize
            />
          </div>
          (
            state.showEnglish ?
              <div
                className="appcode__icon_rotate_back"
                onClick=(_ => send(HideEnglish))>
                <IconArrow
                  color=Constants.whiteColor
                  height=Constants.iconSize
                />
              </div> :
              <div
                className="appcode__icon_rotate"
                onClick=(_ => send(ShowEnglish))>
                <IconArrow
                  color=Constants.whiteColor
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
            onClick=(_ => send(GoNext))>
            <IconArrow color=Constants.whiteColor height=Constants.iconSize />
          </div>
        </div>
      </div>
      <div className="appcode__russian">
        <div className="appcode__center">
          <div className="appcode__scroll">
            <div> (ReasonReact.string(activeObj.rus)) </div>
          </div>
        </div>
      </div>
      <div className="appcode__english">
        <div className="appcode__center">
          <div className="appcode__scroll">
            <div
              className=(
                "appcode__eng_text_color"
                ++ (state.appcodeIsSpeaking ? " appcode__speaking" : "")
              )>
              <div>
                (ReasonReact.string(state.showEnglish ? activeObj.eng : ""))
              </div>
            </div>
          </div>
        </div>
      </div>
    </div>;
  },
};

/*
 {
   'appcode__eng_text_color' + (appcodeIsSpeaking ? ' appcode__speaking' : '')
 } */