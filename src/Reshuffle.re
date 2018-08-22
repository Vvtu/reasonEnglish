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


let (==>) = (f1, f2, x) => f2(f1(x));

let reshuffle11 = dic => {
  let f1 = x => map(item => (Random.int(1000000), item), x);
  let f2 = x => sort(((i, _), (j, _)) => i - j, x);
  let f3 = x => map(((_, item)) => item, x);
  (f1 ==> f2 ==> f3)(dic);
};


let reshuffle12 = dic => {
  let f1 = map(item => (Random.int(1000000), item));
  let f2 = sort(((i, _), (j, _)) => i - j);
  let f3 = map(((_, item)) => item);
  (f1 ==> f2 ==> f3)(dic);
};

let reshuffle13 = dic =>
  (
    map(item => (Random.int(1000000), item))
    ==> sort(((i, _), (j, _)) => i - j)
    ==> map(((_, item)) => item)
  )(
    dic,
  );


let reshuffle14 =
  map(item => (Random.int(1000000), item))
  ==> sort(((i, _), (j, _)) => i - j)
  ==> map(((_, item)) => item);

/* OCaml
let (==>) f1 f2 x = f2 (f1 x)

let reshuffleOc =
    (map (fun item  -> ((Random.int 1000000), item))
    ==> (sort (fun (i,_)  -> fun (j,_)  -> i - j)))
    ==> (map (fun (_,item)  -> item))

Скобки вокруг первого выражения обязательны.
Появилось fun для объявления функций
В OCaml   let f=(x,y,z)  =>  .... let f = (x) => (y) => (z)
    */
