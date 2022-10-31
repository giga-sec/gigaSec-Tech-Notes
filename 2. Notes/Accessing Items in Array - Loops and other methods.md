[[Arrays in Javascript]]

# Accessing Items in Array
Created:  [[2022-10-23]]

---
#### `for...of` statement
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Statements/for...of
```JS
const birds = ['Parrot', 'Falcon', 'Owl'];

for (const bird of birds) {
  console.log(bird);
}
```

#### `map()`
Sometimes you will want to do the same thing to each item in an array, leaving you with an array containing the changed items. You can do this using [`map()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/map). The code below takes an array of numbers and doubles each number:
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/map
```JS
function double(number) {
  return number * 2;
}
const numbers = [5, 2, 7, 6];
const doubled = numbers.map(double);
console.log(doubled);  // [ 10, 4, 14, 12 ]
```
We give a function to the `map()`, and `map()` calls the function once for each item in the array, passing in the item. It then adds the return value from each function call to a new array, and finally returns the new array.

#### `filter()`
Create a new array containing only the items in the original array 
    that match some test condition

Example:
    Code below takes an array of strings 
    then **returns an array containing just the strings that are greater than 8 characters long:**
```JS
function isLong(city) {
  return city.length > 8;
}
const cities = ['London', 'Liverpool', 'Totnes', 'Edinburgh'];
const longer = cities.filter(isLong);
console.log(longer);  // [ "Liverpool", "Edinburgh" ]
```
Like `map()`, 
1.  We give a function to the `filter()` method, 
2. `filter()` calls this function for every item in the array, passing in the item. 
    IF -> the function returns `true`, 
    THEN ->  the item is added to a new array. Finally it returns the new array.











