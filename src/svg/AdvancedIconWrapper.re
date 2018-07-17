[@bs.module "./AdvancedIcon.jsx"]
external arrowIcon : ReasonReact.reactClass = "default";

let make = (~color: string, ~height: string, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass=arrowIcon,
    ~props={"fill": color, "height": height, "width": height},
    children,
  );