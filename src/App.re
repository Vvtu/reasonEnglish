[%bs.raw {|require('./App.css')|}];

[@bs.module] external logo : string = "./logo.svg";

include Dictionaries;

type action =
  | Tick;

type state = {
  count: int,
  timerId: ref(option(Js.Global.intervalId)),
};

let rec fact = n =>
  switch (n) {
  | 0 => 1
  | 1 => 1
  | _ => n * fact(n - 1)
  };

let su = (a, b) => a + b;

let component = ReasonReact.reducerComponent("App");
Js.log("sdfdsfsdf   1111  fact(5) = " ++ string_of_int(fact(5)));

let make = (~message, _children) => {
  ...component,
  initialState: () => {count: 0, timerId: ref(None)},
  reducer: (action, state) =>
    switch (action) {
    | Tick => ReasonReact.Update({...state, count: state.count + 1})
    },
  didMount: self =>
    self.state.timerId :=
      Some(Js.Global.setInterval(() => self.send(Tick), 1000)),
  willUnmount: self =>
    switch (self.state.timerId^) {
    | Some(id) => Js.Global.clearInterval(id)
    | None => ()
    },
  render: ({state}) =>
    <div className="App">
      <div className="App-header">
        <img src=logo className="App-logo" alt="logo" />
        <h2> (ReasonReact.string(message)) </h2>
        <div> (ReasonReact.string(string_of_int(state.count))) </div>
      </div>
      <p className="App-intro">
        (ReasonReact.string("To get started, edit"))
        <code> (ReasonReact.string(" src/App.re ")) </code>
        (ReasonReact.string("and save to reload."))
      </p>
    </div>,
};