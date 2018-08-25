const reshuffle1 = (dic) => {
	const p1 = dic.map((x) => [ Math.random(), x ]);
	const p2 = p1.sort((x, y) => x[0] - y[0]);
	const p3 = p2.map((x) => x[1]);
	return p3;
};
//
//
//
//
const reshuffle2 = (dic) =>
	dic
		.map((x) => [ Math.random(), x ])
		.sort((x, y) => x[0] - y[0])
		.map((x) => x[1]);
//
//
//
//
const reshuffle3 = (dic) => {
	const copy = dic.slice(0);
	for (let i = copy.length - 1; i > 0; i -= 1) {
		const j = Math.floor(Math.random() * (i + 1));
		[ copy[i], copy[j] ] = [ copy[j], copy[i] ];
	}
	return copy;
};

// эти алгоритмы более чувствительны к качеству random()
//
//
// проблема разреженных массивов

const reshuffle4 = (dic) => {
	const copy = dic.filter((x) => x !== undefined);
	for (let i = copy.length - 1; i > 0; i -= 1) {
		const j = Math.floor(Math.random() * (i + 1));
		[ copy[i], copy[j] ] = [ copy[j], copy[i] ];
	}
	return copy;
};
