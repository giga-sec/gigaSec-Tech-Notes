[[Javascript]]

# Arrays in Javascript
Created:  [[2022-10-20]]

---
### Length of Array
```JS
const shopping = ['bread', 'milk', 'cheese', 'hummus', 'noodles'];
console.log(shopping.length);  // 5
```

### Modifying Values in Array
```JS
const shopping = ['bread', 'milk', 'cheese', 'hummus', 'noodles'];
shopping[0] = 'tahini';
console.log(shopping);
// shopping will now return [ "tahini", "milk", "cheese", "hummus", "noodles" ]
```

### Find the index of a value
```JS
const birds = ['Parrot', 'Falcon', 'Owl'];
console.log(birds.indexOf('Owl'));   //  2
```

### Adding items to an array
```JS
const cities = ['Manchester', 'Liverpool'];
cities.push('Cardiff'); // adds at the END
cities.unshift('Edinburgh');  // adds at BEGINNING
cities.pop('Liverpool');
```
https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Array/pop





### [[Removing Items in Array - Javascript]]


### [[Accessing Items in Array - Loops and other methods]]


### [[Converting from strings and arrays vice versa]]


