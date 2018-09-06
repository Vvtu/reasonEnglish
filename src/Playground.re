/* setTimeout curring -------------------------*/
let t0 = Js.Global.setTimeout(() => Js.log("Time out"), 1000);
let t1 = Js.Global.setTimeout(() => Js.log("Time out"));
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
let a = Random.int(100);

let inc = i => i + 1;

Js.log(2147483647 |> inc);

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
Js.log3(k1, k2);

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
let ivan = {name: "Ivan", group: 5};
let alex = {...ivan, name: "Alex"};
let alexGroup = alex.group;