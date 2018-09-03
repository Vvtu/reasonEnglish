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

let take = (a, b) => MyLib.takeItems(a, b);

let a = [3, 4, 5]; /* [3, 4, 5]       */

let b = [2, ...a]; /* [2, 3, 4, 5]    */

let c = [1, ...b]; /* [1, 2, 3, 4, 5] */

let d =
  /* [2, 3, 4, 5]    */
  switch (c) {
  | [] => []
  | [_, ...t] => t
  };

let e = take(3, c); /* [1, 2, 3]      */