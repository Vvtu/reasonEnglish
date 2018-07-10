module Reshuffle = {
  let reshuffle = dic =>
    dic
    |> List.map(item => (item, Random.int(10000000)))
    |> List.sort(((_, i), (_, j)) => i - j)
    |> List.map(((item, _)) => item);
};