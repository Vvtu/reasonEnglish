/* setTimeout curring -------------------------*/
let t0 = Js.Global.setTimeout(() => Js.log("t0 - time out"), 1000);
let t1 = Js.Global.setTimeout(() => Js.log("t1 - time out"));
t1(1000);
2000 |> t1;
/* let (|>) = ( x, f ) => f( x );
   - reverse-application operator
   - right associative conveyer ) */

t1 @@ 3000;
/* let (@@) = ( f , x ) => f( x );
   - application operator
   - left associative conveyer
   - полный аналог $ - оператора применения из Haskell */

/* inc ----------------------------------------*/
let inc = i => i + 1;

let overMax0 = inc(2147483647);
let overMax1 = 2147483647 |> inc;

let a = Random.int(100);

Js.log(inc(inc(inc(inc(inc(a))))));
Js.log(a |> inc |> inc |> inc |> inc |> inc);
Js.log(inc @@ inc @@ inc @@ inc @@ inc @@ a);

/* Bitwise logical operators
   https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Bitwise_Operators#Bitwise_logical_operators

   Conceptually, the bitwise logical operators work as follows:

   The operands are converted to 32-bit integers
   and expressed by a series of bits (zeroes and ones).
   Numbers with more than 32 bits get their
   most significant bits discarded.
   For example, the following integer with more than 32
   bits will be converted to a 32 bit integer:

   Before: 11100110111110100000000000000110000000000001
   After:              10100000000000000110000000000001
   */

/* sumInt -------------------------------------*/
let sumInt = (i, j) => i + j;
let k1 = sumInt(5, 10);
/* let k1 = sumInt(5)(10); */
let k2 = 10 |> sumInt(5);
Js.log3("k1, k2 = ", k1, k2);

let m = sumInt(2147483647, 1);
Js.log2("m = ", m);

/* sumFloat ------------------------------------*/
let sumFloat = (x, y) => x +. y;
let a = sumFloat(0.1, 0.2);
Js.log2("a = ", a);

a |> Js.log2("a = ");

/* Record --------------------------------------*/
type person = {
  name: string,
  group: int,
};
/* nominant typing  vs structural typing */
let ivan = {name: "Ivan", group: 5};
let alex = {...ivan, name: "Alex"};
let alexGroup = alex.group;

/* List ---------------------------------------*/
let a = [1, 2, 3]; /* a = [1,[2,[3,0]]] */
let b = [10, ...a];
Js.log2("b=", b);

let c =
  switch (b) {
  | [] => []
  | [_, ...tail] => tail
  };
let r = c === a;
Js.log2("r=", r);

/* qsort ---------------------------------------*/

let rec qsort = a =>
  switch (a) {
  | [] => []
  | [x, ...y] =>
    let (p1, p2) =
      List.fold_left(
        ((a1, a2), e) => e > x ? ([e, ...a1], a2) : (a1, [e, ...a2]),
        ([], []),
        y,
      );
    let p1Sort = qsort(p1);
    let p2Sort = qsort(p2);
    p1Sort @ [x, ...p2Sort];
  };

/* Module functor -----------------------------*/

/* такая функция, которая берет модуль, */
/* навешивает на него некоторую функциональность, */
/* и возвращает другой модуль */

module StringMap =
  Map.Make({
    type t = string;
    let compare = (a, b) => a < b ? 1 : (-1);
  });

open StringMap;
let m = empty |> add("key1", 10) |> add("key2", 20);
m |> mapi((a, b) => Js.log2(a, b));
Js.log("---------------------");
let m2 = m |> add("key2", 200);
m2 |> mapi((a, b) => Js.log2(a, b));

/* switch when   -----------------------------   */

let result =
  switch (Random.int(100)) {
  | a when a < 5 => "undershoot"
  | 5 => "hit the target"
  | _ => "overshoot"
  };

/*
 var a$3 = Random.$$int(100);

 var result = a$3 < 5 ? "undershoot" : (
     a$3 !== 5 ? "overshoot" : "hit the target"
   );
 */

/*  -- Create object (with point) ----------------*/

/* let _ = {
     let height = 20;
     let jsObj = {"height": height, "width": 20, "draw": () => 10};
     %bs.raw
     {| console.log('jsObj = ', jsObj) |};
     Js.log(jsObj);
   }; */