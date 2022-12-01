[[CSS Layout]]

# Float
Created:  [[2022-11-27]]

---
Floating an element changes the 
1. behavior of that element 
2. the block level elements that follow it in normal flow. 

The float property has four possible values:
- left — Floats the element to the left.
- right — Floats the element to the right.
- none — Specifies no floating at all. **==DEFAULT VALUE==**.
- inherit — value of float property should be inherited from the element's parent element.

---
Originally for floating images inside blocks of text, 
the `float` property became one of the most commonly used tools for 
- creating multiple column layouts on es. 
With the advent of flexbox and grid it's now returned to its original purpose, 
as this article explains.

Objective: To learn how to create floated features on webpages and to use the clear property as well as other methods for clearing floats.

The background of floats
The float property was introduced to allow web developers to 
- implement simple layouts involving an image floating inside a column of text, 
- with the text wrapping around the left or right of it. 
- The kind of thing you might get in a newspaper layout.

But web developers quickly **realized that you can float anything, not just images**, 
so the use of float broadened, for example, to fun layout effects such as drop-caps.

Floats have commonly been used to create entire web site layouts featuring 
- multiple columns of information floated so they sit alongside one another 
- There are newer, better layout techniques available. 
- Using floats in this way should be regarded as a legacy technique.

---
```CSS
.box {
    float: left;
    margin-right: 15px; // Adds an indent to push other boxes to right
```

While we can add a margin to the float to push the text away, 
we can't add a margin to the text to move it away from the float. 
This is because a floated element is taken out of normal flow and the boxes of the following items actually run behind the float.
Due to the float being removed from normal flow the box around the paragraph still remains full width.
```CSS
.special {
  background-color: rgb(79, 185, 227);
  padding: 10px;
  color: #fff;
}
```
![[Pasted image 20221127143020.png|300]]

## `clear: ` property 
```CSS
.cleared {
  clear: left;
}
```
Accepts the following values
-   `left`: Clear items floated to the left.
-   `right`: Clear items floated to the right.
-   `both`: Clear any floated items, left or right.



## display: flow-root;
FROM
![[Pasted image 20221127151806.png|300]]

TO THIS BELOW (Modern way of solving the problem)
```CSS
.box {
 display: flow-root;
}
```
![[Pasted image 20221127151736.png|300]]

### Three potential ways to do the same
https://developer.mozilla.org/en-US/docs/Learn/CSS/CSS_layout/Floats#clearing_boxes_wrapped_around_a_float

