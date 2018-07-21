let component = ReasonReact.statelessComponent("IconCancel");

let make = (~color: string, ~height: string, _children) => {
  ...component,
  render: _self =>
    <svg
      height
      viewBox="0 0 32 32"
      width=height
      xmlns="http://www.w3.org/2000/svg"
      fill=color>
      <rect fill="none" height width=height />
      <polygon
        fill=color
        points="2,26 6,30 16,20 26,30 30,26 20,16 30,6 26,2 16,12 6,2 2,6 12,16"
      />
    </svg>,
};