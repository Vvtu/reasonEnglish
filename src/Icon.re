module Advanced = {
  let component = ReasonReact.statelessComponent("Icon.Advanced");

  let make = (~color: string, ~height: string, _children) => {
    ...component,
    shouldUpdate: _ => false,
    render: _self => {
      Js.log("IconAdvanced render");
      <svg
        viewBox="0 0 24 24"
        xmlns="http://www.w3.org/2000/svg"
        height
        width=height
        fill=color>
        <g id="icons">
          <path
            d="M22.2,14.4L21,13.7c-1.3-0.8-1.3-2.7,0-3.5l1.2-0.7c1-0.6,1.3-1.8,0.7-2.7l-1-1.7c-0.6-1-1.8-1.3-2.7-0.7 L18,5.1c-1.3,0.8-3-0.2-3-1.7V2c0-1.1-0.9-2-2-2h-2C9.9,0,9,0.9,9,2v1.3c0,1.5-1.7,2.5-3,1.7L4.8,4.4c-1-0.6-2.2-0.2-2.7,0.7 l-1,1.7C0.6,7.8,0.9,9,1.8,9.6L3,10.3C4.3,11,4.3,13,3,13.7l-1.2,0.7c-1,0.6-1.3,1.8-0.7,2.7l1,1.7c0.6,1,1.8,1.3,2.7,0.7L6,18.9 c1.3-0.8,3,0.2,3,1.7V22c0,1.1,0.9,2,2,2h2c1.1,0,2-0.9,2-2v-1.3c0-1.5,1.7-2.5,3-1.7l1.2,0.7c1,0.6,2.2,0.2,2.7-0.7l1-1.7 C23.4,16.2,23.1,15,22.2,14.4z M12,16c-2.2,0-4-1.8-4-4c0-2.2,1.8-4,4-4s4,1.8,4,4C16,14.2,14.2,16,12,16z"
            id="settings"
          />
        </g>
      </svg>;
    },
  };
};
module Arrow = {
  let component = ReasonReact.statelessComponent("Icon.Arrow");

  let make = (~color: string, ~height: string, _children) => {
    ...component,
    shouldUpdate: _ => false,
    render: _self => {
      Js.log("IconArrow render");
      <svg
        height
        viewBox="0 0 141.732 141.732"
        width=height
        xmlns="http://www.w3.org/2000/svg"
        fill=color>
        <path
          d="M105.614,118.681c3.398,3.396,3.4,8.912,0,12.311c-3.396,3.399-8.91,3.398-12.311,0c-0.02-0.02-0.035-0.04-0.053-0.061 l-0.025,0.022l-57.66-57.66l0.024-0.022c-1.61-1.579-2.608-3.775-2.608-6.208c-0.002-2.73,1.258-5.166,3.229-6.762l-0.06-0.058 l57.66-57.66l0.025,0.024c0.018-0.021,0.033-0.039,0.053-0.058c3.4-3.4,8.912-3.4,12.312,0c3.398,3.396,3.398,8.908,0,12.311 c-0.021,0.02-0.041,0.034-0.061,0.054l0.023,0.024L54.043,67.063l51.54,51.54l-0.025,0.021 C105.573,118.646,105.594,118.66,105.614,118.681"
        />
      </svg>;
    },
  };
};

module Cancel = {
  let component = ReasonReact.statelessComponent("Icon.Cancel");

  let make = (~color: string, ~height: string, _children) => {
    ...component,
    shouldUpdate: _ => false,
    render: _self => {
      Js.log("IconCancel render");
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
      </svg>;
    },
  };
};
module ClearAllInfo = {
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
};
module Voices = {
  let component = ReasonReact.statelessComponent("Voices");

  let make = (~color: string, ~height: string, _children) => {
    ...component,
    render: _self =>
      <svg
        xmlns="http://www.w3.org/2000/svg"
        width=height
        height
        viewBox="0 0 24 24">
        <circle cx="9" cy="9" r="4" />
        <path
          d="M9 15c-2.67 0-8 1.34-8 4v2h16v-2c0-2.66-5.33-4-8-4zm7.76-9.64l-1.68 1.69c.84 1.18.84 2.71 0 3.89l1.68 1.69c2.02-2.02 2.02-5.07 0-7.27zM20.07 2l-1.63 1.63c2.77 3.02 2.77 7.56 0 10.74L20.07 16c3.9-3.89 3.91-9.95 0-14z"
        />
        <path fill="none" d="M0 0h24v24H0z" />
      </svg>,
  };
};