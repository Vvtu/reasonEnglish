let rec takeItems = (n, list0) =>
  switch (n, list0) {
  | (_, []) => []
  | (0, _) => []
  | (_, [x, ...tail]) => [x, ...takeItems(n - 1, tail)]
  };