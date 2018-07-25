[%bs.raw {|require('./PopUpWindow.css')|}];

[@bs.val]
external requestAnimationFrame : (unit => unit) => float =
  "requestAnimationFrame";

type state = {increaseOpacity: bool};
type action =
  | SetIncreaseOpacityTrue
  | ClosePopUp;
let component = ReasonReact.reducerComponent("PopUpWindow");

type menuItemType = {
  label: string,
  icon: ReasonReact.reactElement,
  color: string,
  /* itemAction: action, */
};

let make = (~handleClosePopupClicked, _children) => {
  let menuRow = menuItem =>
    <div className="popup__row">
      <div className="popup__gap" />
      <div> (ReasonReact.string(menuItem.label)) </div>
    </div>;

  {
    ...component,
    initialState: () => {increaseOpacity: false},
    reducer: (action, _state) =>
      switch (action) {
      | SetIncreaseOpacityTrue => ReasonReact.Update({increaseOpacity: true})
      | ClosePopUp =>
        ReasonReact.UpdateWithSideEffects(
          {increaseOpacity: false},
          (
            _ => {
              let _ = Js.Global.setTimeout(handleClosePopupClicked, 500);
              ();
            }
          ),
        )
      },
    didMount: ({send}) => {
      let _ = requestAnimationFrame(_ => send(SetIncreaseOpacityTrue));
      ();
    },
    render: ({state, send}) => {
      Js.log("PopUpWindow render");
      <div
        className=(
          state.increaseOpacity === true ?
            "popup__opacity_1" : "popup__opacity_0"
        )
        onClick=(_ => send(ClosePopUp))
        onDoubleClick=(_ => send(ClosePopUp))>
        <div className="popup__full_screen_div_opacity" />
        <div className="popup__full_screen_div">
          <div className="popup__window">
            <div className="popup__cancel">
              <IconCancel color=Constants.whiteColor height="16" />
            </div>
            <div className="popup__list">
              (
                menuRow({
                  label: "activeng",
                  color: "white",
                  icon: <IconCancel />,
                })
              )
              (menuRow({label: "activeng", color: "white"}))
              (menuRow({label: "activeng", color: "white"}))
              (menuRow({label: "activeng", color: "white"}))
            </div>
          </div>
        </div>
      </div>;
    },
  };
};