[[Javascript]]

# Strings in Javascript
Created:  [[2022-10-18]]

---
Most things are objects in JavaScript. 
When you create a string, for example by using
```JS
const string = 'This is my string';
```
Your variable becomes a string object instance, and as a result has a large number of properties and methods available to it. You can see this if you go to the [`String`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String) object page and look down the list on the side of the page!

### Concatenation in Strings
```JS
const greeting = "Hello";
const name = "Chris";
console.log(`${greeting}, ${name}`); // "Hello, Chris"
```


```JS
const output = `I like the song ${song}. I gave it a score of 
${(score / highestScore) * 100} %.`;
```


### Length of String
[`length`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/length) property
```JS
const browserType = 'mozilla';
browserType.length;
```

### Get a specific character in a string
```JS
browserType[0];
```

Get the last letter of a string
```JS
browserType[browserType.length-1];
```

See if a certain group of letters exists in other word
```JS
const browserType = 'mozilla';

if (browserType.includes('zilla')) {
  console.log('Found zilla!');
} else {
  console.log('No zilla here!');
}
```


Often you'll want to know if a string starts or ends with a particular substring. 
This is a common enough need that there are two special methods for this:
- [`startsWith()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/startsWith) 
- [`endsWith()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/endsWith)

`startsWith()`
```JS
startsWith(searchString)
startsWith(searchString, position)
```

```JS
const str1 = 'Saturday night plans';

console.log(str1.startsWith('Sat'));
// expected output: true

console.log(str1.startsWith('Sat', 3));
// expected output: false
```





https://developer.mozilla.org/en-US/docs/Learn/JavaScript/First_steps/Useful_string_methods#finding_the_position_of_a_substring_in_a_string
Returns the index of where the specific character is in a string

### Find the index of string or character

```JS
const tagline = 'MDN - Resources for developers, by developers';
console.log(tagline.indexOf('developers')); // 20
```

```JS
console.log(tagline.indexOf('x')); // -1
```


### Extract Substring from a string
`slice(int: starting_index, int: ending_index)`
```JS
const browserType = 'mozilla';
console.log(browserType.slice(0, 2)); // "moz"
```


### lowercase or UPPERCASE
The string methods [`toLowerCase()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/toLowerCase) and [`toUpperCase()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/toUpperCase) take a string and convert all the characters to lower- or uppercase, respectively. This can be useful for example if you want to normalize all user-entered data before storing it in a database.

Let's try entering the following lines to see what happens:

```JS
const radData = 'My NaMe Is MuD';
console.log(radData.toLowerCase());
console.log(radData.toUpperCase());
```



### Replace Characters
-  `replace()` method
```JS
const browserType = 'mozilla';
const updated = browserType.replace('moz','van');

console.log(updated);      // "vanilla"
console.log(browserType);  // "mozilla"
```

- `replaceAll()` method
```JS
let quote = 'To be or not to be';
quote = quote.replaceAll('be','code');
console.log(quote);  // "To code or not to code"
```


### String to Int
`Number()` function
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Number/Number
