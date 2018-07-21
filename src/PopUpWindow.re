[%bs.raw {|require('./PopUpWindow.css')|}];

[@bs.val]
external requestAnimationFrame : (unit => unit) => float =
  "requestAnimationFrame";

type state = {increaseOpacity: bool};
type action =
  | SetIncreaseOpacityFalse
  | SetIncreaseOpacityTrue;
let component = ReasonReact.reducerComponent("PopUpWindow");

let make = (~handleClosePopupClicked, _children) => {
  ...component,
  initialState: () => {increaseOpacity: false},
  reducer: (action, _state) =>
    switch (action) {
    | SetIncreaseOpacityTrue => ReasonReact.Update({increaseOpacity: true})
    | SetIncreaseOpacityFalse => ReasonReact.Update({increaseOpacity: false})
    },
  didMount: ({send}) => {
    let _ = requestAnimationFrame(_ => send(SetIncreaseOpacityTrue));
    ();
  },
  render: ({state}) => {
    Js.log("PopUpWindow render");
    <div
      className=(
        state.increaseOpacity === true ?
          "popup__opacity_1" : "popup__opacity_0"
      )
      onClick=handleClosePopupClicked
      onDoubleClick=handleClosePopupClicked>
      <div className="popup__full_screen_div_opacity" />
      <div className="popup__full_screen_div">
        <div className="popup__window">
          <div className="popup__cancel">
            <IconCancel color=Constants.whiteColor height="16" />
          </div>
          <div className="popup__list">
            <div> (ReasonReact.string("activeObj.eng")) </div>
          </div>
        </div>
      </div>
    </div>;
  },
};