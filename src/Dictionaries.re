type wordPair = {
  rus: string,
  eng: string,
};

type pairList = list(wordPair);

let dictionary2 = [
  {
    rus: {js|Статические средства проверки типов, такие как Flow и TypeScript, индетифицируют определенные типы проблем еще до запуска кода.|js},
    eng: "Static type checkers like Flow and TypeScript identify certain types of problems before you even run your code.",
  },
  {
    rus: {js|До сих пор мы создали приложение, которое корректно рендерится как функция от props и state, стекающих вниз по иерарxии.|js},
    eng: "So far, we've built an app that renders correctly as a function of props and state flowing down the hierarchy.",
  },
  {
    rus: {js|Если вы используете Babel преобразование, такое как transform-class-properties , вы также можете объявить defaultProps как статическое свойство в классе компонента React.|js},
    eng: "If you are using a Babel transform like transform-class-properties , you can also declare defaultProps as static property within a React component class.",
  },
  {
    rus: {js|Вы не можете использовать атрибут ref для функциональных компонентов, потому что у них нет экземпляров.|js},
    eng: "You may not use the ref attribute on functional components because they don't have instances.",
  },
  {
    rus: {js|Значение ref отличается в зависимости от типа узла.|js},
    eng: "The value of the ref differs depending on the type of the node.",
  },
  {
    rus: {js|Мы регулярно совершенствуем эвристику, чтобы ускорить общие случаи использования.|js},
    eng: "We are regularly refining the heuristics in order to make common use cases faster.",
  },
  {
    rus: {js|Поскольку React полагается на эвристики, если допущения, лежащие в их основе, не будут выполнены, производительность пострадает.|js},
    eng: "Because React relies on heuristics, if the assumptions behind them are not met, performance will suffer.",
  },
  {
    rus: {js|Алгоритм не будет пытаться сопоставить поддеревья различных типов компонентов.|js},
    eng: "The algorithm will not try to match subtrees of different component types.",
  },
  {
    rus: {js|Важно помнить, что алгоритм согласования - это деталь реализации.|js},
    eng: "It is important to remember that the reconciliation algorithm is an implementation detail.",
  },
  {
    rus: {js|React может перерендеривать все приложение на каждое действие; конечный результат будет одинаковым.|js},
    eng: "React could rerender the whole app on every action; the end result would be the same.",
  },
  {
    rus: {js|Чтобы быть ясным, rerender в этом контексте означает вызов render для всех компонентов, это не значит, что React размонтирует и перемонтирует их. Он будет применять только различия в соответствии с Правилами, изложенными в предыдущих разделах.|js},
    eng: "Just to be clear, rerender in this context means calling render for all components, it doesn't mean React will unmount and remount them. It will only apply the differences following the rules stated in the previous sections.",
  },
  {
    rus: {js|React имеет некоторые встpоенные возможности проверки типов.|js},
    eng: "React has some built-in typechecking abilities.",
  },
  {
    rus: {js|Чтобы выполнить проверку типов для props компонента, можно назначить специальное propTypes свойство.|js},
    eng: "To run typechecking on the props for a component, you can assign the special propTypes property.",
  },
];

let oldDictionary2 = [
  {
    rus: {js|Ключ должен быть уникальным только среди своих братьев, а не глобально уникальным.|js},
    eng: "The key only has to be unique among its siblings, not globally unique.",
  },
  {
    rus: {js|React присваивает текущему свойству элемент DOM при монтировании компонента и присваивает ему обратно значение null при размонтировании.|js},
    eng: "React will assign the current property with the DOM element when the component mounts, and assign it back to null when it unmounts.",
  },
  {
    rus: {js|Обновления рефов происходят до componentdidmount или componentdidupdate хуков жизненного цикла.|js},
    eng: "ref updates happen before componentDidMount or componentDidUpdate lifecycle hooks.",
  },
  {
    rus: {js|В типичном потоке данных React props - это единственный способ взаимодействия родительских компонентов со своими дочерними элементами.|js},
    eng: "In the typical React dataflow, props are the only way that parent components interact with their children.",
  },
];

