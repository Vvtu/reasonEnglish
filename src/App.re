[%bs.raw {|require('./App.css')|}];
/* ReactJS used by ReasonReact */
/* This component wraps a ReactJS one, so that ReasonReact components can consume it */
/* Typing the myBanner.js component's output as a `reactClass`. */
[@bs.module] external arrowIcon : ReasonReact.reactClass = "svg/ArrowIcon";
[@bs.deriving abstract]
type jsProps = {
  show: bool,
  /* message: string,
     height: string,
     width: string,
     fill: string, */
};

include Reshuffle;
include Dictionaries;

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
          (
            ReasonReact.wrapJsForReason(
              ~reactClass=arrowIcon,
              ~props=jsProps(~show=true),
            )
          )
          /* <arrow /> */
          /* <advancedIcon
               height=ICON_SIZE
               onClick=this.handleAdvancedClicked
               onDoubleClick=this.handleAdvancedClicked
               width=ICON_SIZE
               fill=advancedColor
             /> */
          (ReasonReact.string("To get started, edit"))
        </div>
      </div>
    </div>,
};