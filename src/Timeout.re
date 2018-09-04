let sumInt = (i, j) => i + j;
let k = sumInt(5, 10);
Js.log(k);

/* -------------------------------------- */

let sumFloat = (x, y) => x +. y;
let a = sumFloat(0.1, 0.2);
Js.log(a);

/* -------------------------------------- */

/* setTimeout curring */
let time = t => Js.Global.setTimeout(_ => Js.log("Time out"), t);
time(2000);

/* ----------------------------------------------- */

let (@@) = (f, x) => f(x);

let f1 = x => "f1(" ++ x ++ ")";
let f2 = x => "f2(" ++ x ++ ")";

let res1 = f1 @@ f2 @@ "a"; /* left associative conveyer */
Js.log(res1); /* "f1(f2(a))" */

let res2 = "a" |> f1 |> f2; /* right associative conveyer */
Js.log(res2); /* "f2(f1(a))" */