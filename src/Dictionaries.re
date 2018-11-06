type wordPair = {
  rus: string,
  eng: string,
};

type pairList = list(wordPair);

let dictionary1  = [
  {rus: {js|API-интерфейс браузера, объектная модель документа (DOM) - довольно ужасна, и JavaScript-это несправедливо обвинили. С DOM было бы больно работать на любом языке.|js},
   eng: "The API of the browser, the Document Object Model (DOM) is quite awful, and JavaScript is unfairly blamed. The DOM would be painful to work with in any language."},
  {rus: {js|Модель DOM плохо определена и непоследовательно реализована.|js},
  eng: "The DOM is poorly specified and inconsistently implemented."},

  {rus: {js|Если вы хороши в каком-то другом языке, и вы должны программировать в среде, которая поддерживает только JavaScript, то вы вынуждены использовать JavaScript, и это раздражает.|js},
   eng: "If you are good in some other language and you have to program in an environment that only supports JavaScript, then you are forced to use JavaScript, and that is annoying."},

  {rus: {js|JavaScript построен на нескольких очень хороших идеях и ряда очень плохих. Очень хорошие идеи включают функции, свободную типизацию, динамические объекты и выразительную объектную буквальную нотацию.|js},
  eng: "JavaScript is built on some very good ideas and a few very bad ones. The very good ideas include functions, loose typing, dynamic objects, and an expressive object literal notation."},

  {rus: {js|Но оказывается, что строгая типизация не устраняет необходимости тщательного тестирования.|js},
   eng: "But it turns out that strong typing does not eliminate the need for careful testing."},
  {rus: {js|В своей работе я обнаружил, что ошибки, которые находит сильная проверка типов, не являются ошибками, о которых я беспокоюсь.|js},
   eng: "I have found in my work that the sorts of errors that strong type checking finds are not the errors I worry about."},
  {rus: {js|Я нахожу потерю типизации освобождающей. Мне не нужно формировать сложные иерархии классов. И мне никогда не нужно бросать или бороться с системой типов, чтобы получить поведение, которое я хочу.|js},
   eng: "I find loose typing to be liberating. I don’t need to form complex class hierarchies. And I never have to cast or wrestle with the type system to get the behavior that I want."},
  {rus: {js|JavaScript зависит от глобальных переменных для компоновки. Все переменные верхнего уровня всех единиц компиляции объединяются в общее пространство имен, называемое глобальным объектом.|js},
   eng: "JavaScript depends on global variables for linkage. All of the top-level variables of all compilation units are tossed together in a common namespace called the global object."},
  {rus: {js|Большинство зарезервированных слов в этом списке не используются в языке.|js},
     eng: "Most of the RESERVED words in this list are not used in the language."},
  {rus: {js|Список зарезервированных слов не включает некоторые слова, которые должны были быть зарезервированы, но не были, такие как undefined, NaN и Infinity.|js},
  eng: "The list of RESERVED words does not include some words that should have been reserved but were not, such as undefined, NaN, and Infinity."},

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
  {rus: {js||js}, eng: ""},
  {rus: {js||js}, eng: ""},
  {rus: {js||js}, eng: ""},
  {rus: {js||js}, eng: ""},
  {rus: {js||js}, eng: ""},
];

