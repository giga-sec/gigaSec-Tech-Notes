[[CSS]]

# Different types of Element Selector
Created:  [[2022-10-02]]

---

https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Selectors



[[This controls which css rule applies to what element - Cascade - Specificity - Inheritance]]


---
# New
The comma between element selector provides a way to have the same properties to the picked element selectors. Order doesn't matter here
```CSS
span, strong{
    background-color: yellow;
}
```
For example, this will turn every span and strong with background-color into yellow. 


One wrong syntax will ignore the whole element selectors
```CSS
h1, ..special {
  color: blue;
}
```


[[Types of Selectors]]


