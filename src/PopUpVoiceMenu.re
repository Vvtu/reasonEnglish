module PopUpMenuItem = {
  let component = ReasonReact.statelessComponent("PopUpMenuItem");
  let make = (~label, ~onClick, children) => {
    ...component,
    render: _self =>
      <div className="popup__row" onClick onDoubleClick=onClick>
        <div className="popup__width35"> ...children </div>
        <div className="popup__gap" />
        <div> (ReasonReact.string(label)) </div>
      </div>,
  };
};

[@bs.val]
external requestAnimationFrame : (unit => unit) => float =
  "requestAnimationFrame";

type state = {increaseOpacity: bool};
type action =
  | SetIncreaseOpacityTrue
  | ClosePopUp;
let component = ReasonReact.reducerComponent("PopUpVoiceMenu");

let make =
    (
      ~handleClosePopupClicked,
      ~handleRestart,
      ~whiteColor,
      ~dangerColor,
      _children,
    ) => {
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
            let _ = Js.Global.setTimeout(handleClosePopupClicked, 1000);
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
    Js.log("PopUpVoiceMenu render");

    <div
      className=(
        state.increaseOpacity === true ?
          "popup__opacity_1" : "popup__opacity_0"
      )
      onClick=(_ => send(ClosePopUp))
      onDoubleClick=(_ => send(ClosePopUp))>
      <div className="popup__full_screen_div">
        <div className="popup__window popup__scroll">
          <div className="popup__cancel">
            <Icon.Cancel color=whiteColor height=Constants.iconSmallSize />
          </div>
          <div className="popup__list">
            (
              [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15]
              |> List.map(item =>
                   <PopUpMenuItem
                     key=(string_of_int(item))
                     label="dict #2"
                     onClick=(_ => ())>
                     <div className="appcode__eng_text_color">
                       (ReasonReact.string("D2"))
                     </div>
                   </PopUpMenuItem>
                 )
              |> Array.of_list
              |> ReasonReact.array
            )
          </div>
        </div>
      </div>
    </div>;
  },
};