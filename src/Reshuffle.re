let reshuffle1 = dic => {
  let a = List.map(item => (Random.int(1000000), item), dic);
  let b = List.sort(((i, _), (j, _)) => i - j, a);
  let c = List.map(((_, item)) => item, b);
  c;
};
/* -----------------------------------------------------------*/

open List;

let reshuffle2 = dic => {
  let a = map(item => (Random.int(1000000), item), dic);
  let b = sort(((i, _), (j, _)) => i - j, a);
  let c = map(((_, item)) => item, b);
  c;
};
/* -----------------------------------------------------------*/

let reshuffle3 = dic =>
  map(
    ((_, item)) => item,
    sort(
      ((i, _), (j, _)) => i - j,
      map(item => (Random.int(1000000), item), dic),
    ),
  );
/* -----------------------------------------------------------*/

let reshuffle = dic =>
  dic
  |> map(item => (Random.int(1000000), item))
  |> sort(((i, _), (j, _)) => i - j)
  |> map(((_, item)) => item);
/* -----------------------------------------------------------*/

let (+>) = (v, f) => f(v); /*   v +> f  :  f(v)  */
let reshuffle5 = dic =>
  dic
  +> map(item => (Random.int(1000000), item))
  +> sort(((i, _), (j, _)) => i - j)
  +> map(((_, item)) => item);
/* -----------------------------------------------------------*/

/* !!! Окончательно dic убрать не удалось,
   в отличии от Haskell или OCaml */

/* fast pipe -  "|."  and  "<-"  not working,  */

/*  Ramda inspired library of helper functions for ReasonML */
/* https://github.com/jonlaing/rationale  */
/*
  Infix Operators

  >>=: Monadic Bind
  <$>: Functor Fmap
  <*>: Applicative Apply
  <||: Point-free Function Compose
  ||>: Point-free Function Pipe
  -<<: Lens Compose
  >>-: Lens Pipe

  |?: Optional Or
         a, b, and c are all options, but d is not
         let x = a |? b |? c |> default(d);
 */