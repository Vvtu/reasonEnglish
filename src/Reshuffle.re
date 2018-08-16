open List;

/* let (==>) = (value, func) => func(value); */

let reshuffle = dic =>
  dic
  |> map(item => (item, Random.int(1000000)))
  |> sort(((_, i), (_, j)) => i - j)
  |> map(((item, _)) => item);