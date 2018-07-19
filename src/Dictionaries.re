type wordPair = {
  rus: string,
  eng: string,
};

type pairList = list(wordPair);

let dictionary2: pairList = [
  {rus: {js|тушить огонь|js}, eng: "to put out a fire"},
  {rus: {js|бросать мусор|js}, eng: "to drop a litter"},
  {rus: {js|овощи|js}, eng: "vegetables"},
  {rus: {js|сладости|js}, eng: "sweets"},
  {rus: {js|в хорошей форме|js}, eng: "fit"},
  {rus: {js|сильный|js}, eng: "strong"},
  {rus: {js|упражнение|js}, eng: "exercise"},
  {rus: {js|богатый|js}, eng: "rich"},
  {rus: {js|бедный|js}, eng: "poor"},
  {rus: {js|здоровый|js}, eng: "healthy"},
];

let oldDictionary1: pairList = [
  {
    rus: {js|Ты меня понимаешь?|js},
    eng: "Do you understand me?",
  },
  {rus: {js|Дай мне ручку.|js}, eng: "Give me a pen."},
  {rus: {js|Дай мне ручку.|js}, eng: "Give me a pen."},
  {
    rus: {js|Встреть меня в кинотеатре|js},
    eng: "Meet me in the theatre.",
  },
  {rus: {js|начинать|js}, eng: "begin, began, begun"},
  {rus: {js|ломать|js}, eng: "break, broke, broken"},
  {rus: {js|приносить|js}, eng: "bring, brought, brought"},
  {rus: {js|покупать|js}, eng: "buy, bought, bought"},
  {rus: {js|выбирать|js}, eng: "choose, chose, chosen"},
  {
    rus: {js|приходить, приезжать|js},
    eng: "come, came, come",
  },
  {rus: {js|резать|js}, eng: "cut, cut, cut"},
  {rus: {js|делать|js}, eng: "do, did, done"},
  {rus: {js|рисовать|js}, eng: "draw, drew, drawn"},
  {rus: {js|пить|js}, eng: "drink, drank, drunk"},
  {rus: {js|есть, кушать|js}, eng: "eat, ate, eaten"},
  {rus: {js|падать|js}, eng: "fall, fell, fallen"},
];

let dictionary1: pairList = [
  {
    rus: {js|По умолчанию, при рекурсии на дочерних узлах DOM, React просто перебирает оба списка дочерних узлов одновременно и генерирует мутацию всякий раз, когда есть разница. По умолчанию, при рекурсии на дочерних узлах DOM, React просто перебирает оба списка дочерних узлов одновременно и генерирует мутацию всякий раз, когда есть разница.|js},
    eng: "By default, when recursing on the children of a DOM node, React just iterates over both lists of children at the same time and generates a mutation whenever there’s a difference.",
  },
  {
    rus: {js|Когда у детей есть ключи, React использует ключ для сопоставления детей в исходном дереве с детьми в последующем дереве. Когда у детей есть ключи, React использует ключ для сопоставления детей в исходном дереве с детьми в последующем дереве.|js},
    eng: "When children have keys, React uses the key to match children in the original tree with children in the subsequent tree.",
  },
];

let oldDictionary2: pairList = [
  {
    rus: {js|React предоставляет декларативный API, так что вам не придется беспокоиться о том, что именно изменяется в каждом обновлении.|js},
    eng: "React provides a declarative API so that you don’t have to worry about exactly what changes on every update.",
  },
  {
    rus: {js|Это делает написание приложений намного проще, но может быть не очевидно, как это реализуется в React.|js},
    eng: "This makes writing applications a lot easier, but it might not be obvious how this is implemented within React.",
  },
  {
    rus: {js|Эта статья объясняет выбор, который мы сделали в алгоритме react 'diffing', так что обновления компонентов предсказуемы, будучи достаточно быстрыми для высокопроизводительных приложений.|js},
    eng: "This article explains the choices we made in React’s 'diffing' algorithm so that component updates are predictable while being fast enough for high-performance apps.",
  },
  {
    rus: {js|Когда вы используете React, в каждый момент времени вы можете думать о функции render() как создающий дерево элементов React.|js},
    eng: "When you use React, at a single point in time you can think of the render function as creating a tree of React elements.",
  },
  {
    rus: {js|При следующем обновлении state или props эта функция render вернет другое дерево элементов React.|js},
    eng: "On the next state or props update, that render() function will return a different tree of React elements.",
  },
  {
    rus: {js|React-у затем необходимо выяснить, как эффективно обновить пользовательский интерфейс, чтобы соотвествовать последниму дереву.|js},
    eng: "React then needs to figure out how to efficiently update the UI to match the most recent tree.",
  },
];