type wordPair = {
  rus: string,
  eng: string,
};

type pairList = list(wordPair);

let dictionary1: pairList = [
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
  {
    rus: {js|Как вы должны содержать своё тело сильным и в хорошей форме?|js},
    eng: "How can you keep your body strong and fit?",
  },
  {
    rus: {js|Что вы должны есть каждый день?|js},
    eng: "What should you eat every day?",
  },
  {
    rus: {js|Что вы должны пить каждый день?|js},
    eng: "What should you drink every day?",
  },
  {
    rus: {js|Упражнение это хорошо потому, что позволяет поддерживать ваше тело здоровым.|js},
    eng: "Exercise is good beacause it keeps you healthy.",
  },
  {rus: {js|загородная местность|js}, eng: "countyside"},
  {rus: {js|простуда|js}, eng: "a cold"},
  {rus: {js|сыпь|js}, eng: "a rash"},
  {rus: {js|крем для кожи|js}, eng: "a skin cream"},
  {rus: {js|боль в животе|js}, eng: "a stomachache"},
  {rus: {js|головная боль|js}, eng: "a headache"},
  {rus: {js|зубная боль|js}, eng: "a toothache"},
  {rus: {js|шуметь|js}, eng: "to make a noise"},
  {rus: {js|трава|js}, eng: "grass"},
  {rus: {js|В чем дело?|js}, eng: "What's the matter?"},
  {
    rus: {js|У меня зубная боль.|js},
    eng: "I've got a toothache.",
  },
  {
    rus: {js|Тебе следует пойти к дантисту.|js},
    eng: "You should go to the dentist's.",
  },
  {
    rus: {js|Мы не должны мусорить.|js},
    eng: "We mustn't drop litter.",
  },
  {
    rus: {js|Мы должны держаться вне травы.|js},
    eng: "We must keep off the grass.",
  },
  {
    rus: {js|Мы должны держать наших собак на поводке.|js},
    eng: "We must keep our dogs on a lead.",
  },
  {
    rus: {js|Мы не должны рвать цветы.|js},
    eng: "We must not pick flowers.",
  },
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
  {rus: {js|кормить|js}, eng: "feed, fed, fed"},
  {rus: {js|находить|js}, eng: "find, found, found"},
  {rus: {js|летать|js}, eng: "fly, flew, flown"},
  {rus: {js|забывать|js}, eng: "forget, forgot, forgotten"},
  {rus: {js|получать|js}, eng: "get, got, got"},
  {rus: {js|давать|js}, eng: "give, gave, given"},
  {rus: {js|идти, ходить|js}, eng: "go, went, gone"},
  {rus: {js|иметь|js}, eng: "have, had, had"},
  {rus: {js|слышать|js}, eng: "hear, heard, heard"},
  {rus: {js|ушибить|js}, eng: "hurt, hurt, hurt"},
  {rus: {js|знать|js}, eng: "know, knew, known"},
  {
    rus: {js|учить (что-то), узнавать (новое)|js},
    eng: "learn, learned, or, learnt, learned, or, learnt",
  },
  {rus: {js|делать, заставлять|js}, eng: "make, made, made"},
  {rus: {js|встречать|js}, eng: "meet, met, met"},
  {rus: {js|платить|js}, eng: "pay, paid, paid"},
  {rus: {js|класть, положить|js}, eng: "put, put, put"},
  {rus: {js|читать|js}, eng: "read, red, [read], red, [read]"},
  {rus: {js|бежать|js}, eng: "run, ran, run"},
  {rus: {js|говорить|js}, eng: "say, said, said"},
  {rus: {js|видеть|js}, eng: "see, saw, seen"},
  {rus: {js|посылать|js}, eng: "send, sent, sent"},
  {rus: {js|показывать|js}, eng: "show, showed, shown"},
  {rus: {js|петь|js}, eng: "sing, sang, sung"},
  {rus: {js|сидеть|js}, eng: "sit, sat, sat"},
  {rus: {js|спать|js}, eng: "sleep, slept, slept"},
  {rus: {js|нюхать, пахнуть|js}, eng: "smell, smelt, smelt"},
  {rus: {js|говорить|js}, eng: "speak, spoke, spoken"},
  {rus: {js|стоять|js}, eng: "stand, stood, stood"},
  {rus: {js|плавать|js}, eng: "swim, swam, swum"},
  {rus: {js|брать|js}, eng: "take, took, taken"},
  {rus: {js|учить (кого-то)|js}, eng: "teach, taught, taught"},
  {
    rus: {js|сказать (кому-то), рассказать|js},
    eng: "tell, told, told",
  },
  {rus: {js|думать|js}, eng: "think, thought, thought"},
  {rus: {js|понимать|js}, eng: "understand, understood, understood"},
  {rus: {js|носить (одежду)|js}, eng: "wear, wore, worn"},
  {rus: {js|писать|js}, eng: "write, wrote, written"},
];

