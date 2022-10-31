[[Javascript]]

# Numbers in Javascript
Created:  [[2022-10-15]]

---
The [`Number`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Number) object, an instance of which represents all standard numbers you'll use in your JavaScript, has a number of useful methods available on it for you to manipulate numbers. 

For example, to round your number to a fixed number of decimal places, use the [`toFixed()`](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Global_Objects/Number/toFixed)method. 
```JS
const lotsOfDecimal = 1.766584958675746364;
const twoDecimalPlaces = lotsOfDecimal.toFixed(2);
```

```JS
inc++;
dec--;
x += y;
```

Comparison
```JS
// test the equality of BOTH the VALUES and their DATATYPES.
3 === 3  
'3' !== 3  

// test ONLY the VALUE equality
3 == 3
2 != 3
```


Change string to int using the `number()` constructor
```JS
let myNumber = "74";
myNumber = Number(myNumber) + 3;
```












