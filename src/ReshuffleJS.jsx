const reshuffleJS1 = (cards) => {
	const p1 = cards.map((x) => [ Math.random(), x ]);
	const p2 = p1.sort((x, y) => x[0] - y[0]);
	const p3 = p2.map((x) => x[1]);
	return p3;
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
//
//
//const reshuffleJS2 = (cards) =>
cards
	.map((x) => [ Math.random(), x ])
	.sort((x, y) => x[0] - y[0])
	.map((x) => x[1]);
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
//
//
//
const reshuffleJS3 = (cards) => {
	const newDic = cards.slice(0);
	for (let i = newDic.length - 1; i > 0; i -= 1) {
		const j = Math.floor(Math.random() * (i + 1));
		[ newDic[i], newDic[j] ] = [ newDic[j], newDic[i] ];
	}
	return newDic;
};
//
// эти алгоритмы более чувствительны к качеству random()