let oldDictionary1  = [
  {rus: {js|К концу планирования спринта команда разработчиков должна быть в состоянии объяснить владельцу продукта и мастеру Scrum, как она намерена работать как самоорганизующаяся команда для достижения цели спринта.|js},
  eng: "By the end of the Sprint Planning, the Development Team should be able to explain to the Product Owner and Scrum Master how it intends to work as a self-organizing team to accomplish the Sprint Goal."},
  {rus: {js|Цель спринта это набор целей, которые могут быть достигнуты путем реализации беклога продукта.|js},
  eng: "The Sprint Goal is an objective set for the Sprint that can be met through the implementation of Product Backlog."},
  {rus: {js|Ежедневный Scrum-это 15-минутное событие для команды разработчиков.|js},
   eng: "The Daily Scrum is a 15-minute time-boxed event for the Development Team."},
  {rus: {js|Ежедневный Scrum проводится в одно и то же время и каждый день, чтобы уменьшить сложность.|js},
  eng: "The Daily Scrum is held at the same time and place each day to reduce complexity."},
  {rus: {js|Ежедневный Scrum-это внутреннее собрание команды разработчиков. Если присутствуют другие, Scrum Master гарантирует, что они не нарушают собрание.|js},
   eng: "The Daily Scrum is an internal meeting for the Development Team. If other are present, the Scrum Master ensures that they do not disturb the meeting."},
  {rus: {js|Sprint Review проводится в конце спринта для проверки приращения и адаптации беклога продукта, если это необходимо.|js},
   eng: "A Sprint Review is held at the end of the Sprint to inspect the increment and adapt the Product Backlog if needed."},
  {rus: {js|Во время Sprint Preview команда Scrum и заинтересованные стороны сотрудничают о том, что было сделано в спринте.|js},
   eng: "During the Sprint Preview, the Scrum Team and stakeholders collaborate about what was done in the Sprint."},
  {rus: {js|Результатом Sprint Preview является пересмотренный беклог, который определяет вероятные элементы отставания продукта для следующего спринта.|js},
   eng: "The result of the Sprint Preview is a revised Product Backlog that defines the probable Product Backlog items for the next Sprint."},
  {rus: {js|Ретроспектива спринта-это возможность для команды Scrum проверить себя и создать план улучшений, которые будут введены в действие во время следующего спринта.|js},
   eng: "The Sprint Retrospective is an opportunity for the Scrum Team to inspect itself and create a plan for improvements to be enacted during the next Sprint."},
  {rus: {js|Цель ретроспективы спринта состоит в том, чтобы создать план реализации улучшений в том, как команда Scrum работает.|js},
   eng: "The purpose of the Sprint Retrospective is to create a plan for implementing improvements to the way the Scrum Team does it work."},
  {rus: {js|Хотя улучшения могут быть реализованы в любое время, ретроспектива спринта предоставляет официальные возможности сосредоточиться на проверке и адаптации.|js},
   eng: "Although improvements may be implemented at any time, the Sprint Retrospective provides a formal opportunities to focus on inspection and adaption."},

  {rus: {js|Артефакты Scrum представляют работу или ценность для обеспечения прозрачности и возможностей для проверки и адаптации.|js},
   eng: "Scrum's artifacts represent work or value to provide transparency and opportunities for inspection and adaption."},
  {rus: {js|Артефакты, определенные Scrum, специально разработаны для максимальной прозрачности ключевой информации, чтобы у всех было одинаковое понимание артефакта.|js},
   eng: "Artifacts defined by Scrum are specifically designed to maximize transparency of key information so that everybody has the same understanding of the artifact."},
  {rus: {js|Беклог продукта-это упорядоченный список всего, что необходимо в продукте.|js},
  eng: "The Product Backlog is an ordered list of everything that is known to be needed in the product."},
  {rus: {js|Беклог продукта является единственным источником требований для любых изменений, которые будут внесены в продукт.|js},
   eng: "The Product Backlog is the single source of requirements for any changes to be made to the product."},
  {rus: {js|В списке 'Беклог продукта' перечислены все функции, функции, требования, улучшения и исправления, составляющие изменения, которые необходимо внести в продукт в будущих выпусках.|js},
   eng: "The Product Backlog lists all the features, functions, requirements, enhancements, and fixes that constitute the changes to be made to the product in future releases."},

  {rus: {js|Новый спринт начинается сразу после завершения предыдущего спринта.|js},
   eng: "A new sprint starts immediately after the conclusion of the previous sprint."},
  {rus: {js|Во время спринта не вносится никаких изменений, которые могли бы поставить под угрозу цель спринта.|js},
  eng: "During the sprint no changes are made that would endanger the Sprint Goal."},
  {rus: {js|Во время спринта область спринта может быть уточнена и повторно согласована между владельцем продукта и командой разработчиков.|js},
   eng: "During the Sprint the Sprint scope may be clarified and re-negotiated between the Product Owner and Development Team."},
  {rus: {js|Как и проекты, спринты используются для чего-то.|js},
   eng: "Like projects, Sprints are used to accomplish something."},
  {rus: {js|Спринты обеспечивают предсказуемость, обеспечивая проверку и адаптацию прогресса к цели спринта, по крайней мере, каждый календарный месяц.|js},
   eng: "Sprints enable predictability by ensuring inspection and adaption of progress toward a Sprint Goal at least every calendar month."},
  {rus: {js|Только владелец продукта имеет право отменить спринт, хотя он или она может сделать это под влиянием стекхолдеров, команды разработчиков или мастера Scrum.|js},
   eng: "Only the Product Owner has the authority to cancel the Sprint, although he or she may do so under influence of the stakeholders, the Development Team, or the Scrum Master."},
  {rus: {js|Отмена спринта потребляет ресурсы, так как все перегруппировываются в планировании другого спринта, чтобы начать другой спринт.|js},
   eng: "Sprint cancellations consume resources, since everyone regroups in another Sprint Planning to start another Sprint."},
  {rus: {js|Работа, которая будет выполнена в спринте, планируется при планировании спринта. Этот план создается совместной работой всей команды Scrum.|js},
   eng: "The work to be performed in the Sprint is planned at the Sprint Planning. This plan is crated by the collaboration work of the entire Scrum Team."},
  {rus: {js|Планирование спринта отвечает на следующее: Что может быть поставлено, как инкрементальный результат предстоящего спринта.|js},
   eng: "Sprint Planning answers the following: What can be delivered in the Increment resulting from the upcoming Sprint."},


   {rus: {js|Команда Scrum состоит из ПО, команды разработки и мастера Scrum.|js},
  eng: "The Scrum Team consists of a Product Owner, the Development Team and a Scrum Master."},
  {rus: {js|Команды Scrum являются самоорганизующимися и кросс-функциональными.|js},
  eng: "Scrum Teams are self-organizing and cross-functional."},
  {rus: {js|Самоорганизующиеся команды выбирают, как лучше выполнять свою работу, а не руководятся другими из вне.|js},
   eng: "Self-organizing teams choose how best to accomplish their work, rather than being directed by other outside the team."},
  {rus: {js|Кросс-функциональные команды обладают всеми компетенциями, необходимыми для выполнения работы и не зависят от другой части, не входящей в состав команды.|js},
   eng: "Cross-functional teams have all competencies needed to accomplish the work without depending on the other not part of the team."},
  {rus: {js|Командная модель в scrum разработана для оптимизации гибкости, креативности и производительности.|js},
   eng: "The team model in scrum is designed to optimize flexibility, creativity, and productivity."},
  {rus: {js|Команда scrum зарекомендовала себя все более эффективной для всех ранее заявленных применений и любой сложной работы.|js},
   eng: "The scrum team has proven itself to be increasingly effective for all the earlier stated uses, and any complex work."},
  {rus: {js|Scrum-команды поставляют продукты итеративно и инкрементально, максимизируя возможности для обратной связи.|js},
   eng: "Scrum teams deliver products iteratively and incrementally, maximizing opportunities for feedback."},
  {rus: {js|Дополнительные поставки готового продукта гарантируют, что потенциально полезная версия рабочего продукта всегда доступна.|js},
  eng: "Incremental deliveries of 'Done' product ensure a potentially useful version of working product is always available."},


  {rus: {js|ПО несет ответственность за максимизацию стоимости продукта в результате работы команды разработчиков.|js},
   eng: "The Product Owner is responsible for maximizing the value of the product resulting from work of the Development Team."},
  {rus: {js|ПО является единственным лицом, ответственным за управление беклога продукта.|js},
   eng: "The Product Owner is the sole person responsible for managing the Product Backlog."},
  {rus: {js|ПО гарантирует, беклог продукта виден, прозрачен и понятен всем, и показывает, над чем будет работать Scrum команда.|js}, eng: "PO ensures that the Product Backlog is visible, transparent, and clear to all, and shows what the Scrum Team will work on next."},
  {rus: {js|ПО гарантирует, что команда разработчиков понимает элементы в беклоге до необходимого уровня.|js},
  eng: "PO ensures the Development Team understands items in the Product Backlog to the level needed."},
  {rus: {js|ПО - это один человек, а не комитет.|js}, eng: "PO is one person, not a committee."},
  {rus: {js|Тот, кто хочет изменить приоритет элемента в беклоге, должен обратиться к ПО.|js},
   eng: "Those wanting to change a Product Backlog item's priority must address the Product Owner."},
  {rus: {js|Для успеха ПО вся организация должна уважать его или ее решения.|js},
  eng: "For the PO to succeed, the entire organization must respect his or her decisions."},


  {rus: {js|Три столпа поддерживают каждую реализацию эмпирического управления процессами: прозрачность, инспекция и адаптация.|js},
   eng: "Three pillars uphold every implementation of empirical process control: transparency, inspection, and adaption."},
  {rus: {js|Значительные аспекты процесса должны быть видны тем, кто несет ответственность за результат.|js},
   eng: "Significant aspects of the process must be visible to those responsible for the outcome."},
  {rus: {js|Transparency требует, чтобы эти аспекты определялись общим стандартом, чтобы наблюдатели разделяли общее понимание того, что наблюдается.|js},
   eng: "Transparency requires those aspects be defined by common standard so observers share a common understanding of what is been seen."},
  {rus: {js|Общий язык, относящийся к процессу, должен быть общим для всех участников.|js},
   eng: "A common language referring to the process must be shared by all participants."},
  {rus: {js|Выполняющие работу и проверяющие результирующее приращение должны иметь общее определение "сделано".|js},
   eng: "Those performing the work and those inspecting the resulting increment must share common definition of 'Done'"},
  {rus: {js|Пользователи Scrum должны часто проверять артефакты Scrum и продвигаться к цели Sprint для обнаружения нежелательных отклонений.|js},
  eng: "Scrum users must frequently inspect Scrum artifacts and progress towards a Sprint Goal to detect undesired variances."},
  {rus: {js|Их осмотр не должен быть настолько частым, чтобы он мешал работе.|js},
   eng: "Their inspection should not be so frequent that inspection gets in the way of the work."},
  {rus: {js|Инспекции приносят наибольшую пользу, если их добросовестно проводят квалифицированные инспекторы в месте работы.|js},
   eng: "Inspections are most beneficial when diligently performed by skilled inspectors at the point of work."},
  {rus: {js|Если инспектор определяет, что один или несколько аспектов процесса выходят за допустимые пределы, и что полученный продукт будет неприемлем, процесс или обрабатываемый материал должны быть скорректированы.|js},
   eng: "If an inspector determines that one or more aspects of a process deviate outside acceptable limits, and that resulting product will be unacceptable, the process or the material being processed must be adjusted."},

  {rus: {js|(Адаптация) Необходимо как можно скорее произвести корректировку, чтобы свести к минимуму дальнейшее отклонение.|js},
   eng: "(Adaption) An adjustment must be made as soon as possible to minimize futher deviation."},
  {rus: {js|Scrum предписывает четыре официальных события для проверки и адаптации, как описано в разделе Scrum Events этого документа. Планирование Спринта. Ежедневный Скрам. Спринт Обзор. Ретроспектива Спринта.|js},
   eng: "Scrum prescribes four formal events for inspection and adaption, as described in the Scrum Events section of this document. Sprint Planning. Daily Scrum. Sprint Review. Sprint Retrospective."},
  {rus: {js|В случаях, когда ценности решимости, мужества, целенаправленности, открытость и уважения воплощаются и проживаются скрам командой, скрам основы транспарентности, проверки и адаптации оживают и укрепляют доверие для всех.|js},
   eng: "When the values of commitment, courage, focus, openness and respect are embodied and lived by Scrum Team, the Scrum pillars of transparency, inspection, and adaption come to life and build trust for everyone."},
  {rus: {js|Успешное использование Scrum зависит от того, что люди становятся более опытными в этих пяти ценностях.|js},
   eng: "Successful use of Scrum depends on people becoming more proficient in living these five values."},



{
    rus: {js|Заказчики и разработчики должны ежедневно работать вместе на протяжении всего проекта.|js},
    eng: "Business people and developers must work together daily throughout the project.",
  },
    {
    rus: {js|Постоянное внимание к техническому совершенству и хорошему дизайну повышает гибкость.|js},
    eng: "Continuous attention to technical excellence and good design enhances agility.",
  },
    {
    rus: {js|Через регулярные промежутки времени, команда размышляет о том, как стать более эффективной, подстраивает и корректирует свое поведение соответствующим образом.|js},
    eng: "At regular intervals, the team reflects on how to become more effective, then tunes and adjusts its behavior accordingly.",
  },
    {
    rus: {js|Люди и взаимодействия выше, чем процессы и инструменты. Работающее software выше, чем всеобъемлющая документация. Сотрудничество с заказчиком выше, чем обсуждение условий контракта. Реагирование на изменения выше, чем следование плану. Мудрость и здравый смысл превыше знаний и опыта.|js},
    eng: "Individuals and interactions over processes and tools. Working software over comprehensive documentation. Customer collaboration over contract negotiation. Responding to change over following a plan. Wisdom and common sense over knowledge and expertise.",
  },


   {
    rus: {js|Наша первоочередная задача состоит в том, чтобы удовлетворить потребности клиентов в своевременной и непрерывной поставке ценного программного обеспечения.|js},
    eng: "Our highest priority is to satisfy the customer trough early and continuous delivery of valueable software.",
  },
  {
    rus: {js|Приветствуются изменения требований, даже на поздних стадиях разработки. Гибкие процессы используют изменения для конкурентного преимущества клиента.|js},
    eng: "Welcome changing requirements, even late in development. Agile processes harness change for the customer's competive advantage.",
  },
  {
    rus: {js|Поставляйте рабочее программное обеспечение часто, от нескольких недель до нескольких месяцев, с предпочтением к более коротким временным рамкам.|js},
    eng: "Deliver working software frequently, from a couple of weeks to a couple of months, with a preference to the shorter timescale.",
  },
  {
    rus: {js|Заказчики и разработчики должны ежедневно работать вместе на протяжении всего проекта.|js},
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
    rus: {js|Лучшие архитектуры, требования и проекты появляются из самоорганизующихся команд.|js},
    eng: "The best architectures, requirements, and designs emerge from self-organizing teams.",
  },
  {
    rus: {js|Через регулярные промежутки времени, команда размышляет о том, как стать более эффективной, подстраивает и корректирует свое поведение соответствующим образом.|js},
    eng: "At regular intervals, the team reflects on how to become more effective, then tunes and adjusts its behavior accordingly.",
  },
  {
    rus: {js|Scrum-это framework, в котором люди могут решать сложные адаптивные проблемы, продуктивно и творчески доставляя продукты максимально возможной ценности|js},
    eng: "Scrum is a framework within which people can address complex adaptive problems, while productively and creatively delivering products of the highest possible value.",
  },
  {
    rus: {js|Scrum-это не методология. Scrum реализует научный метод эмпиризма.|js},
    eng: "Scrum is not a methodology. Scrum implements the scientific method of empiricism.",
  },
  {
    rus: {js|Scrum заменяет запрограммированный алгоритмический подход эвристическим, с уважением к людям и самоорганизацией для решения непредсказуемости и решения сложных проблем.|js},
    eng: "Scrum replaces a programmed algorithmic approach with a heuristic one, with respect for people and self-organization to deal with unpredictability and solving complex problems.",
  },
  {
    rus: {js|Scrum не является процессом, техникой или окончательным методом. Скорее, это framework, в которыом вы можете использовать различные процессы и методы.|js},
    eng: "Scrum is not a process, technique, or definitive method. Rather, it is a framework within which you can employ various processes and techniques.",
  },
  {
    rus: {js|Framework Scrum состоит из команд Scrum и связанных с ними ролей, событий, артефактов и правил. Каждый компонент в рамках служит определенной цели и имеет важное значение для успеха и использования Скрама.|js},
    eng: "The Scrum framework consists of Scrum Teams and their associated roles, events, artifacts, and rules. Each component within the framework serves a specific purpose and is essential to Scrum's success and usage.",
  },
  {
    rus: {js|Правила Scrum связывают вместе роли, события и артефакты, управляя отношениями и взаимодействием между ними.|js},
    eng: "The rules of Scrum bind together the roles, events, and artifacts, governing the relationships and interaction between them.",
  },
  {
    rus: {js|Правила Scrum описаны всюду по телу этого документа.|js},
    eng: "The rules of Scrum are described throughout the body of this document.",
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
    rus: {js|Люди и взаимодействия выше, чем процессы и инструменты. Работающее software выше, чем всеобъемлющая документация. Сотрудничество с заказчиком выше, чем обсуждение условий контракта. Реагирование на изменения выше, чем следование плану. Мудрость и здравый смысл превыше знаний и опыта.|js},
    eng: "Individuals and interactions over processes and tools. Working software over comprehensive documentation. Customer collaboration over contract negotiation. Responding to change over following a plan. Wisdom and common sense over knowledge and expertise.",
  },
  {
    rus: {js|То есть, в то время как есть ценность в элементах справа, мы ценим элементы слева больше.|js},
    eng: "That is, while there is value in the items on the right, we value the items on the left more.",
  },

   {rus: {js|Оптимальный размер команды разработчиков должен быть достаточно мал, чтобы оставаться маневренным, и достаточно большим, чтобы завершить значительную работу в sprint.|js},
   eng: "Optimal Development Team size is small enough to remain nimble and large enough to complete significant work within sprint."},
  {rus: {js|Менее трех членов команды разработки уменьшают взаимодействие и приводят к меньшей производительности.|js},
   eng: "Fewer than three Development Team members decreases interaction and results in smaller productivity gains."},
  {rus: {js|Наличие более девяти членов команды разработчиков требует слишком большой координации.|js},
   eng: "Having more than nine Development Team members requires to much coordination."},
  {rus: {js|Большая команда разработчиков создает большую сложность, чтобы эмпирический процесс был полезен.|js},
   eng: "Large Development Team generates to much complexity for an empirical process to be useful."},
  {rus: {js|Scrum Master отвечает за продвижение и поддержку Scrum, как определено в руководстве Scrum.|js},
  eng: "The Scrum Master is responsible for promoting and supporting Scrum as defined in the Scrum Guide."},
  {rus: {js|Scrum Master помогает всем понять теорию, практику, правила и ценности Scrum.|js},
  eng: "The Scrum Master helps everyone understand Scrum theory, practices, rules, and values."},
  {rus: {js|Scrum Master является слугой-лидером для команды Scrum.|js},
   eng: "The Scrum Master is servant-leader for the Scrum Team."},
  {rus: {js|Scrum Master помогает тем, кто не входит в команду Scrum, понять, какое из их взаимодействий с командой Scrum полезно, а какое нет.|js},
  eng: "The Scrum Master helps those outside the Scrum Team understand which of their interactions with Scrum Team are helpful and which aren't."},
  {rus: {js|Scrum Master служит продакт оунеру несколькими способами.|js},
  eng: "The Scrum Master servers the Product Owner in several ways."},
  {rus: {js|Scrum Master делает коучинг команды разработчиков в самоорганизации и кросс-функциональности.|js},
  eng: "The Scrum Master makes coaching the Development Team in self-organisation and cross-functionality."},
  {rus: {js|Scrum Master помогает сотрудникам и стекхолдерам понять и принять Scrum и эмпирическую разработку продукта.|js},
  eng: "The Scrum Master helps employees and stakeholders understand and enact Scrum and empirical product development."},


  {rus: {js|Предписанные события используются в Scrum для создания регулярности и минимизации потребности в собраниях, не определенных в Scrum.|js},
    eng: "Prescribed events are used in Scrum to create regularity and to minimise the need for meetings non defined in Scrum."},
  {rus: {js|Все события являются событиями с временной шкалой.|js},
  eng: "All events are time-boxed events."},
  {rus: {js|Как только начинается спринт, его продолжительность фиксирована и не может быть сокращена или удлинена.|js},
   eng: "Once a Sprint begins, its duration is fixed and cannot be shortened or lenghtened."},
  {rus: {js|События кроме спринта могут заканчиваться всякий раз, когда цель события достигается.|js},
   eng: "Other than the Sprint events may end whenever the purpose of the event is achieved."},
  {rus: {js|Сердце Scrum-это sprint, с времмеными рамками в один месяц или меньше, в течение которого создается "сделанный", пригодный для использования и потенциально выпускаемый инкремент продукта.|js},
   eng: "The heart of Scrum is sprint, a time-box one month or less during which a 'Done', useable, and potentially releasable product Increment is created."},
  {rus: {js|Спринт состоит из планирования спринта, ежедневных схваток, работы по разработке, обзора спринта и ретроспективы спринта.|js},
   eng: "Sprint consists of the Sprint Planning, Daily Scrums, the development work, the Sprint Review, and the Sprint Retrospective."},
  {rus: {js|Каждый спринт можно рассматривать как проект с горизонтом не более одного месяца.|js},
   eng: "Each Sprint may be considered a project with no more than a one-month horizon."},
  {rus: {js|Каждый спринт имеет цель того, что должно быть построено.|js},
   eng: "Each Sprint has a goal of what is to be build."},


];