let dictionary2: pairList = [
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
    rus: {js|Если вы работаете с JavaScript, синтаксис записей и операции должны быть знакомы, и у вас может возникнуть соблазн взаимодействовать с JS, преобразовывая объект JS в запись и наоборот. Это прекрасно, но у нас есть еще лучший способ без накладных расходов!|js},
    eng: "If you're working with JavaScript, the record syntax & operations should feel familiar, and you might be tempted to interop with JS by converting a JS object to a record, and vice-versa. This is fine, but we have an even better way without conversion overhead!",
  },
  {rus: {js||js}, eng: "Record Types Are Found By Field Name"},
  {
    rus: {js||js},
    eng: "With records, you cannot say (I'd like this function to take any record type, as long as they have the field age).",
  },
  {
    rus: {js||js},
    eng: "If the type definition resides in another file, you need to explicitly indicate which file it is.",
  },
  {
    rus: {js||js},
    eng: "If you need such capability, use Reason objects, described here.",
  },
  {
    rus: {js||js},
    eng: "After reading the constraints in the previous sections, and if you're coming from a dynamic language background, you might be wondering why one would bother with record in the first place instead of straight using object, since the former needs explicit typing and doesn't allow different records with the same field name to be passed to the same function, etc.",
  },
  {
    rus: {js||js},
    eng: "The truth is that most of the times in your app, your data's shape is actually fixed, and if it's not, it can potentially be better represented as a combination of variant (introduced next) + record instead.",
  },
  {
    rus: {js||js},
    eng: "Record, since its fields are fixed, is compiled to an array with array index accesses instead of JS object (try it in the playground!).",
  },
  {
    rus: {js||js},
    eng: "On native, Record compiles to basically a region of memory where a field access is just one field lookup + one actual access, aka 2 assembly instructions.",
  },
  {
    rus: {js||js},
    eng: "Finally, since a record type is resolved through finding that single explicit type declaration (we call this 'nominal typing'), the type error messages end up better than the counterpart ('structural typing', like for tuples).",
  },
  {
    rus: {js||js},
    eng: "Nominal typing makes refactoring easier; changing a record type's fields naturally allows the compiler to know that it's still the same record, just misused in some places. Otherwise, under structural typing, it might get hard to tell whether the definition site or the usage site is wrong.",
  },
  {rus: {js||js}, eng: "Behold, the crown jewel of Reason data structures!"},
  {
    rus: {js||js},
    eng: "Most data structures in most languages are about 'this and that'. A variant allows us to express 'this or that'.",
  },
  {
    rus: {js||js},
    eng: "Note: a variant's constructors need to be capitalized.",
  },
  {
    rus: {js||js},
    eng: "Along with a variant comes one of the most important features of Reason, the switch expression.",
  },
  {
    rus: {js||js},
    eng: "Switch allows you to check every possible case of a variant.",
  },
  {
    rus: {js||js},
    eng: "A variant has an extremely rich amount of type system assistance.",
  },
  {
    rus: {js||js},
    eng: "For example, we'll give you a type error if you've forgotten to cover a case of your variant, or if two cases are redundant.",
  },
  {rus: {js||js}, eng: "Variant Needs an Explicit Definition"},
  {
    rus: {js||js},
    eng: "If the variant you're using is in a different file, bring it into scope like you'd do for a record.",
  },
  {
    rus: {js||js},
    eng: "Notice how using a constructor is like calling a function? This isn't a coincidence; there's a reason why a constructor's data is called 'constructor argument'.",
  },
  {
    rus: {js||js},
    eng: "The standard library exposes two important variants you'll come to hear a lot. Optional. List.",
  },
  {
    rus: {js||js},
    eng: "Did you know that you can use switch on string, int, float, array, and most other data structures?",
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
  {rus: {js||js}, eng: ""},
  {rus: {js||js}, eng: ""},
  /* --------------------------------------------- */
];

let oldDictionary2: pairList = [
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
    rus: {js|Стандартная библиотека предоставляет fst и snd, удобные функции, которые позволяют получить доступ к первому и второму элементу 2-кортежа.|js},
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
    rus: {js|Существование кортежей может показаться странным для тех, кто приходит из нетипизированных языков. 'Почему бы просто не использовать список или массив?'|js},
    eng: "The existence of tuples might seem odd for those coming from untyped languages. 'Why not just use a list or array?'",
  },
  {
    rus: {js|Система типов не всемогуща и не должна быть такой; некоторые со вкусом подобранные компромиссы должны быть применены д��я того, чтобы язык был простым, производительным (как для компиляции, так и для скорости работы) и легким для понимания.|js},
    eng: "A type system isn't all-powerful, nor should it be; some tasteful trade-offs need to be applied in order to keep the language simple, performant (both compilation and running speed) and easy to understand.",
  },
  {
    rus: {js|Кортеж Reason типизируется 'структурно'. Это означает, что даже если Вы не аннотирует�� свои данные явным ��ипом, компилятор все равно может вывести их, посмотрев на их содержимое, использование и т. д.|js},
    eng: "A Reason tuple is typed 'structurally'. This means that even if you don't annotate your data with an explicit type, the compiler can still deduce it by looking at its content, its usage, etc.",
  },
  {
    rus: {js|Типы-это изюминка Ризона! Здесь в�� получаете представление о том, почему так много людей в восторге от них.|js},
    eng: "Types are the highlight of Reason! Here, you get a glimpse of why so many are excited about them.",
  },
  {
    rus: {js|Типы могут быть выведены. Система типов выводит типы для вас, даже если Вы не записываете их вручную. Это ускоряет фазу прототипирования.|js},
    eng: "Types can be inferred. The type system deduces the types for you even if you don't manually write them down. This speeds up the prototyping phase.",
  },
  {
    rus: {js|Покрытии типами - всегда 100%. Нам не нужен инструмент для пров��рки покрытия! Каждая часть кода на Reason имеет Тип.|js},
    eng: "The type coverage is always 100%. We don't need a 'type coverage' tool! Every piece of Reason code has a type.",
  },
  {
    rus: {js|Cистема типов полностью 'здравая'. ��то означает, что пока код компилируется нормально, каждый Тип гарантирует, что он не лжет сам о себе.|js},
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
    rus: {js|Существует специальный синтаксис для строк, который позволяет делать многострочные строки, как и раньше, без специальных escape символов, хуки для специальных предпроцессоров.|js},
    eng: "There's a special syntax for string that allows multiline string just like before, no special character escaping, hooks for special pre-processors.",
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
    rus: {js|Char компилируется в целое число от 0 до 255, для дополнит��льной скорости. Вы можете также паттерн-матчинг на нем.|js},
    eng: "A character compiles to an integer ranging from 0 to 255, for extra speed. You can also pattern-match on it.",
  },
];

