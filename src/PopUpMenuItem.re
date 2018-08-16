[%bs.raw {|require('./PopUpWindow.css')|}];

let component = ReasonReact.statelessComponent("PopUpMenuItem");

let make = (~label, ~onClick, children) => {
  ...component,
  render: _self =>
    <div className="popup__row" onClick onDoubleClick=onClick>
      (
        ReasonReact.createDomElement(
          "div",
          ~props={"className": "popup__width35"},
          children,
        )
      )
      <div className="popup__gap" />
      <div> (ReasonReact.string(label)) </div>
    </div>,
};
