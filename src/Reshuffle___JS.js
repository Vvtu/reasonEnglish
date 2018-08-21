const reshuffle1 = (dic) => {
	const a = dic.map((item) => [ Math.random(), item ]);
	const b = a.sort((a, b) => a[0] - b[0]);
	const c = b.map((elem) => elem[1]);
	return c;
};
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
const reshuffle2 = (dic) =>
	dic
		.map((item) => [ Math.random(), item ])
		.sort((a, b) => a[0] - b[0])
		.map((elem) => elem[1]);