let oldOldDictionary2: pairList = [
  /* ************************************************************************************************************************** */
  {
    rus: {js|Наша первоочередная задача состоит в том, чтобы удовлетворить потребности клие��тов в своевременной и непрерывной поставке ценного программного ��беспечения.|js},
    eng: "Our highest priority is to satisfy the customer trough early and continuous delivery of valueable software.",
  },
  {
    rus: {js|Приветствуют��я изменения требований, даже на поздних стадиях разработки. Гибкие процессы используют изменения для конкурентного преимущества клиента.|js},
    eng: "Welcome changing requirements, even late in development. Agile processes harness change for the customer's competive advantage.",
  },
  {
    rus: {js|Поставляйте рабочее программное обеспечение часто, от нескольких недель до нескольких месяцев, с предпочтением к более кор��тким временным рамкам.|js},
    eng: "Deliver working software frequently, from a couple of weeks to a couple of months, with a preference to the shorter timescale.",
  },
  {
    rus: {js|Заказчики и разработчики должны ежедневно ��аботать вместе на протяжении всего проекта.|js},
    eng: "Business people and developers must work together daily throughout the project.",
  },
  {
    rus: {js|Стройте проекты вокруг мотивированных людей. Дайте им окружение и поддержку, в которой они нуждаются, и доверяйте им, чтобы работа была сделана.|js},
    eng: "Build projects around motivated individuals. Give them the environment and support they need, and trust them to get the job done.",
  },
  {
    rus: {js|Наиболее эффективным и действенным способом передачи информации команде разработчиков и внутри нее является личная беседа.|js},
    eng: "The most efficient and effective method of conveying information to and within a development team is face-to-face conversation.",
  },
  {
    rus: {js|Рабочая программа-основной критерий прогресса.|js},
    eng: "Working software is the primary measure of progress.",
  },
  {
    rus: {js|Гибкие процессы способствуют устойчивому развитию. Спонсоры, разработчики и пользователи должны иметь возможность поддерживать постоянный темп на неопределенный срок.|js},
    eng: "Agile processes promote sustainable development. The sponsors, developers, and users should be able to maintain a constant pace indefinitely.",
  },
  {
    rus: {js|Постоянное внимание к техническому совершенству и хорошему дизайну повышает гибкость.|js},
    eng: "Continuous attention to technical excellence and good design enhances agility.",
  },
  {
    rus: {js|Простота - искусство максимизации объема незавершенной работы - имеет важное значение.|js},
    eng: "Simplicity – the art of maximizing the amount of work not done–is essential.",
  },
  {
    rus: {js|Лучшие архитектуры, требования и проекты появляются из самоорганизую��ихся команд.|js},
    eng: "The best architectures, requirements, and designs emerge from self-organizing teams.",
  },
  {
    rus: {js|Через регулярные промежутки времени, кома��да размышляет о том, как стать более эффективной, подстраивает и корректирует свое поведение со��тветствующим образом.|js},
    eng: "At regular intervals, the team reflects on how to become more effective, then tunes and adjusts its behavior accordingly.",
  },
  {
    rus: {js|Scrum-это framework, в котором люди мо��ут решать сложные адаптивные проблемы, продуктивно и творчески доставляя продукты максимально возможной ценности|js},
    eng: "Scrum is a framework within which people can address complex adaptive problems, while productively and creatively delivering products of the highest possible value.",
  },
  {
    rus: {js|Scrum-это не методология. Scrum реализует научный метод эмпиризма. Scrum заменяет запрограммированный алгоритмический подход эвристическим, с уважением к людям и самоорганизацией для решения непредсказуемости и решения сложных проблем.|js},
    eng: "Scrum is not a methodology. Scrum implements the scientific method of empiricism. Scrum replaces a programmed algorithmic approach with a heuristic one, with respect for people and self-organization to deal with unpredictability and solving complex problems.",
  },
  {
    rus: {js|Scrum не является процессом, техник��й или окончательным методом. Скорее, это framework, в которыом вы можете использовать различные процессы и методы.|js},
    eng: "Scrum is not a process, technique, or definitive method. Rather, it is a framework within which you can employ various processes and techniques.",
  },
  {
    rus: {js|Framework Scrum состоит из команд Scrum и связанных с ними ролей, событий, артефактов и правил. Каждый компонент в рамках служит определенной цели и имеет важное значение для успеха и использования Скрама.|js},
    eng: "The Scrum framework consists of Scrum Teams and their associated roles, events, artifacts, and rules. Each component within the framework serves a specific purpose and is essential to Scrum's success and usage.",
  },
  {
    rus: {js|Правила Scrum связывают вместе роли, события и артефакты, управляя отношениями и взаимодействием между ними. Правила Scrum описаны всюду по телу этого документа.|js},
    eng: "The rules of Scrum bind together the roles, events, and artifacts, governing the relationships and interaction between them. The rules of Scrum are described throughout the body of this document.",
  },
  {
    rus: {js|Мы выявляем лучшие способы разработки программного обеспечения, делая это и помогая другим делать это.|js},
    eng: "We are uncovering better ways of developing software by doing it and helping others do it.",
  },
  {
    rus: {js|Через эту работу мы пришли к ценности.|js},
    eng: "Through this work we have come to value.",
  },
  {
    rus: {js|Люди и взаимодействия выше, чем процессы и инструменты|js},
    eng: "Individuals and interactions over processes and tools.",
  },
  {
    rus: {js|Работающее software вы��е, чем всеобъемлющая документация.|js},
    eng: "Working software over comprehensive documentation.",
  },
  {
    rus: {js|Сотрудничество с заказчиком выше, чем обсуждение условий контракта.|js},
    eng: "Customer collaboration over contract negotiation.",
  },
  {
    rus: {js|Реагирование на изменения выше, чем следование плану.|js},
    eng: "Responding to change over following a plan.",
  },
  {
    rus: {js|"пятая ценность": мудрость и здравый смысл превыше знаний и опыта.|js},
    eng: {js|'The fifth value':  Wisdom and common sense over knowledge and expertise.|js},
  },
  {
    rus: {js|То есть, в то время как есть ценность в элементах справа, мы ценим элементы слева больше.|js},
    eng: "That is, while there is value in the items on the right, we value the items on the left more.",
  },
  /* https:reactjs.org/docs/reconciliation.html */
  {
    rus: {js|Компонент более высокого порядка (HOC) - это продвинутая техника в React для повторного использования компонентной логики. Hoc не являются частью React API, как т��ко��������е. Э��о паттерны, которые возникают из композиционной природы React.|js},
    eng: "A higher-order component (HOC) is an advanced technique in React for reusing component logic. HOCs are not part of the React API, per se. They are a pattern that emerges from React's compositional nature.",
  },
  {
    rus: {js|Конкретно, компонент более высокого порядка является функцией, которая берет компонент и возвращает новый компонент.|js},
    eng: "Concretely, a higher-order component is a function that takes a component and returns a new component.",
  },
  {
    rus: {js|HOCs распространены в сторонних библиотеках React, таких как connect Redux и Relay's createFragmentContainer.|js},
    eng: "HOCs are common in third-party React libraries, such as Redux's connect and Relay's createFragmentContainer.",
  },
  {
    rus: {js|В этом документе мы обсудим, почему компоненты более высокого порядка полезны и как написать свои собственные.|js},
    eng: "In this document, we'll discuss why higher-order components are useful, and how to write your own.",
  },
  {
    rus: {js|Компоненты-основная единица повторного использования кода в React. Однако, вы обнаружите, что некоторые патерны не подходят для традиционных компонентов.|js},
    eng: "Components are the primary unit of code reuse in React. However, you'll find that some patterns aren't a straightforward fit for traditional components.",
  },
  {
    rus: {js|Мы хотим абстракцию, которая позволяет определить эту логику в одном месте и разделить ее между многими компонентами.|js},
    eng: "We want an abstraction that allows us to define this logic in a single place and share it across many components.",
  },
  {
    rus: {js|Здесь компоненты более высокого порядка превосходят все.|js},
    eng: "This is where higher-order components excel.",
  },
  {
    rus: {js|Обратите внимание, что HOC не изменяе�� входной компонент и не использует наследование для копирования его поведения.|js},
    eng: "Note that a HOC doesn't modify the input component, nor does it use inheritance to copy its behavior.",
  },
  {
    rus: {js|Скорее, HOC составляет исходный компонент, заключая его в компонент контейнера.|js},
    eng: "Rather, a HOC composes the original component by wrapping it in a container component.",
  },
  {
    rus: {js|HOC-это чистая функция с нулевыми побочными эффектами.|js},
    eng: "A HOC is a pure function with zero side-effects.",
  },
  {
    rus: {js|И это все! Обернутый компонент получает все реквизиты контейнера вместе с новым реквизитом, данн��е, которые он использует для визуализации своих выходных данных.|js},
    eng: "And that's it! The wrapped component receives all the props of the container, along with a new prop, data, which it uses to render its output.",
  },
  {
    rus: {js|HOC не имеет отношения к тому, как и почему используются данные, и обернутый компонент не связан с тем, откуда пришли данные.|js},
    eng: "The HOC isn't concerned with how or why the data is used, and the wrapped component isn't concerned with where the data came from.",
  },
  {
    rus: {js|Как в компонентах, контракт между withSubscription и обернутым компонентом п��лностью основан на props.|js},
    eng: "Like components, the contract between withSubscription and the wrapped component is entirely props-based.",
  },
  {
    rus: {js|Это упрощает замену одного HOC на другой, если они предоставляют оди��аковые props для обернутого компонента. Это может быть полезно, например, при изменении библиотек фетчинга данных.|js},
    eng: "This makes it easy to swap one HOC for a different one, as long as they provide the same props to the wrapped component. This may be useful if you change data-fetching libraries, for example.",
  },
  {
    rus: {js|Не изменяйте исходный компонент. Используйте копозицию.|js},
    eng: "Don't Mutate the Original Component. Use Composition.",
  },
  {
    rus: {js|Вместо мутации HOCs следует использовать композицию, заключив входной компонент в компонент-контейнер.|js},
    eng: "Instead of mutation, HOCs should use composition, by wrapping the input component in a container component.",
  },
  {
    rus: {js|Этот HOC имеет ту же функциональность, что и мутирующая версия, избегая при этом возможности стол����новений.|js},
    eng: "This HOC has the same functionality as the mutating version while avoiding the potential for clashes.",
  },
  {
    rus: {js|Он одинаково хорошо ��аботает с класс и ф��нкциональными компонентами.|js},
    eng: "It works equally well with class and functional components.",
  },
  {
    rus: {js|И потому, что это чистая функция, он компонуем с другими HOC, или даже с самим собой.|js},
    eng: "And because it's a pure function, it's composable with other HOCs, or even with itself.",
  },
  {
    rus: {js|Возможно, вы заметили сходство между HOCs и паттерном, наз��ваемым контейнер-компоненты.|js},
    eng: "You may have noticed similarities between HOCs and a pattern called container components.",
  },
  {
    rus: {js|Контейнерные компоненты являются частью стратегии разделения ответ��твенности между задачами высокого и низкого уровня.|js},
    eng: "Container components are part of a strategy of separating responsibility between high-level and low-level concerns.",
  },
  {
    rus: {js|Контейнеры управляют такими вещами, как подписки и состояние, и передают props компонентам, которые обрабат��вают такие вещи, как рендеринг UI. HOCs используют контейнеры как часть их реализации.|js},
    eng: "Containers manage things like subscriptions and state, and pass props to components that handle things like rendering UI. HOCs use containers as part of their implementation.",
  },
  {
    rus: {js|HOCs можно рассматривать как параметризованные определения контейнер-компонента.|js},
    eng: "You can think of HOCs as parameterized container component definitions.",
  },
  {
    rus: {js|Соглашение: Передавать несвязанные props через обернутый компонент.|js},
    eng: "Convention: Pass Unrelated Props Through to the Wrapped Component",
  },
  {
    rus: {js|HOCs должны пропускать props, которые не связаны с его конкретной работой.|js},
    eng: "HOCs should pass through props that are unrelated to its specific concern.",
  },
  {
    rus: {js|Конвенция: максимизация Композиционности|js},
    eng: "Convention: Maximizing Composability",
  },
  {
    rus: {js|Не все HOCs выглядят одинаково. Иногда они принимают только один аргумент, обернутый компонент. WithRouter.|js},
    eng: "Not all HOCs look the same. Sometimes they accept only a single argument, the wrapped component. WithRouter.",
  },
  {
    rus: {js|Соглашение: Оберните отображаемоё имя для упрощения отладки.|js},
    eng: "Convention: Wrap the Display Name for Easy Debugging.",
  },
  {
    rus: {js|Предостережения. Компоненты более высокого порядка имеют несколько предостережений, которые не сразу очевидны, если вы новичок в React.|js},
    eng: "Caveats. Higher-order components come with a few caveats that aren't immediately obvious if you're new to React.",
  },
  {
    rus: {js|Не используйте HOCs внутри метода рендеринга. Проблема здесь не только в производительности - перемонтирование компонента приводит к потере состояния этого компонента и всех его дочерних элементов.|js},
    eng: "Don-t Use HOCs Inside the render Method. The problem here isn't just about performance — remounting a component causes the state of that component and all of its children to be lost.",
  },
  {
    rus: {js|Хотя соглашение для HOC - пропустить все props к обернутому компоненту, это не работает для ссылок. Это потому, что ref на самом деле не prop — как и key, он обрабатывается специально React-ом.|js},
    eng: "While the convention for higher-order components is to pass through all props to the wrapped component, this does not work for refs. That's because ref is not really a prop — like key, it's handled specially by React.",
  },
  {
    rus: {js|Термин 'Render prop' относится к простой те��нике обмена кодом между компонентами React с использованием prop, значение которого является функцией.|js},
    eng: "The term 'render prop' refers to a simple technique for sharing code between React components using a prop whose value is a function.",
  },
  {
    rus: {js|Компонент с Render prop принимае�� функцию, которая воз��ращает элемент React и вызывает его вместо реализации собственной логики render.|js},
    eng: "A component with a render prop takes a function that returns a React element and calls it instead of implementing its own render logic.",
  },
  {
    rus: {js|В этом документе мы обсудим, почему рендер props по��езны, и как написать свои собственные.|js},
    eng: "In this document, we'll discuss why render props are useful, and how to write your own.",
  },
  {
    rus: {js|Используйте Render Props для Пересекающихся Задач|js},
    eng: "Use Render Props for Cross-Cutting Concerns",
  },
  {
    rus: {js|Компоненты являются основной единицей переиспользования кода в React, но не всегда очевидно, как поделиться состоянием или поведением, которое один компонент инкапсулирует, с другими компонентами, которые нуждаются в том же состоянии.|js},
    eng: "Components are the primary unit of code reuse in React, but it's not always obvious how to share the state or behavior that one component encapsulates to other components that need that same state.",
  },
  {
    rus: {js|Теперь вопрос: Как мы можем переиспользовать это поведение в другом компоненте?|js},
    eng: "Now the question is: How can we reuse this behavior in another component?",
  },
  {
    rus: {js|Другими словами, если другой компонент должен знать о положении курсора, можем ли мы инкап��улировать это поведение, чтобы мы могли легко поделиться им с этим компонентом?|js},
    eng: "In other words, if another component needs to know about the cursor position, can we encapsulate that behavior so that we can easily share it with that component?",
  },
  {
    rus: {js|Теперь, вместо того, чтобы эффективно клонировать Mouse компонент и жестко кодировать что-то еще в его Render методе для решения для конкретного случая использования, мы предоставляем Render prop, который Mouse может использовать для динамического определения того, что он отображает.|js},
    eng: "Now, instead of effectively cloning the Mouse component and hard-coding something else in its render method to solve for a specific use case, we provide a render prop that Mouse can use to dynamically determine what it renders.",
  },
  {
    rus: {js|Более конкретно, Render prop-это функция prop, которую компонент использует, чтобы знать, что рендерить.|js},
    eng: "More concretely, a render prop is a function prop that a component uses to know what to render.",
  },
  {
    rus: {js|Этот метод делает поведение, которое нам нужно разделить, чрезвычайно портативным.|js},
    eng: "This technique makes the behavior that we need to share extremely portable.",
  },
  {
    rus: {js|Чтобы получить такое поведение, отрисуйте Mouse с помощью Render prop, которая говорит ему, что отрисовать �� текущим (x, y) курсора.|js},
    eng: "To get that behavior, render a <Mouse> with a render prop that tells it what to render with the current x, y of the cursor.",
  },
  {
    rus: {js|Одна интересной вещью о Render props, которую следуюет отметить, является то, что вы можете реа��изовать большинство компонентов более высокого порядка (HOC), используя обычный компонент с Render prop.|js},
    eng: "One interesting thing to note about render props is that you can implement most higher-order components (HOC) using a regular component with a render prop.",
  },
  {
    rus: {js|Таким образом, использование Render prop позволяет использовать любой шаблон.|js},
    eng: "So using a render prop makes it possible to use either pattern.",
  },
  {
    rus: {js|По умолчанию, при рекурсии на дочерних узлах DOM, React просто перебирает оба списка дочерних узлов одновременно и генерирует мутацию всякий раз, когда есть разница.|js},
    eng: "By default, when recursing on the children of a DOM node, React just iterates over both lists of children at the same time and generates a mutation whenever there's a difference.",
  },
  {
    rus: {js|Когда у детей есть ключи, React использ��ет ключ ����я сопоставления детей в исходном дереве с детьми в последующем дереве.|js},
    eng: "When children have keys, React uses the key to match children in the original tree with children in the subsequent tree.",
  },
  {
    rus: {js|На практике найти ключ обычно не сложно. Элемент, который вы собираетесь отобразить, может уже иметь уникальный ID, поэтому ключ может просто прийти из ваших данных.|js},
    eng: "In practice, finding a key is usually not hard. The element you are going to display may already have a unique ID, so the key can just come from your data.",
  },
  {
    rus: {js|Когда это не так, вы можете добавить новое свойство ID в свою модель или хэшировать некоторые части контента для создания ключа.|js},
    eng: "When that's not the case, you can add a new ID property to your model or hash some parts of the content to generate a key.",
  },
  {
    rus: {js|Ключ должен быть уникальным только среди своих братьев и сестер, а не глобально уникальным.|js},
    eng: "The key only has to be unique among its siblings, not globally unique.",
  },
  {
    rus: {js|Переупорядочивание может также вызвать проблемы с состоянием компонента, когда индексы используются в качестве ключей.|js},
    eng: "Reorders can also cause issues with component state when indexes are used as keys.",
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
    rus: {js|Мы регул��рно совершенствуем эвристику, чтобы ус��орить общие случаи использования.|js},
    eng: "We are regularly refining the heuristics in order to make common use cases faster.",
  },
  {
    rus: {js|В текущей реализации вы можете выразить тот факт, что поддерево было перемещено среди его братьев и сестер, но Вы не можете сказать, что оно переместилось куда-то еще.|js},
    eng: "In the current implementation, you can express the fact that a subtree has been moved amongst its siblings, but you cannot tell that it has moved somewhere else.",
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
    rus: {js|Если вы видите себя чередующимся между двумя типами компонентов с очень похожими выходными данными, вы можете сделать его тем же типом. На практике мы не обнаружили, что это проблема.|js},
    eng: "If you see yourself alternating between two component types with very similar output, you may want to make it the same type. In practice, we haven't found this to be an issue.",
  },
  {
    rus: {js|Нестабильные ключи (как те, которые производятся Math.random()) приведет к ненужному воссозданию многих экземпляров компонентов и у��лов DOM, что может привести к снижению производительности и потере состояния в дочерних компонентах|js},
    eng: "Unstable keys (like those produced by Math.random()) will cause many component instances and DOM nodes to be unnecessarily recreated, which can cause performance degradation and lost state in child components.",
  },
  /* https:reactjs.org/docs/reconciliation.html */
  {
    rus: {js|Приведенные ниже примеры были обновлены для использо��ания React.createRef() API, пре��ставленый в React 16.3. Если используется более раннюю версию React, мы рекомендуем использовать callback refs.|js},
    eng: "The examples below have been updated to use the React.createRef() API introduced in React 16.3. If you are using an earlier release of React, we recommend using callback refs instead.",
  },
  {
    rus: {js|Значение ref отличается в зависимости от типа узла.|js},
    eng: "The value of the ref differs depending on the type of the node.",
  },
  {
    rus: {js|Когда атрибут ref используется на HTML-элементе, ref, созданный в констру��торе с React.createRef(), получает Базовый элемент DOM в качестве текущего свойс��ва.|js},
    eng: "When the ref attribute is used on an HTML element, the ref created in the constructor with React.createRef() receives the underlying DOM element as its current property.",
  },
  {
    rus: {js|Когда атрибут ref используется на компоненте пользовательского класса, объект ref получает смонтированный экземпляр компонента в качестве текущего.|js},
    eng: "When the ref attribute is used on a custom class component, the ref object receives the mounted instance of the component as its current.",
  },
  {
    rus: {js|Вы не можете использовать атрибут ref для функциональных компонентов, потому что у них нет экземпляров.|js},
    eng: "You may not use the ref attribute on functional components because they don't have instances.",
  },
  {
    rus: {js|Этот код использует ref для хранения ссылки на узел DOM.|js},
    eng: "This code uses a ref to store a reference to a DOM node",
  },
  {
    rus: {js|React присваивает текущему свойству элемент DOM при монтировании компонента и присваивает ему обратно значение null при размонтировании.|js},
    eng: "React will assign the current property with the DOM element when the component mounts, and assign it back to null when it unmounts.",
  },
  {
    rus: {js|Обновления рефов происходят до componentdidmount или componentdidupdate хуков жизненного ци��ла.|js},
    eng: "ref updates happen before componentDidMount or componentDidUpdate lifecycle hooks.",
  },
  {
    rus: {js|Вы должны преобразовать компонент в класс, если вам нужен реф на него, так же, как вы делаете, когда вам нужны методы жизненного цикла или состояние.|js},
    eng: "You should convert the component to a class if you need a ref to it, just like you do when you need lifecycle methods or state.",
  },
  {
    rus: {js|В редких случаях вам может потребоваться доступ к ДОЧЕРНЕМУ узлу DOM из родительского компонента.|js},
    eng: "In rare cases, you might want to have access to a child's DOM node from a parent component.",
  },
  {
    rus: {js|Обычно это не рекомендуется, поскольку это нарушает инкапсуляцию компонентов, но иногда это может быть полезно для запуска фокуса или измерения размера или положения дочернего узла DOM.|js},
    eng: "This is generally not recommended because it breaks component encapsulation, but it can occasionally be useful for triggering focus or measuring the size or position of a child DOM node.",
  },
  {
    rus: {js|Если Вы используете React 16.3 или выше, мы рекомендуем использовать ref forwarding для этих случаев.|js},
    eng: "If you use React 16.3 or higher, we recommend to use ref forwarding for these cases.",
  },
  {
    rus: {js|Ref forwarding позволяет компонентам выбрать отображение рефа любого дочернего компонента как собственного.|js},
    eng: "Ref forwarding lets components opt into exposing any child component's ref as their own.",
  },
  {
    rus: {js|Вы можете найти подробны�� пример того, как предоставить дочерний узел DOM родительскому компоненту в документации ref forwarding.|js},
    eng: "You can find a detailed example of how to expose a child's DOM node to a parent component in the ref forwarding documentation.",
  },
  /* https:reactjs.org/docs/refs-and-the-dom.html */
  {
    rus: {js|В типичном потоке данных React props - это единственный способ взаимодействия родительских компонентов со своим�� дочерними элементами.|js},
    eng: "In the typical React dataflow, props are the only way that parent components interact with their children.",
  },
  {
    rus: {js|Чтобы изменить ребенка, вы перерисовываете его с новыми реквизитами.|js},
    eng: "To modify a child, you re-render it with new props.",
  },
  {
    rus: {js|Однако, есть несколько случаев, когда вам нужно обязательно изменить дочерний элемент вне обычного потока данных.|js},
    eng: "However, there are a few cases where you need to imperatively modify a child outside of the typical dataflow.",
  },
  {
    rus: {js|Изменяемый дочерний элемент может быть экземпляром компонента React или элементом DOM. В обоих случаях React обеспечивает аварийный люк.|js},
    eng: "The child to be modified could be an instance of a React component, or it could be a DOM element. For both of these cases, React provides an escape hatch.",
  },
  {
    rus: {js|Есть несколько хороших вариантов использования рефов: управление фокусом, выбор текста или воспроизведение мультимедиа. Запуск императивной анимации. Интег��ация со сторонними библиотеками дом.|js},
    eng: "There are a few good use cases for refs: Managing focus, text selection, or media playback. Triggering imperative animations. Integrating with third-party DOM libraries.",
  },
  {
    rus: {js|Избегайте использования ссылок для всего, что может быть сделано декларативно.|js},
    eng: "Avoid using refs for anything that can be done declaratively.",
  },
  {
    rus: {js|Например, вместо того, чтобы открывать методы open() и close() в компоненте диалога, передайте ему isOpen prop.|js},
    eng: "For example, instead of exposing open() and close() methods on a Dialog component, pass an isOpen prop to it.",
  },
  {
    rus: {js|Ваше первое намерение может быть использовать ref-ы, чтобы 'сделать, чтобы что-то произошло' в вашем приложении.|js},
    eng: "Your first inclination may be to use refs to 'make things happen' in your app.",
  },
  {
    rus: {js|Если это так, выделите ми����утку и подумайте более критически о том, кому state должно принадлежать в иер��рхии компонентов.|js},
    eng: "If this is the case, take a moment and think more critically about where state should be owned in the component hierarchy.",
  },
  {
    rus: {js|Часто становится ясно, что надлежащее место для 'владения' этим state находится на более высоком уровне в иерархии. См. руководство по поднятию состояния и примеры.|js},
    eng: "Often, it becomes clear that the proper place to 'own' that state is at a higher level in the hierarchy. See the Lifting State Up guide for examples of this.",
  },
  {
    rus: {js|По мере роста вашего приложения, вы можете поймать ��ного ошибок с помощью проверки типов.|js},
    eng: "As your app grows, you can catch a lot of bugs with typechecking.",
  },
  {
    rus: {js|Для некоторых приложений можно использовать JavaScript расшире��ия, такие как Flow или TypeScript для проверки всего при��ожения.|js},
    eng: "For some applications, you can use JavaScript extensions like Flow or TypeScript to typecheck your whole application.",
  },
  {
    rus: {js|React имеет некоторые вст��оенные возможности проверки типов.|js},
    eng: "React has some built-in typechecking abilities.",
  },
  {
    rus: {js|Чтобы выполнить проверку типов для props компонента, можно назначить специальное propTypes свойство.|js},
    eng: "To run typechecking on the props for a component, you can assign the special propTypes property.",
  },
  {
    rus: {js|PropTypes содержит ряд валидаторов, которые могут быть использованы, чтобы убедиться, что данные, которые вы получаете, валидны.|js},
    eng: "PropTypes exports a range of validators that can be used to make sure the data you receive is valid.",
  },
  {
    rus: {js|Если для prop указано недопустимое значение, в консоли JavaScript будет показано предупреждение.|js},
    eng: "When an invalid value is provided for a prop, a warning will be shown in the JavaScript console.",
  },
  {
    rus: {js|По соображениям производительности propTypes проверяется только в development режиме.|js},
    eng: "For performance reasons, propTypes is only checked in development mode.",
  },
  {
    rus: {js|С PropTypes.element можно указать, что только один дочерний элемент может быть передан компоненту как childred.|js},
    eng: "With PropTypes.element you can specify that only a single child can be passed to a component as children.",
  },
  {
    rus: {js|Можно определить значения по умолчанию для props, присвоив специальное свойство defaultProps.|js},
    eng: "You can define default values for your props by assigning to the special defaultProps property.",
  },
  {
    rus: {js|Если вы используете Babel преобразование, такое как transform-class-properties , вы также можете объявить defaultProps как статическое свойство в классе компонента React.|js},
    eng: "If you are using a Babel transform like transform-class-properties , you can also declare defaultProps as static property within a React component class.",
  },
  {
    rus: {js|Этот static property синтаксис хотя еще не завершен, и потребует шага компиляции для работы в браузере.|js},
    eng: "This static property syntax has not yet been finalized though and will require a compilation step to work within a browser.",
  },
  {
    rus: {js|DefaultProps будет использоваться для обеспечения того, что this.props.name будет иметь значение, если оно не было специфицировано родительским компонентом.|js},
    eng: "The defaultProps will be used to ensure that this.props.name will have a value if it was not specified by the parent component.",
  },
  {
    rus: {js|Проверка типов проптипов происходит после применения defaultProps, поэтому проверка типов также применяется к defaultProps.|js},
    eng: "The propTypes typechecking happens after defaultProps are resolved, so typechecking will also apply to the defaultProps.",
  },
  {
    rus: {js|Статические средства проверки типов, такие как Flow и TypeScript, индетифицируют определенные типы проблем еще до запуска кода.|js},
    eng: "Static type checkers like Flow and TypeScript identify certain types of problems before you even run your code.",
  },
  {
    rus: {js|Статические проверк�� типов также могут улучшить рабочий процесс разработчика, добавив такие функции, как автозавершение.|js},
    eng: "Static type checkers can also improve developer workflow by adding features like auto-completion.",
  },
  {
    rus: {js|По этой причине мы рекомендуем использовать Flow или TypeScript вместо PropTypes для больших баз кода.|js},
    eng: "For this reason, we recommend using Flow or TypeScript instead of PropTypes for larger code bases.",
  },
  {
    rus: {js|Flow позволяет аннотировать переменные, функции и компоненты с помощью специального синтаксиса типов, а также выявлять ошибки на ранних этапах.|js},
    eng: "Flow lets you annotate the variables, functions, and React components with a special type syntax, and catch mistakes early.",
  },
  {
    rus: {js|До сих пор мы создали приложение, которое корректно рендерится как функция от props и state, стекающих вниз по иерархии.|js},
    eng: "So far, we've built an app that renders correctly as a function of props and state flowing down the hierarchy.",
  },
  {
    rus: {js|Компоненты формы глубоко в иерархии должны обновлять state в другом компоненте.|js},
    eng: "The form components deep in the hierarchy need to update the state in the other component.",
  },
  {
    rus: {js|Теперь пришло время поддерживать поток данных следующих в другом направлении.|js},
    eng: "Now it's time to support data flowing the other way.",
  },
  {
    rus: {js|Но для этого требуется немного больше ввода, чем при традиционной двусторонней привязке данных.|js},
    eng: "But it does require a little more typing than traditional two-way data binding.",
  },
  {
    rus: {js|React делает этот поток данных явным, чтобы было легко понять, как работает ваша программа.|js},
    eng: "React makes this data flow explicit to make it easy to understand how your program works.",
  },
  {
    rus: {js|Мы хотим убедиться, что всякий р��з, когда пользователь изменяет форму, мы о��новляем состояние, чтобы отразить пользовательский ввод.|js},
    eng: "We want to make sure that whenever the user changes the form, we update the state to reflect the user input.",
  },
  {
    rus: {js|Поскольку компоненты должны обновлять только свое собственное состояние, FilterableProductTable передаст обратные вызовы в панель поиска, которая будет срабатывать всякий раз, когда состояние должно быть обновлено.|js},
    eng: "Since components should only update their own state, FilterableProductTable will pass callbacks to SearchBar that will fire whenever the state should be updated.",
  },
  {
    rus: {js|Хотя это звучит сложно, на самом деле это всего л��шь несколько строк кода.|js},
    eng: "Though this sounds complex, it's really just a few lines of code.",
  },
  {
    rus: {js|И это действительно ясно, как ваши данные текут по всему приложению.|js},
    eng: "And it's really explicit how your data is flowing throughout the app.",
  },
  {
    rus: {js|Надеюсь, это даст вам представление о том, как строить компоненты и приложения с помощью React.|js},
    eng: "Hopefully, this gives you an idea of how to think about building components and applications with React.",
  },
  {
    rus: {js|Хотя это может быть немного больше печатания, чем вы привыкли.|js},
    eng: "While it may be a little more typing than you're used to",
  },
  {
    rus: {js|Помните, что код читается гораздо больше раз, чем пишется, и очень легко читать этот модульный, явный код.|js},
    eng: "Remember that code is read far more than it's written, and it's extremely easy to read this modular, explicit code.",
  },
  {
    rus: {js|Когда вы начнете создавать большие библиотеки компонентов, вы оцените эту эксплицитность и модульность.|js},
    eng: "As you start to build large libraries of components, you'll appreciate this explicitness and modularity.",
  },
  {
    rus: {js|И при пер��и��пользовании кода ваши строки кода начнут сжиматься.|js},
    eng: "And with code reuse, your lines of code will start to shrink.",
  },
  {
    rus: {js|ОК, мы определили, что такое минимальный набор состояния приложения.|js},
    eng: "OK, so we've identified what the minimal set of app state is.",
  },
  {
    rus: {js|Далее нам нужно определить, какой компонент мутирует или владеет этим состоянием.|js},
    eng: "Next, we need to identify which component mutates, or owns, this state.",
  },
  {
    rus: {js|Запомните: React это односторонний поток данных по иерархии компонентов.|js},
    eng: "Remember: React is all about one-way data flow down the component hierarchy.",
  },
  {
    rus: {js|Может быть, не сразу ясно, какой компонент должен владеть каким состоянием.|js},
    eng: "It may not be immediately clear which component should own what state.",
  },
];