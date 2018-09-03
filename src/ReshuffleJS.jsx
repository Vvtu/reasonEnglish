const reshuffleJS1 = (dic) => {
	const p1 = dic.map((x) => [ Math.random(), x ]);
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
//const reshuffleJS2 = (dic) =>
dic
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
const reshuffleJS3 = (dic) => {
	const newDic = dic.slice(0);
	for (let i = newDic.length - 1; i > 0; i -= 1) {
		const j = Math.floor(Math.random() * (i + 1));
		[ newDic[i], newDic[j] ] = [ newDic[j], newDic[i] ];
	}
	return newDic;
};
//
// эти алгоритмы более чувствительны к качеству random()
