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
const reshuffle2 = (dic) =>
	dic
		.map((item) => [ Math.random(), item ])
		.sort((a, b) => a[0] - b[0])
		.map((elem) => elem[1]);

//
//
//
//

const reshuffle3 = (dic) => {
	const copy = dic.slice();
	for (let i = arr.length - 1; i > 0; i -= 1) {
		const j = Math.flor(Math.random() * (i + 1));
		[ copy[i], copy[j] ] = [ copy[j], copy[i] ];
	}
	return copy;
};

// проблема разреженных массивов
