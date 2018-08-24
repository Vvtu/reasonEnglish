type wordPair = {
  rus: string,
  eng: string,
};

type pairList = list(wordPair);

let dictionary1: pairList = [
  {
    rus: {js|1 По умолчанию, при рекурсии на дочерних узлах DOM, React просто перебирает оба списка дочерних узлов одновременно и генерирует мутацию всякий раз, когда есть разница.|js},
    eng: "By default, when recursing on the children of a DOM node, React just iterates over both lists of children at the same time and generates a mutation whenever there’s a difference.",
  },
  {
    rus: {js|1 React предоставляет декларативный API, так что вам не придется беспокоиться о том, что именно изменяется в каждом обновлении.|js},
    eng: "React provides a declarative API so that you don't have to worry about exactly what changes on every update.",
  },
  {
    rus: {js|1 Это делает написание приложений намного проще, но может быть не очевидно, как это реализуется в React.|js},
    eng: "This makes writing applications a lot easier, but it might not be obvious how this is implemented within React.",
  },
  {
    rus: {js|1 Эта статья объясняет выбор, который мы сделали в алгоритме react 'diffing', так что обновления компонентов предсказуемы, будучи достаточно быстрыми для высокопроизводительных приложений.|js},
    eng: "This article explains the choices we made in React’s 'diffing' algorithm so that component updates are predictable while being fast enough for high-performance apps.",
  },
  {
    rus: {js|1 Когда вы используете React, в каждый момент времени вы можете думать о функции render() как создающий дерево элементов React.|js},
    eng: "When you use React, at a single point in time you can think of the render function as creating a tree of React elements.",
  },
  {
    rus: {js|1 При следующем обновлении state или props эта функция render вернет другое дерево элементов React.|js},
    eng: "On the next state or props update, that render function will return a different tree of React elements.",
  },
  {
    rus: {js|1 React-у затем необходимо выяснить, как эффективно обновить пользовательский интерфейс, чтобы соотвествовать последниму дереву.|js},
    eng: "React then needs to figure out how to efficiently update the UI to match the most recent tree.",
  },
];
let oldDictionary1: pairList = [
  {
    rus: {js|old1 Ты меня понимаешь?|js},
    eng: "Do you understand me?",
  },
  {rus: {js|old1 Дай мне ручку.|js}, eng: "Give me a pen."},
  {rus: {js|old1 Дай мне ручку.|js}, eng: "Give me a pen."},
  {
    rus: {js|old1 Встреть меня в кинотеатре|js},
    eng: "Meet me in the theatre.",
  },
  {rus: {js|old1 начинать|js}, eng: "begin, began, begun"},
  {rus: {js|old1 ломать|js}, eng: "break, broke, broken"},
  {rus: {js|old1 приносить|js}, eng: "bring, brought, brought"},
  {rus: {js|old1 покупать|js}, eng: "buy, bought, bought"},
  {rus: {js|old1 выбирать|js}, eng: "choose, chose, chosen"},
  {
    rus: {js|old1 приходить, приезжать|js},
    eng: "come, came, come",
  },
  {rus: {js|old1 резать|js}, eng: "cut, cut, cut"},
  {rus: {js|old1 делать|js}, eng: "do, did, done"},
  {rus: {js|old1 рисовать|js}, eng: "draw, drew, drawn"},
  {rus: {js|old1 пить|js}, eng: "drink, drank, drunk"},
  {rus: {js|old1 есть, кушать|js}, eng: "eat, ate, eaten"},
  {rus: {js|old1 падать|js}, eng: "fall, fell, fallen"},
];

let dictionary2: pairList = [
  {rus: {js|2 тушить огонь|js}, eng: "to put out a fire"},
  {rus: {js|2 бросать мусор|js}, eng: "to drop a litter"},
  {rus: {js|2 овощи|js}, eng: "vegetables"},
  {rus: {js|2 сладости|js}, eng: "sweets"},
  {rus: {js|2 в хорошей форме|js}, eng: "fit"},
  {rus: {js|2 сильный|js}, eng: "strong"},
  {rus: {js|2 упражнение|js}, eng: "exercise"},
  {rus: {js|2 богатый|js}, eng: "rich"},
  {rus: {js|2 бедный|js}, eng: "poor"},
  {rus: {js|2 здоровый|js}, eng: "healthy"},
];

let oldDictionary2: pairList = [
  {
    rus: {js|old2 React предоставляет декларативный API, так что вам не придется беспокоиться о том, что именно изменяется в каждом обновлении.|js},
    eng: "React provides a declarative API so that you don’t have to worry about exactly what changes on every update.",
  },
  {
    rus: {js|old2 Это делает написание приложений намного проще, но может быть не очевидно, как это реализуется в React.|js},
    eng: "This makes writing applications a lot easier, but it might not be obvious how this is implemented within React.",
  },
  {
    rus: {js|old2 Эта статья объясняет выбор, который мы сделали в алгоритме react 'diffing', так что обновления компонентов предсказуемы, будучи достаточно быстрыми для высокопроизводительных приложений.|js},
    eng: "This article explains the choices we made in React’s 'diffing' algorithm so that component updates are predictable while being fast enough for high-performance apps.",
  },
  {
    rus: {js|old2 Когда вы используете React, в каждый момент времени вы можете думать о функции render() как создающий дерево элементов React.|js},
    eng: "When you use React, at a single point in time you can think of the render function as creating a tree of React elements.",
  },
  {
    rus: {js|old2 При следующем обновлении state или props эта функция render вернет другое дерево элементов React.|js},
    eng: "On the next state or props update, that render() function will return a different tree of React elements.",
  },
  {
    rus: {js|old2 React-у затем необходимо выяснить, как эффективно обновить пользовательский интерфейс, чтобы соотвествовать последниму дереву.|js},
    eng: "React then needs to figure out how to efficiently update the UI to match the most recent tree.",
  },
];