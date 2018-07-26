let component = ReasonReact.statelessComponent("ClearAllInfo");

let make = (~color: string, ~height: string, _children) => {
  ...component,
  render: _self =>
    <svg
      height
      viewBox="0 0 16 16"
      width=height
      xmlns="http://www.w3.org/2000/svg"
      fill=color>
      <g fill="none" fillRule="evenodd" id="Icons with numbers">
        <g fill=color id="Group" transform="translate(-432 -432)">
          <path
            d="M438.972188,442 L438.972188,433 L447.922128,433 L444.938815,436 C446.430471,437 448.419347,439.5 447.922128,442 C447.424909,445 445.436034,447 440.961064,447 C435.491657,447 434,442.5 434,442 C436.983313,444.5 438.972188,445 440.961064,445 C442.949939,445 443.944377,443.5 443.944377,442 C443.944377,441 443.447158,440 441.955502,439 L438.972188,442 L438.972188,442 Z M438.972188,442"
            id="Shape copy"
            transform="matrix(-1 0 0 1 882 0)"
          />
        </g>
      </g>
    </svg>,
};