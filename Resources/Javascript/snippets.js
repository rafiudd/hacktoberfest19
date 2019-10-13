// 1- Conditionally add entry to js object

var addPython = true;
var languages = { 
  javascript: "high", 
  html: "high", 
  css: "med",
  ...(addPython && {python: "low"})
};

// if addPython were false, python property wouldn't been added

// 2- Counting items in string
// This will return an object with each word as a key and the number of ocurrences as value

var phrase = 'hi bye cristian hi cookie';

phrase.split(' ').reduce(function(counter, item) {
  counter[item] = counter.hasOwnProperty(item) ? counter[item] + 1 : 1;
  return counter;
}, {});

// Result: { "hi": 2, "bye": 1, "cristian": 1, "cookie": 1 }

// 3- Validating array of emails using Array.every()
// Array.every() tests whether all elements in the array pass the test implemented by the provided function.

const emailArray = ['hi@gmail.com', 'ha@gmail.es'];
const areEmailsValid = emailArray.every(email =>
  /^[A-Z0-9._%+-]+@[A-Z0-9.-]+\.[A-Z]{2,4}$/i.test(email)
);
