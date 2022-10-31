[[Arrays in Javascript]]

# Removing Items in Array - Javascript
Created:  [[2022-10-23]]

---
#### remove last item1
`pop.()` to remove and save that item into a variable
```JS
const cities = ['Manchester', 'Liverpool'];
const removedCity = cities.pop();
console.log(removedCity);   // "Liverpool"
```

#### remove first item
```JS
const cities = ['Manchester', 'Liverpool'];
cities.shift();
```

#### Remove item by index
In this call to `splice()`, takes two arguments
1. where to start removing items,
2. how many items should be removed. 
```JS
const cities = ['Manchester', 'Liverpool', 'Edinburgh', 'Carlisle'];
const index = cities.indexOf('Liverpool');
if (index !== -1) {
  cities.splice(index, 2);
}
console.log(cities);     // [ "Manchester", "Carlisle" ]
```












