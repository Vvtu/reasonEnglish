[%bs.raw {|require('./App.css')|}];

type state = {
  activeIndex: int,
  showEnglish: bool,
  showAdvanced: bool,
  appcodeIsSpeaking: bool,
  randomDictionary: Dictionaries.pairList,
};
type action =
  | Tick;

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
    | Tick =>
      ReasonReact.Update({...state, activeIndex: state.activeIndex + 1})
    },
  /* didMount: self =>
     self.state.timerId :=
       Some(Js.Global.setInterval(() => self.send(Tick), 1000)), */
  render: ({state}) => {
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
          <div>
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
              <div className="appcode__icon_rotate_back">
                <IconArrow
                  color=Constants.whiteColor
                  height=Constants.iconSize
                />
              </div> :
              <div className="appcode__icon_rotate">
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
          <div className="appcode__icon_invert__horizontal">
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
            <div className="dddd">
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