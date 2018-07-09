module Reshuffle = {
  let reshuffle = dic =>
    dic
    |> List.map(item => (item, Random.int(10000000)))
    |> List.sort(((_, a), (_, b)) => a - b)
    |> List.map((a, _) => a);
};