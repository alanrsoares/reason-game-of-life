let handleMouseEvent = (callback, e) =>
  if (ReactEvent.Mouse.nativeEvent(e)##which === 1) {
    callback();
  };

module Wrapper = [%styled.div
  (~background: string) => {j|
    width: .9rem;
    height: 1rem;
    margin: .05rem;
    background-color: $background;
    border-radius: .1rem;
  |j}
];

[@react.component]
let make = (~isAlive, ~onToggle) =>
  <Wrapper
    onMouseOver={handleMouseEvent(onToggle)}
    onMouseDown={handleMouseEvent(onToggle)}
    background={isAlive ? "#fff" : "#272B30"}
  />;