let dictionary1 = [
  {
    rus: {js|Вышеупомянутый option, например, устраняет необходимость в типах, допускающих значение NULL, что является основным источником ошибок в других языках.|js},
    eng: "The aforementioned option variant, for example, obliterates the need for nullable types, a major source of bugs in other languages.",
  },
  {
    rus: {js|Философски выражаясь, проблема состоит из многих возможных ветвей/условия. Неправильное выполнение этих условий является основной частью того, что мы называем ошибками.|js},
    eng: "Philosophically speaking, a problem is composed of many possible branches/conditions. Mishandling these conditions is the majority of what we call bugs.",
  },
  {
    rus: {js|Система типов не устраняет ошибки волшебным образом; она указывает на необработанные условия и просит Вас покрыть их.|js},
    eng: "A type system doesn't magically eliminate bugs; it points out the unhandled conditions and asks you to cover them.",
  },
  {
    rus: {js|Способность правильно моделировать 'то или это' имеет решающее значение.|js},
    eng: "The ability to model 'this or that' correctly is crucial.",
  },
  {
    rus: {js|Например, некоторые люди задаются вопросом, как система типов может безопасно исключить плохо форматированные данные JSON из распространения в их программу.|js},
    eng: "For example, some folks wonder how the type system can safely eliminate badly formatted JSON data from propagating into their program.",
  },
  {
    rus: {js|Если синтаксический анализатор возвращает тип Option None / Some(...), то вам придется явно обрабатывать случай None на более поздних ��ызовов.|js},
    eng: "If the parser returns the option type None | Some(...), then you'd have to handle the None case explicitly in later calls.",
  },
  {
    rus: {js|Система типов позволяет безопасно вносить большую категорию изменений в кодовые базы без необходимости понимать все это заранее.|js},
    eng: "A type system allows you to safely make a big category of changes to codebases without needing to understand the whole thing upfront.",
  },
  {
    rus: {js|Типы уменьшают уровни абстракций, необходимых для "достижения цели", что в свою очередь уменьшает когнитивную нагрузку на вызывающих абонентов.|js},
    eng: "Types reduce the layers of abstractions needed to 'get things done', which in return reduces callers' cognitive burden.",
  },
  {
    rus: {js|Cам Reason не имеет понятия null или undefined. И это хорошо, так как это стирает целую категорию ошибок.|js},
    eng: "Reason itself doesn't have the notion of null or undefined. This is a great thing, as it wipes out an entire category of bugs.",
  },
  {
    rus: {js|option-to-undefined компиляция не идеальна, потому что с нашей стороны, значения option могут быть композироваться. Some(Some(5)).|js},
    eng: "The option-to-undefined translation isn't perfect, because on our side, option values can be composed.",
  },
  {
    rus: {js|Вам следует использовать list из за легкого изменения размера, быстрого добавления (добавления во голову) и его быстрого разделения, эти операции иммутабельны, но эффективны!|js},
    eng: "You'd use list for its resizability, its fast prepend (adding at the head), and its fast split, all of which are immutable yet efficient!",
  },
  {
    rus: {js|Примечание: Конструкторы Variant должны быть с большой буквы.|js},
    eng: "Note: a variant's constructors need to be capitalized.",
  },
  {
    rus: {js|Вместе с variant приходит одна из самых важных фич Reason, выражение switch.|js},
    eng: "Along with a variant comes one of the most important features of Reason, the switch expression.",
  },
  {
    rus: {js|Switch позволяет проверить все возможные кейсы variant.|js},
    eng: "Switch allows you to check every possible case of a variant.",
  },
  {rus: {js||js}, eng: ""},
  {rus: {js||js}, eng: ""},
  {rus: {js||js}, eng: ""},
  {rus: {js||js}, eng: ""},
  {rus: {js||js}, eng: ""},
  {rus: {js||js}, eng: ""},
  {rus: {js||js}, eng: ""},
  {rus: {js||js}, eng: ""},
  {rus: {js||js}, eng: ""},
  {rus: {js||js}, eng: ""},
  {rus: {js||js}, eng: ""},
];