let dictionary2 = [
  {
    rus: {js|Variants в их многочисленных формах (полиморфный вариант, открытый вариант, GADT и др.), вероятно, являются фичей системы типов, такой как Reason.|js},
    eng: "Variants, in their many forms (polymorphic variant, open variant, GADT, etc.), are likely the feature of a type system such as Reason's.",
  },
  {
    rus: {js|Вышеупомянутый option, например, устраняет необходимость в типах, допускающих значение NULL, что является основным источником ошибок в других языках.|js},
    eng: "The aforementioned option variant, for example, obliterates the need for nullable types, a major source of bugs in other languages.",
  },
  {
    rus: {js|Философски выражаясь, проблема состоит из многих возможных ветвей/условия. Неправильное выполнение э��их условий является осн��вной частью того, что мы называем ошибками.|js},
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
    rus: {js|Если синтаксический анализатор возвращает тип Option None / Some (актуальные данные), то вам придется явно обрабатывать случай None на более поздних вызовов.|js},
    eng: "If the parser returns the option type None | Some(actualData), then you'd have to handle the None case explicitly in later calls.",
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
];

let oldDictionary2 = [
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
    rus: {js|Punning это сокращение синтаксиса, которое вы можете исполь����овать, когда имя поля и есть его значение.|js},
    eng: "Punning refers to the syntax shorthand you can use when the name of a field matches the name of its value/type",
  },
  {
    rus: {js|Если вы работаете с JavaScript, синтаксис записей и операции должны быть знакомы, и у вас может возникнуть соблазн взаимодействовать с JS, преобразовывая объект JS в запись и наоборот. Это прекрасно, но у нас есть еще лучший способ без накладных расходов!|js},
    eng: "If you're working with JavaScript, the record syntax & operations should feel familiar, and you might be tempted to interop with JS by converting a JS object to a record, and vice-versa. This is fine, but we have an even better way without conversion overhead!",
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
    rus: {js|Правда в том, что в большинстве случаев в вашем приложении форма ваших данных на с��мом деле фиксирована, и если это не так, она потенциально может быть лучше представлена как комбинация variant + record.|js},
    eng: "The truth is that most of the times in your app, your data's shape is actually fixed, and if it's not, it can potentially be better represented as a combination of variant + record instead.",
  },
  {
    rus: {js|��апись, так как ее поля фиксированы, компилируется в массив с доступом к индексу массива вместо JS объекта (попробуйте в playground!)|js},
    eng: "Record, since its fields are fixed, is compiled to an array with array index accesses instead of JS object (try it in the playground!).",
  },
  {
    rus: {js|В native запись компилируется в основную область памяти, где доступ к полю-это только один пои��к поля + один фактический доступ, ака 2 инструкции по сборке.|js},
    eng: "On native, Record compiles to basically a region of memory where a field access is just one field lookup + one actual access, aka 2 assembly instructions.",
  },
  {
    rus: {js|Наконец, поскольку Тип записи определяется путем нахождения одного явного объявления типа (мы называем это "номинальной типизацией"), сообщения об ошибках типа оказываются лучше, чем аналог ("структурная типизация", как для кортежей)."|js},
    eng: "Finally, since a record type is resolved through finding that single explicit type declaration (we call this 'nominal typing'), the type error messages end up better than the counterpart ('structural typing', like for tuples).",
  },
  {
    rus: {js|Номинальная типизация облегчает рефакторинг; изменение полей типа записи, естественно, позволяет компилятору знать, что это все та же запись, просто неправильно используемая в некоторых местах. В противном случае при структурной типизации может быть трудно определить, является ли сайт определения или сайт использования неправильным.|js},
    eng: "Nominal typing makes refactoring easier; changing a record type's fields naturally allows the compiler to know that it's still the same record, just misused in some places. Otherwise, under structural typing, it might get hard to tell whether the definition site or the usage site is wrong.",
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
    rus: {js|Примечание: ��онструкторы варианта должны быть с большой буквы.|js},
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
  {
    rus: {js|Вариант имеет чрезвычайно богатое количество системной помощи от типизации.|js},
    eng: "A variant has an extremely rich amount of type system assistance.",
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
    rus: {js|Если вариант, который вы используете, находится в другом файле, перенесите его в scope, к��к для записи.|js},
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
    rus: {js|Знаете ли вы, что вы мож��те использовать switch для string, int, float, array и большинство других структур данных?|js},
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
    rus: {js|Вы должны использовть кортежи в удобных ситуациях, которые нужно передат�� несколько значений без особых церемоний. Например, для возврата нескольких значений.|js},
    eng: "You'd use tuples in handy situations that pass around multiple values without too much ceremony. For example, to return many values.",
  },
  {
    rus: {js|Старайтесь использовать кортеж локально. Для до��гоживущих и часто передаваемых структур данных предпочтительнее использоват�� записи с именованными полями.|js},
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
    rus: {js|Система типов не всемогуща и не должна быть такой; некоторые со вкусом подобранные компромиссы должны быть применены для того, чтобы язык был простым, производительным (как для компиляции, так и для скорости работы) и легким для понимания.|js},
    eng: "A type system isn't all-powerful, nor should it be; some tasteful trade-offs need to be applied in order to keep the language simple, performant (both compilation and running speed) and easy to understand.",
  },
  {
    rus: {js|Кортеж Reason типизируется 'структурно'. Это означает, что даже если Вы не аннотируете свои данные явным типом, компилятор все равно может вывести их, посмотрев на их содержимое, использование и т. д.|js},
    eng: "A Reason tuple is typed 'structurally'. This means that even if you don't annotate your data with an explicit type, the compiler can still deduce it by looking at its content, its usage, etc.",
  },
  {
    rus: {js|Типы-это изюминка Ризона! Здесь вы получаете представление о том, почему так много людей в восторге от них.|js},
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
    rus: {js|Cистема типов полностью 'здравая'. Что означает, что пока код ком��илируется нормально, каждый Тип гарантирует, что он не лжет сам о себе.|js},
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
    rus: {js|Существует специальный синтаксис для строк, который позволяет делать многострочные строки, как и раньше, без специальных escape символов, хуки для спе��иальных предпроцессоров.|js},
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
    rus: {js|Char компилируется в целое число от 0 до 255, для дополнительной скорости. Вы можете также паттерн-матчинг на нем.|js},
    eng: "A character compiles to an integer ranging from 0 to 255, for extra speed. You can also pattern-match on it.",
  },
];

let oldOldDictionary2 = [
  /* ************************************************************************************************************************** */
  {
    rus: {js|Но для этого требуется немного больше ввода, чем при традиционной двусторонней привязке данных.|js},
    eng: "But it does require a little more typing than traditional two-way data binding.",
  },
  {
    rus: {js|React делает этот поток данных явным, чтобы было легко понять, как работает ваш�� программа.|js},
    eng: "React makes this data flow explicit to make it easy to understand how your program works.",
  },
  {
    rus: {js|Мы хотим убе��иться, что всякий р��з, когда пользователь изменяет форму, мы о��новляем состояние, чтобы отразить пользовательский ввод.|js},
    eng: "We want to make sure that whenever the user changes the form, we update the state to reflect the user input.",
  },
  {
    rus: {js|Поскольку компоненты должны обновлять только свое собственное состояние, FilterableProductTable передаст обратные вызовы в панель поиска, которая будет срабатывать всякий раз, когда состояние должно быть обновлено.|js},
    eng: "Since components should only update their own state, FilterableProductTable will pass callbacks to SearchBar that will fire whenever the state should be updated.",
  },
  {
    rus: {js|Хо��я это звучит сложно, на самом деле это всего л��шь несколько строк кода.|js},
    eng: "Though this sounds complex, it's really just a few lines of code.",
  },
  {
    rus: {js|И это действительно ясно, как ваши данные текут по всему прилож��нию.|js},
    eng: "And it's really explicit how your data is flowing throughout the app.",
  },
  {
    rus: {js|Надеюсь, это даст вам представление о том, как строить компо��енты и приложения с помощью React.|js},
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
    rus: {js|Далее нам нужно определить, какой компонент мутирует или вл��деет этим состоянием.|js},
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
  /* https:reactjs.org/docs/reconciliation.html */
  {
    rus: {js|Комп��н��н�� более высокого порядка (HOC) - это продвинутая техника в React для повторного использования компонентной ло��ики. Hoc не являются частью React API, как т��ко��������е. Э��о паттерны, которые возникают из композиционной природы React.|js},
    eng: "A higher-order component (HOC) is an advanced technique in React for reusing component logic. HOCs are not part of the React API, per se. They are a pattern that emerges from React's compositional nature.",
  },
  {
    rus: {js|Конкретно, компонент более высокого порядка является функцией, которая ��ерет компонент и возвращает новый компонент.|js},
    eng: "Concretely, a higher-order component is a function that takes a component and returns a new component.",
  },
  {
    rus: {js|HOCs распространены в сторонних библиотеках React, таких как connect Redux и Relay's createFragmentContainer.|js},
    eng: "HOCs are common in third-party React libraries, such as Redux's connect and Relay's createFragmentContainer.",
  },
  {
    rus: {js|В этом документе мы обсудим, почему к��мп��не��т�� более высокого порядка полезны и как написать свои собственные.|js},
    eng: "In this document, we'll discuss why higher-order components are useful, and how to write your own.",
  },
  {
    rus: {js|Компоненты-основная единица повторного использования кода в React. Однако, вы обнаружите, что некоторые патерны не подходят для традиционных компонентов.|js},
    eng: "Components are the primary unit of code reuse in React. However, you'll find that some patterns aren't a straightforward fit for traditional components.",
  },
  {
    rus: {js|Мы хотим абстракцию, которая позволяет определить эту логику в ��дном месте и разделить ее между многими компонентами.|js},
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
    rus: {js|И это все! Обернутый компонент получает все реквизиты контейнера вместе с новым реквизитом, данн����е, которые он использует для визуализации своих выходных данных.|js},
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
    rus: {js|Это упрощает замену одного HOC на другой, если они предоставляют од����ак��вые props для обернутого компонента. Это может быть полезно, например, при изменении библиотек фетчинга данных.|js},
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
    rus: {js|Этот HOC имеет ту же функциональность, что и мутирующ��я версия, избегая при этом возможности стол����новений.|js},
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
    rus: {js|Контейн��ры управляют такими вещами, как подписки и состояние, и передают props компонентам, которые обрабат��вают такие вещи, ��ак рендеринг UI. HOCs используют контейнеры как часть их реализации.|js},
    eng: "Containers manage things like subscriptions and state, and pass props to components that handle things like rendering UI. HOCs use containers as part of their implementation.",
  },
  {
    rus: {js|HOCs можно рассматривать как параметризованные определения кон��ейнер-компонента.|js},
    eng: "You can think of HOCs as parameterized container component definitions.",
  },
  {
    rus: {js|Соглашение: Передавать несвязанные props через оберну��ый компонент.|js},
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
    rus: {js|Не все HOCs выглядят одинаково. Иногда они принимают только один аргумент, обернуты�� компонент. WithRouter.|js},
    eng: "Not all HOCs look the same. Sometimes they accept only a single argument, the wrapped component. WithRouter.",
  },
  {
    rus: {js|Соглашение: Оберните отображаемоё имя для упрощения отладки.|js},
    eng: "Convention: Wrap the Display Name for Easy Debugging.",
  },
  {
    rus: {js|Предостережения. Компоненты более высокого порядка имеют несколько предостережений, которые не сразу очевидны, если ���� новичок в React.|js},
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
    rus: {js|В этом документе мы обсудим, почему рендер props по��езны, и как написа��ь свои собственные.|js},
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
    rus: {js|Теперь, вместо того, чтобы эффективно клонировать Mouse компонент и жестко кодировать что-то еще в его Render методе для решения для конкретного с��у��ая использования, мы предоставляем Render prop, который Mouse может использовать для динамичес��ого опреде��ения того, что он отображает.|js},
    eng: "Now, instead of effectively cloning the Mouse component and hard-coding something else in its render method to solve for a specific use case, we provide a render prop that Mouse can use to dynamically determine what it renders.",
  },
  {
    rus: {js|Более конкретно, Render prop-это функция prop, которую компонент использует, чтобы знать, что рендерить.|js},
    eng: "More concretely, a render prop is a function prop that a component uses to know what to render.",
  },
  {
    rus: {js|Этот метод делает поведение, котор��е нам нужно разделить, чрезвычайно портативным.|js},
    eng: "This technique makes the behavior that we need to share extremely portable.",
  },
  {
    rus: {js|Чтобы получить такое поведение, отрис��йте Mouse с помощью Render prop, которая говорит ему, что отрисовать �� текущим (x, y) ку��сора.|js},
    eng: "To get that behavior, render a <Mouse> with a render prop that tells it what to render with the current x, y of the cursor.",
  },
  {
    rus: {js|Одна интересной вещью о Render props, которую следуюет отметить, является то, что вы можете реа����изовать большинство компонентов более высокого порядка (HOC), используя обычный компонент с Render prop.|js},
    eng: "One interesting thing to note about render props is that you can implement most higher-order components (HOC) using a regular component with a render prop.",
  },
  {
    rus: {js|Таким образом, использование Render prop позволяет использовать любой шаблон.|js},
    eng: "So using a render prop makes it possible to use either pattern.",
  },
  {
    rus: {js|��о умолчанию, при рекурсии на дочерни�� узлах DOM, React п��осто перебирает о��а списка дочерних узлов одновременно и генерирует мутацию всякий раз, когда есть разница.|js},
    eng: "By default, when recursing on the children of a DOM node, React just iterates over both lists of children at the same time and generates a mutation whenever there's a difference.",
  },
  {
    rus: {js|Когда у детей есть ключи, React использует ключ для сопоставления детей в исходном дереве с детьми в последующем дереве.|js},
    eng: "When children have keys, React uses the key to match children in the original tree with children in the subsequent tree.",
  },
  {
    rus: {js|На практике найти ключ обычно не сложно. Элемент, который вы собираетесь отобразить, может уже иметь уникальный ID, поэтому ключ может просто прийти из ваших данных.|js},
    eng: "In practice, finding a key is usually not hard. The element you are going to display may already have a unique ID, so the key can just come from your data.",
  },
  {
    rus: {js|Когда это не так, вы можете добавить новое свойство ID в свою модель или хэшировать некоторые части контент�� для создания ключа.|js},
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
    rus: {js|Мы регулярно совершенствуем эвристику, чтобы ускорить общие случаи использования.|js},
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
    rus: {js|Нестабильные ключи (как те, которые производятся Math.random()) приведет к ненужному воссозданию многих экземпляров компонентов и у��лов DOM, что может п��ивести к снижению производительности и потере состояния в дочерних компонентах|js},
    eng: "Unstable keys (like those produced by Math.random()) will cause many component instances and DOM nodes to be unnecessarily recreated, which can cause performance degradation and lost state in child components.",
  },
  /* https:reactjs.org/docs/reconciliation.html */
  {
    rus: {js|Приведенные ниже примеры были обновлены для использования React.createRef() API, представленый в React 16.3. Если используется более раннюю версию React, мы рекомендуем использовать callback refs.|js},
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
    rus: {js|Когда атрибут ref используется на компоненте пользовательского класса, объект ref получает смонт��рованный экзе��пляр компонента в качестве текущего.|js},
    eng: "When the ref attribute is used on a custom class component, the ref object receives the mounted instance of the component as its current.",
  },
  {
    rus: {js|Вы не можете использовать атрибут ref для функциональных компонентов, потому что у них не�� экземпляров.|js},
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
    rus: {js|Вы должны преобразовать компонент в класс, если вам нужен реф на него, так же, как вы делаете, когда вам нужны мето��ы жизненного цикла или состояние.|js},
    eng: "You should convert the component to a class if you need a ref to it, just like you do when you need lifecycle methods or state.",
  },
  {
    rus: {js|В редких случаях ����ам может пот��е��оваться доступ к ДОЧЕРНЕМУ ��злу DOM из родительского компонента.|js},
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
    rus: {js|Ваше первое намерение может быть использовать ref-��, чтобы 'сделать, чтобы что-то произошло' в вашем приложении.|js},
    eng: "Your first inclination may be to use refs to 'make things happen' in your app.",
  },
  {
    rus: {js|Если это так, выделите ми����утку и подумайте более критически о том, кому state должно принадлежать в иер��рхии компонентов.|js},
    eng: "If this is the case, take a moment and think more critically about where state should be owned in the component hierarchy.",
  },
  {
    rus: {js|Часто становится ясно, что надлежащее место для 'владения' ��тим state находится на более высоком уровне в иерархии. См. руководство по поднятию состояния и примеры.|js},
    eng: "Often, it becomes clear that the proper place to 'own' that state is at a higher level in the hierarchy. See the Lifting State Up guide for examples of this.",
  },
  {
    rus: {js|По мере роста вашего пр��ложения, вы можете поймать ��ного ошибок с помо��ью проверки типов.|js},
    eng: "As your app grows, you can catch a lot of bugs with typechecking.",
  },
  {
    rus: {js|Для некоторых приложений можно использовать JavaScript расшире�����ия, такие как Flow или TypeScript для проверки всего при��ожения.|js},
    eng: "For some applications, you can use JavaScript extensions like Flow or TypeScript to typecheck your whole application.",
  },
  {
    rus: {js|React имеет некоторые вс����оенные возможности проверки типов.|js},
    eng: "React has some built-in typechecking abilities.",
  },
  {
    rus: {js|Чтобы выполнить проверку типов для props компонента, можно назначить специальное propTypes свойство.|js},
    eng: "To run typechecking on the props for a component, you can assign the special propTypes property.",
  },
  {
    rus: {js|PropTypes содержит ряд валидаторов, которые могут быть использованы, чтобы убедить��я, что данные, которые вы получаете, валидны.|js},
    eng: "PropTypes exports a range of validators that can be used to make sure the data you receive is valid.",
  },
  {
    rus: {js|Если для prop у��азано недопустимое значение, в консоли JavaScript будет показано предупреждение.|js},
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
    rus: {js|Можно определить значения по умол��ан��ю для props, пр����воив специальное свойство defaultProps.|js},
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
    rus: {js|До сих пор мы создали приложение, которое корректно рендерится как функция от props и state, стекающих вниз по ��ерар��ии.|js},
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
    rus: {js|React делает этот поток данных явным, чтобы было легко понять, как работает ваш�� программа.|js},
    eng: "React makes this data flow explicit to make it easy to understand how your program works.",
  },
  {
    rus: {js|Мы хотим убе��иться, что всякий р��з, когда пользователь изменяет форму, мы о��новляем состояние, чтобы отразить пользовательский ввод.|js},
    eng: "We want to make sure that whenever the user changes the form, we update the state to reflect the user input.",
  },
  {
    rus: {js|Поскольку компоненты должны обновлять только свое собственное состояние, FilterableProductTable передаст обратные вызовы в панель поиска, которая будет срабатывать всякий раз, когда состояние должно быть обновлено.|js},
    eng: "Since components should only update their own state, FilterableProductTable will pass callbacks to SearchBar that will fire whenever the state should be updated.",
  },
  {
    rus: {js|Хо��я это звучит сложно, на самом деле это всего л��шь несколько строк кода.|js},
    eng: "Though this sounds complex, it's really just a few lines of code.",
  },
  {
    rus: {js|И это действительно ясно, как ваши данные текут по всему прилож��нию.|js},
    eng: "And it's really explicit how your data is flowing throughout the app.",
  },
  {
    rus: {js|Надеюсь, это даст вам представление о том, как строить компо��енты и приложения с помощью React.|js},
    eng: "Hopefully, this gives you an idea of how to think about building components and applications with React.",
  },
  {
    rus: {js|Хотя это может быть немного больше печатания, чем вы привыкли.|js},
    eng: "While it may be a little more typing than you're used to",
  },
  {
    rus: {js|П��мните, ��то код ч��тае��с�� гораздо больше раз, чем пишется, и очень легко читать этот модульный, явный код.|js},
    eng: "Remember that code is read far more than it's written, and it's extremely easy to read this modular, explicit code.",
  },
  {
    rus: {js|Когда вы начнете создавать большие библиотеки компонентов, вы оцените эту э��сплицитность и модульность.|js},
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
    rus: {js|Далее нам нужно определить, какой компонент мутирует или вл��деет этим с��стоянием.|js},
    eng: "Next, we need to identify which component mutates, or owns, this state.",
  },
  {
    rus: {js|Запомните: React это односторонний ��ото�� данных по иерархии компонентов.|js},
    eng: "Remember: React is all about one-way data flow down the component hierarchy.",
  },
  {
    rus: {js|Может быть, не сразу ясно, какой компонент должен владеть каким состоянием.|js},
    eng: "It may not be immediately clear which component should own what state.",
  },
];