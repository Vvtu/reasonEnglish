type wordPair = {
  rus: string,
  eng: string,
};

type pairList = list(wordPair);

let dictionary1: pairList = [
  {rus: "тушить огонь", eng: "to put out a fire"},
  {rus: "бросать мусор", eng: "to drop a litter"},
  {rus: "овощи", eng: "vegetables"},
  {rus: "сладости", eng: "sweets"},
  {rus: "в хорошей форме", eng: "fit"},
  {rus: "сильный", eng: "strong"},
  {rus: "упражнение", eng: "exercise"},
  {rus: "богатый", eng: "rich"},
  {rus: "бедный", eng: "poor"},
  {rus: "здоровый", eng: "healthy"},
];

let oldDictionary1: pairList = [
  {rus: "Ты меня понимаешь?", eng: "Do you understand me?"},
  {rus: "Дай мне ручку.", eng: "Give me a pen."},
  {rus: "Дай мне ручку.", eng: "Give me a pen."},
  {
    rus: "Встреть меня в кинотеатре",
    eng: "Meet me in the theatre.",
  },
  {rus: "начинать", eng: "begin, began, begun"},
  {rus: "ломать", eng: "break, broke, broken"},
  {rus: "приносить", eng: "bring, brought, brought"},
  {rus: "покупать", eng: "buy, bought, bought"},
  {rus: "выбирать", eng: "choose, chose, chosen"},
  {rus: "приходить, приезжать", eng: "come, came, come"},
  {rus: "резать", eng: "cut, cut, cut"},
  {rus: "делать", eng: "do, did, done"},
  {rus: "рисовать", eng: "draw, drew, drawn"},
  {rus: "пить", eng: "drink, drank, drunk"},
  {rus: "есть, кушать", eng: "eat, ate, eaten"},
  {rus: "падать", eng: "fall, fell, fallen"},
];

let dictionary2: pairList = [
  {
    rus: "По умолчанию, при рекурсии на дочерних узлах DOM, React просто перебирает оба списка дочерних узлов одновременно и генерирует мутацию всякий раз, когда есть разница.",
    eng: "By default, when recursing on the children of a DOM node, React just iterates over both lists of children at the same time and generates a mutation whenever there’s a difference.",
  },
  {
    rus: "Когда у детей есть ключи, React использует ключ для сопоставления детей в исходном дереве с детьми в последующем дереве.",
    eng: "When children have keys, React uses the key to match children in the original tree with children in the subsequent tree.",
  },
  {
    rus: "На практике найти ключ обычно не сложно. Элемент, который вы собираетесь отобразить, может уже иметь уникальный ID, поэтому ключ может просто прийти из ваших данных.",
    eng: "In practice, finding a key is usually not hard. The element you are going to display may already have a unique ID, so the key can just come from your data.",
  },
  {
    rus: "Когда это не так, вы можете добавить новое свойство ID в свою модель или хэшировать некоторые части контента для создания ключа.",
    eng: "When that’s not the case, you can add a new ID property to your model or hash some parts of the content to generate a key.",
  },
  {
    rus: "Ключ должен быть уникальным только среди своих братьев и сестер, а не глобально уникальным.",
    eng: "The key only has to be unique among its siblings, not globally unique.",
  },
];

let oldDictionary2: pairList = [
  {
    rus: "React предоставляет декларативный API, так что вам не придется беспокоиться о том, что именно изменяется в каждом обновлении.",
    eng: "React provides a declarative API so that you don’t have to worry about exactly what changes on every update.",
  },
  {
    rus: "Это делает написание приложений намного проще, но может быть не очевидно, как это реализуется в React.",
    eng: "This makes writing applications a lot easier, but it might not be obvious how this is implemented within React.",
  },
  {
    rus: "Эта статья объясняет выбор, который мы сделали в алгоритме react 'diffing', так что обновления компонентов предсказуемы, будучи достаточно быстрыми для высокопроизводительных приложений.",
    eng: "This article explains the choices we made in React’s 'diffing' algorithm so that component updates are predictable while being fast enough for high-performance apps.",
  },
  {
    rus: "Когда вы используете React, в каждый момент времени вы можете думать о функции render() как создающий дерево элементов React.",
    eng: "When you use React, at a single point in time you can think of the render function as creating a tree of React elements.",
  },
  {
    rus: "При следующем обновлении state или props эта функция render вернет другое дерево элементов React.",
    eng: "On the next state or props update, that render() function will return a different tree of React elements.",
  },
  {
    rus: "React-у затем необходимо выяснить, как эффективно обновить пользовательский интерфейс, чтобы соотвествовать последниму дереву.",
    eng: "React then needs to figure out how to efficiently update the UI to match the most recent tree.",
  },
];