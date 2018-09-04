let reshuffle1 = dic => {
  let p1 = List.map(x => (Random.int(1000000), x), dic);
  let p2 = List.sort((x, y) => fst(x) - fst(y), p1);
  let p3 = List.map(x => snd(x), p2);
  p3;
};
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* -----------------------------------------------------------*/

open List;
let reshuffle2 = dic => {
  let p1 = map(x => (Random.int(1000000), x), dic);
  let p2 = sort(((x, _), (y, _)) => x - y, p1);
  let p3 = map(((_, x)) => x, p2);
  p3;
};
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* -----------------------------------------------------------*/

let reshuffle3 = dic =>
  map(
    ((_, x)) => x,
    sort(
      ((x, _), (y, _)) => x - y,
      map(x => (Random.int(1000000), x), dic),
    ),
  );
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* -----------------------------------------------------------*/

let reshuffle4 = dic =>
  dic
  |> map(x => (Random.int(1000000), x))
  |> sort(((x, _), (y, _)) => x - y)
  |> map(((_, x)) => x);

/*
  let reshuffle4_OCaml dic =
   ((dic
     |> (map (fun x  -> ((Random.int 1000000), x))))
     |> (sort (fun (x,_)  -> fun (y,_)  -> x - y)))
     |> (map (fun (_,x)  -> x))
 */

/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* -----------------------------------------------------------*/

let (+>) = (x, f) => f(x); /*   x +> f  :  f(x)  -  применение функции к аргументу */
let reshuffle5 = dic =>
  dic
  +> map(x => (Random.int(1000000), x))
  +> sort(((x, _), (y, _)) => x - y)
  +> map(((_, x)) => x);

/* */
/* */
/* */
/* */
/* */
/* -----------------------------------------------------------*/

/*  Переопределили +
    let (+) = (x, f) => f(x);
    let reshuffle5 = dic =>
      dic
      + map(x => (Random.int(1000000), x))
      + sort(((x, _), (y, _)) => x - y)
      + map(((_, x)) => x);
    */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* -----------------------------------------------------------*/

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
         p1, p2, and p3 are all options, but d is not
         let x = p1 |? p2 |? p3 |> default(d);
 */

/* let (@@) = (f, x) => f(x); */
/* оператор $ — это оператор применения (англ. application operator) */

let reshuffle7 = dic => {
  let f1 = x => map(x => (Random.int(1000000), x), x);
  let f2 = x => sort(((x, _), (y, _)) => x - y, x);
  let f3 = x => map(((_, x)) => x, x);
  f3 @@ f2 @@ f1 @@ dic;
};
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* -----------------------------------------------------------*/
let reshuffle8 = dic => {
  let f1 = map(x => (Random.int(1000000), x));
  let f2 = sort(((x, _), (y, _)) => x - y);
  let f3 = map(((_, x)) => x);
  f3 @@ f2 @@ f1 @@ dic;
};

/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */
/* */

let reshuffle9 = dic =>
  map(((_, x)) => x) @@
  sort(((x, _), (y, _)) => x - y) @@
  map(x => (Random.int(1000000), x)) @@
  dic;

/* аргумент dic убрать не получается ! */