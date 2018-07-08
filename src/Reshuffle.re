let reshuffle = d => {
  let rec qsort = arr =>
    switch (arr) {
    | [] => []
    | [x, ...y] =>
      let (_, rx) = x;
      let p1 =
        qsort(
          List.filter(
            e => {
              let (_, r) = e;
              r > rx;
            },
            y,
          ),
        );
      let p2 =
        qsort(
          List.filter(
            e => {
              let (_, r) = e;
              r <= rx;
            },
            y,
          ),
        );
      p1 @ [x, ...p2];
    };
  let arr = List.map(d => (d, Random.float(1)), d);
  let result = qsort(arr);
  List.map(
    e => {
      let (a, _) = e;
      a;
    },
    result,
  );
};