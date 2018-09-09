let component = ReasonReact.statelessComponent("main");

let make = _children => {
  ...component,
  render: _self =>
    <div>
      {ReasonReact.string("hello")}
      <Next.Link href="hello">
        <div> {ReasonReact.string("beep")} </div>
      </Next.Link>
    </div>,
  /* <title> ReasonReact.string "hi" </title> */
};

let default = ReasonReact.wrapReasonForJs(~component, _jsProps => make([||]));