let rec takeItems = (n, list) =>
  switch (n, list) {
  | (_, []) => []
  | (0, _) => []
  | (_, [x, ...tail]) => [x, ...takeItems(n - 1, tail)]
  };

let rec dropItems = (n, list) =>
  switch (n, list) {
  | (_, []) => []
  | (0, _) => list
  | (_, [_, ...tail]) => dropItems(n - 1, tail)
  };

let getVoiceIndex = () =>
  switch (Dom.Storage.(localStorage |> getItem(Constants.voiceIndexTeg))) {
  | Some(n) => int_of_string(n)
  | None => (-1)
  };

[@bs.val]
external requestAnimationFrame : (unit => unit) => float =
  "requestAnimationFrame";

let getColorsFromCSS: unit => (string, string, string, string) =
  () => (
    [%bs.raw
      {| getComputedStyle(document.documentElement).getPropertyValue("--base-text-color") |}
    ],
    [%bs.raw
      {| getComputedStyle(document.documentElement).getPropertyValue("--settings-color") |}
    ],
    [%bs.raw
      {| getComputedStyle(document.documentElement).getPropertyValue("--english-text-color") |}
    ],
    [%bs.raw
      {| getComputedStyle(document.documentElement).getPropertyValue("--danger-color") |}
    ],
  );

let aaa = () => 10;