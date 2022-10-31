[[This controls which css rule applies to what element - Cascade - Specificity - Inheritance]]

# Inheritance
Created:  [[2022-10-05]]

---
1. Some inherit the values of their parent elements, 
For Example
    If you set a `color` and `font-family` on an element, 
    Every element inside it will also be styled with that color and font, 
    unless you've applied different color and font values directly to them.


2. Some DO NOT inherit the properties of their parent elements
For example, 
    if you set a `width` of 50% on an element, 
    all of its descendants do not get a width of 50% of their parent's width. 
    If this was the case, CSS would be very frustrating to use!


On MDN CSS property reference pages, 
The "Formal definition", lists a number of data points about that property, including whether it is inherited or not. 
See the [color property Formal definition section](https://developer.mozilla.org/en-US/docs/Web/CSS/color#formal_definition) as an example.












