[[Arrays in Javascript]]

# Converting from strings and arrays vice verse
Created:  [[2022-10-23]]

---
#### Arrays to strings
1. Easy Method but with restrictions
`toString()` always uses a comma.
```JS
const dogNames = ['Rocket','Flash','Bella','Slugger'];
dogNames.toString(); // Rocket,Flash,Bella,Slugger
```

2. https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/join
**`join()`** method
Can specify different separators
```JS
const elements = ['Fire', 'Air', 'Water'];

console.log(elements.join('-'));
// expected output: "Fire-Air-Water"
```

#### String to array
To do this, we can use the [`split()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/String/split) method. 
- single parameter, the character you want to separate the string at, 
- returns the substrings between the separator as items in an array.

```JS
const data = 'Manchester,London,Liverpool,Birmingham,Leeds,Carlisle';
const cities = data.split(',');
// ['Manchester', 'London', 'Liverpool', 'Birmingham', 'Leeds', 'Carlisle']
```













