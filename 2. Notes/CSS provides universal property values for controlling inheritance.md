[[This controls which css rule applies to what element - Cascade - Specificity - Inheritance]]

# CSS provides universal property values for controlling inheritance
Created:  [[2022-10-04]]

---
Universal meaning **==every CSS property accepts these values==**:

1. [`inherit`](https://developer.mozilla.org/en-US/docs/Web/CSS/inherit)
Sets the property value applied to a selected element 
    to be the same as that of its parent element. 
    This "turns on inheritance".

2. [`initial`](https://developer.mozilla.org/en-US/docs/Web/CSS/initial)
Sets the property value applied to a selected element 
    to the [initial value](https://developer.mozilla.org/en-US/docs/Web/CSS/initial_value) of that property.


3. [`revert-layer`](https://developer.mozilla.org/en-US/docs/Web/CSS/revert-layer)
Resets the property value applied to a selected element 
        to the value established in a previous [cascade layer](https://developer.mozilla.org/en-US/docs/Web/CSS/@layer).

4. [`revert`](https://developer.mozilla.org/en-US/docs/Web/CSS/revert)
Resets the property value applied to a selected element 
    to the browser's default styling rather than the defaults applied to that property. 
    This value acts like [`unset`](https://developer.mozilla.org/en-US/docs/Web/CSS/unset) in many cases.

5. [`unset`](https://developer.mozilla.org/en-US/docs/Web/CSS/unset)
Resets the property to its natural value, 
    meaning that if the property is naturally inherited it acts like `inherit`, 
    otherwise it acts like `initial`.



The CSS shorthand property all can be used to apply one of these inheritance values to (almost) all properties at once. Its value can be any one of the inheritance values (inherit, initial, revert, revert-layer, or unset). It's a convenient way to undo changes made to styles so that you can get back to a known starting point before beginning new changes.
```CSS
selector {
    all: unset;
}
```

[[Situations in which you may use !important flag value]]










