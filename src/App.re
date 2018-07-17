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
  render: ({state}) =>
    <div className="appcode__grid">
      <div className="appcode__info">
        <div className="appcode__info2">
          <ArrowIconWrapper color="red" height=Constants.iconSize />
          <AdvancedIconWrapper color="red" height=Constants.iconSize />
          <ArrowIc color="red" height=Constants.iconSize />
        </div>
      </div>
    </div>,
  /* (ReasonReact.string("To get started, edit")) */
};