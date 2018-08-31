let sumInt = (i, j) => i + j;
let k = sumInt(5, 10);
Js.log(k);

/* -------------------------------------- */

let sumFloat = (x, y) => x +. y;
let a = sumFloat(0.1, 0.2);
Js.log(a);

/* -------------------------------------- */

let time = t => Js.Global.setTimeout(_ => Js.log("Time out"), t);
time(2000);