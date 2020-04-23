[%bs.raw {|require("./index.css")|}];

[@bs.module "./serviceWorker"]
external register_service_worker: unit => unit = "register";

let randomSeed = Js.Date.now() |> int_of_float;

ReactDOMRe.renderToElementWithId(<App />, "root");

register_service_worker();