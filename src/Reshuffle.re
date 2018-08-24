let reshuffle0 = dic => {
  let a = List.map(item => (Random.int(1000000), item), dic);
  let b = List.sort((x, y) => fst(x) - fst(y), a);
  let c = List.map(x => snd(x), b);
  c;
};
/* -----------------------------------------------------------*/

let reshuffle1 = dic => {
  let a = List.map(item => (Random.int(1000000), item), dic);
  let b = List.sort(((x, _), (y, _)) => x - y, a);
  let c = List.map(((_, item)) => item, b);
  c;
};
/* -----------------------------------------------------------*/

open List;
let reshuffle2 = dic => {
  let a = map(item => (Random.int(1000000), item), dic);
  let b = sort(((x, _), (y, _)) => x - y, a);
  let c = map(((_, item)) => item, b);
  c;
};
/* -----------------------------------------------------------*/

let reshuffle3 = dic =>
  map(
    ((_, item)) => item,
    sort(
      ((x, _), (y, _)) => x - y,
      map(item => (Random.int(1000000), item), dic),
    ),
  );
/* -----------------------------------------------------------*/

let reshuffle4 = dic =>
  dic
  |> map(item => (Random.int(1000000), item))
  |> sort(((x, _), (y, _)) => x - y)
  |> map(((_, item)) => item);
/* -----------------------------------------------------------*/

let (+>) = (x, f) => f(x); /*   x +> f  :  f(x)  -  применение функции к аргументу */
let reshuffle5 = dic =>
  dic
  +> map(item => (Random.int(1000000), item))
  +> sort(((x, _), (y, _)) => x - y)
  +> map(((_, item)) => item);
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
         a, b, and c are all options, but d is not
         let x = a |? b |? c |> default(d);
 */

let (==>) = (f1, f2, x) => f2(f1(x)); /* композиция функций */

let reshuffle6 = dic => {
  let f1 = x => map(item => (Random.int(1000000), item), x);
  let f2 = x => sort(((x, _), (y, _)) => x - y, x);
  let f3 = x => map(((_, item)) => item, x);
  (f1 ==> f2 ==> f3)(dic);
};

let reshuffle7 = dic => {
  let f1 = map(item => (Random.int(1000000), item));
  let f2 = sort(((x, _), (y, _)) => x - y);
  let f3 = map(((_, item)) => item);
  (f1 ==> f2 ==> f3)(dic);
};

let reshuffle8 = dic =>
  (
    map(item => (Random.int(1000000), item))
    ==> sort(((x, _), (y, _)) => x - y)
    ==> map(((_, item)) => item)
  )(
    dic,
  );

/* ERROR
   let reshuffle9 =
     map(item => (Random.int(1000000), item))
     ==> sort(((x, _), (y, _)) => x - y)
     ==> map(((_, item)) => item);

     This expression's type contains type variables that can't be generalized:
     list('_a) => list('_a)
   */

/* OCaml
   let (==>) f1 f2 x = f2 (f1 x)

   let reshuffleOc =
       (map (fun item  -> ((Random.int 1000000), item))
       ==> (sort (fun (x,_)  -> fun (y,_)  -> x - y)))
       ==> (map (fun (_,item)  -> item))

   Скобки вокруг всех трех выражений обязательны,
   так как нет скобок у аргументов.

   Появилось fun для объявления функций
   В OCaml   let f=(x,y,z)  =>  .... let f = (x) => (y) => (z)
   */