let oldDictionary1 = [
  {
    rus: {js|Новые записи могут быть созданы из старых записей спред оператором (...). Оригинальная запись не мутируется.|js},
    eng: "New records can be created from old records with the ... spread operator. The original record isn't mutated.",
  },
  {
    rus: {js|Поля записи могут быть опционально изменяемыми. Это позволяет обновлять эти поля на месте с помощью оператора "=".|js},
    eng: "Record fields can optionally be mutable. This allows you to update those fields in-place with the = operator.",
  },
  {
    rus: {js|Чтобы уменьшить избыточность, мы предоставляем punning для типов и значений записей.|js},
    eng: "To reduce redundancy, we provide punning for a record's types and values.",
  },
  {
    rus: {js|Punning это сокращение синтаксиса, которое вы можете использовать, когда имя поля и есть его значение.|js},
    eng: "Punning refers to the syntax shorthand you can use when the name of a field matches the name of its value/type",
  },
  {
    rus: {js|Типы записей находятся по имени поля|js},
    eng: "Record Types Are Found By Field Name",
  },
  {
    rus: {js|С записями Вы не можете сказать (Я бы хотел, чтобы эта функция принимала любой тип записи, если у них есть поле 'age').|js},
    eng: "With records, you cannot say (I'd like this function to take any record type, as long as they have the field age).",
  },
  {
    rus: {js|Если определение типа находится в другом файле, необходимо явно указать, какой это файл.|js},
    eng: "If the type definition resides in another file, you need to explicitly indicate which file it is.",
  },
  {
    rus: {js|Если вам нужна такая возможность, используйте объекты Reason, описанные здесь.|js},
    eng: "If you need such capability, use Reason objects, described here.",
  },
  {
    rus: {js|После прочтения ограничения в предыдущих разделах, и если вы из динамического языка, вам может быть интересно, зачем заморачиваться с Record на первом месте, а не прямо через объект, поскольку Record-у необходима явная типизацию, и Record ... написать функцию, которая принимает разные типы записей, с одним и тем же именем поля , и т. д.|js},
    eng: "After reading the constraints in the previous sections, and if you're coming from a dynamic language background, you might be wondering why one would bother with record in the first place instead of straight using object, since the former needs explicit typing and doesn't allow different records with the same field name to be passed to the same function, etc.",
  },
  {
    rus: {js|Правда в том, что в большинстве случаев в вашем приложении форма ваших данных на самом деле фиксирована, и если это не так, она потенциально может быть лучше представлена как комбинация variant + record.|js},
    eng: "The truth is that most of the times in your app, your data's shape is actually fixed, and if it's not, it can potentially be better represented as a combination of variant + record instead.",
  },
  {
    rus: {js|Запись, так как ее поля фиксированы, компилируется в массив с доступом к индексу массива вместо JS объекта (попробуйте в playground!)|js},
    eng: "Record, since its fields are fixed, is compiled to an array with array index accesses instead of JS object (try it in the playground!).",
  },
  {
    rus: {js|В native запись компилируется в основную область памяти, где доступ к полю-это только один поиск поля + один фактический доступ, ака 2 инструкции по сборке.|js},
    eng: "On native, Record compiles to basically a region of memory where a field access is just one field lookup + one actual access, aka 2 assembly instructions.",
  },
  {
    rus: {js|Наконец, поскольку Тип записи определяется путем нахождения одного явного объявления типа (мы называем это "номинальной типизацией"), сообщения об ошибках типа оказываются лучше, чем аналог ("структурная типизация", как для кортежей)."|js},
    eng: "Finally, since a record type is resolved through finding that single explicit type declaration (we call this 'nominal typing'), the type error messages end up better than the counterpart ('structural typing', like for tuples).",
  },
  {
    rus: {js|Лицезрите, жемчужина структур данных Reason!|js},
    eng: "Behold, the crown jewel of Reason data structures!",
  },
  {
    rus: {js|Большинство структур данных на большинстве языков это "то и это". Variant позволяет выразить "то или это".|js},
    eng: "Most data structures in most languages are about 'this and that'. A variant allows us to express 'this or that'.",
  },
  {
    rus: {js|Например, появится ошибка, если вы забыли покрыть кейс Вашего variant, или если кейс является избыточным.|js},
    eng: "For example, we'll give you a type error if you've forgotten to cover a case of your variant, or if two cases are redundant.",
  },
  {
    rus: {js|Variant требует эксплицитного определения.|js},
    eng: "Variant Needs an Explicit Definition",
  },
  {
    rus: {js|Если вариант, который вы используете, находится в другом файле, перенесите его в scope, кaк для записи.|js},
    eng: "If the variant you're using is in a different file, bring it into scope like you'd do for a record.",
  },
  {
    rus: {js|Обратите внимание, как использование конструктора похоже на вызов функции? Это не совпадение; есть причина, по которой данные конструктора называются "аргументом конструктора".|js},
    eng: "Notice how using a constructor is like calling a function? This isn't a coincidence; there's a reason why a constructor's data is called 'constructor argument'.",
  },
  {
    rus: {js|Стандартная библиотека предлагает два важных варианта, о которых вы много услышите. Optional. List.|js},
    eng: "The standard library exposes two important variants you'll come to hear a lot. Optional. List.",
  },
  {
    rus: {js|Знаете ли вы, что вы можете использовать switch для string, int, float, array и большинство других структур данных?|js},
    eng: "Did you know that you can use switch on string, int, float, array, and most other data structures?",
  },
  /* --------------------------------------------- */
  {
    rus: {js|Используйте структурное равенство осторожно. Это удобно, но может привести к случайному сравнению двух глубоко вложенных структур данных и снижению производительности. Также не всегда понятно, что считается 'равным'.|js},
    eng: "Use structural equal tastefully. It's convenient, but might accidentally make you compare two deeply nested data structures and incur a big performance hit. It's also not always clear what counts as 'equal'.",
  },
  {
    rus: {js|Нахрена я не могу просто использовать перегруженный + для обоих int и float?|js},
    eng: "Why the heck can't I just use an overloaded + for both int and float?",
  },
  {
    rus: {js|Кортежи иммутаблельные, упорядоченные, фиксированного размера во время создания размера, гетерогенные (могут содержать различные типы значений).|js},
    eng: "Tuples are immutable, ordered, fix-sized at creation time, heterogeneous (can contain different types of values).",
  },
  {
    rus: {js|Стандартная библиотека предоставляет fst и snd, удобные функции, которые позволяют получить доступ к первому и второму элем��нту 2-к��ртежа.|js},
    eng: "The standard library provides fst and snd, convenience functions that allow you to access the first and second element of a 2-tuple.",
  },
  {
    rus: {js|Обычно, вы получаете доступ к членам tuple путем деструктурирования.|js},
    eng: "Generally, you'd access tuple members through destructuring.",
  },
  {
    rus: {js|Кортежи не должны обновляться mutatively; вы следует создавать новые, разрушая старые.|js},
    eng: "Tuples aren't meant to be updated mutatively; you'd create new ones by destructuring the old ones.",
  },
  {
    rus: {js|Вы должны использовть кортежи в удобных ситуациях, которые нужно передать несколько значений без особых церемоний. Например, для возврата нескольких значений.|js},
    eng: "You'd use tuples in handy situations that pass around multiple values without too much ceremony. For example, to return many values.",
  },
  {
    rus: {js|Старайтесь использовать кортеж локально. Для долгоживущих и часто передаваемых структур данных предпочтительнее использовать записи с именованными полями.|js},
    eng: "Try to keep the usage of tuple local. For data structures that are long-living and passed around often, prefer a record, which has named fields.",
  },
  {
    rus: {js|Комбинация tuple + switch очень мощная и лаконичная, и стирает целую категорию ошибок.|js},
    eng: "The combination of tuple + switch is very powerful and concise, and wipes out an entire category of bugs.",
  },
  {
    rus: {js|Существование кортежей может показаться странным для тех, кто приходит из нетипизиро��анных языков. 'Почему бы просто не использовать список или массив?'|js},
    eng: "The existence of tuples might seem odd for those coming from untyped languages. 'Why not just use a list or array?'",
  },
  {
    rus: {js|Система типов не всемогуща и не должна быть такой; некоторые со вкусом подобранные компромиссы должны быть применены для того, чтобы язык был простым, производительным (как для компиляции, так и для скорости работы) и легким для понимания.|js},
    eng: "A type system isn't all-powerful, nor should it be; some tasteful trade-offs need to be applied in order to keep the language simple, performant (both compilation and running speed) and easy to understand.",
  },
  {
    rus: {js|Кортеж Reason типизируется 'структурно'. Это означает, что даже если Вы не аннотируете свои данные явным типом, компилятор все равно может вывест�� их, посмотрев на их содержимое, использование и т. д.|js},
    eng: "A Reason tuple is typed 'structurally'. This means that even if you don't annotate your data with an explicit type, the compiler can still deduce it by looking at its content, its usage, etc.",
  },
  {
    rus: {js|Типы-это изюминка Reason! Здесь вы получаете представление о том, почему так много людей в восторге от них.|js},
    eng: "Types are the highlight of Reason! Here, you get a glimpse of why so many are excited about them.",
  },
  {
    rus: {js|Типы могут быть выведены. Система типов выводит типы для вас, даже если Вы не записываете их вручную. Это ускоряет фазу прототипирования.|js},
    eng: "Types can be inferred. The type system deduces the types for you even if you don't manually write them down. This speeds up the prototyping phase.",
  },
  {
    rus: {js|Покрытии типами - всегда 100%. Нам не нужен инструмент для проверки покрытия! Каждая часть кода на Reason имеет Тип.|js},
    eng: "The type coverage is always 100%. We don't need a 'type coverage' tool! Every piece of Reason code has a type.",
  },
  {
    rus: {js|Cистема типов полностью 'здравая'. Что означает, что пока код компилируется нормально, каждый Тип гарантирует, что он не лжет сам о себе.|js},
    eng: "The type system is completely 'sound'. This means that, as long as your code compiles fine, every type guarantees that it's not lying about itself.",
  },
  {
    rus: {js|Строки Reason отделяются двойными кавычками (одинарные кавычки зарезервированы для типа character).|js},
    eng: "Reason strings are delimited using double quotes (single quotes are reserved for the character type).",
  },
  {
    rus: {js|Для конкатенации строк используйте ++.|js},
    eng: "To concatenate strings, use ++.",
  },
  {
    rus: {js|Поскольку строка Reason сопоставляется со строкой JavaScript, вы можете использовать строковые операции обеих стандартных библиотеках.|js},
    eng: "Since a Reason string maps to a JavaScript string, you can mix & match the string operations in both standard libraries.",
  },
  {
    rus: {js|Reason имеет тип для строки из одной буквы. Char не поддерживает Unicode или UTF-8.|js},
    eng: "Reason has a type for a string with a single letter. Char doesn't support Unicode or UTF-8.",
  },
  {
    rus: {js|Char компилируется в целое число от 0 до 255, для дополнительной скорости. Вы можете также паттерн-матчинг на нем.|js},
    eng: "A character compiles to an integer ranging from 0 to 255, for extra speed. You can also pattern-match on it.",
  },
];

let oldOldDictionary2 = [];