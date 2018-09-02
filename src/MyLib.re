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