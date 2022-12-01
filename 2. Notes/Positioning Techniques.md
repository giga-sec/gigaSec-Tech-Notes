[[CSS Layout]]

# Positioning Techniques
Created:  [[2022-11-27]]

---
`position: relative;`
Positioning allows you to move an element from where it would otherwise be placed in normal flow over to another location. 
Positioning isn't a method for creating the main layouts of a page; 
It's more about managing and fine-tuning the position of specific items on a page.

Understanding positioning also helps in understanding normal flow, and what it means to move an item out of the normal flow.
There are five types of positioning you should know about:
## Static Positioning
1. **Static positioning** is the **==DEFAULT==** that every element gets. 
    "put the element into its normal position in the document layout flow — 
    nothing special to see here".

## Relative Positioning
2.  **Relative positioning** 
    modifies an element's position on the page, 
    moving it **==relative to its position in normal flow==**, 
    as well as making it overlap other elements on the page.
![[Pasted image 20221127153351.png|300]]
Once the positioned element has taken its place in the normal flow,
you can then modify its final position, 
including making it overlap other elements on the page.
`top, bottom, left, right`
```CSS
.positioned {
  position: relative;
  top: 30px;
  left: 30px;
}
```
These serve to move the affected element down and to the right. (COMPLETE OPPOSITE)
Think of it as the **==element being pushed on its left and top sides==**, which moves it right and down.

## Absolute Positioning
3.  **Absolute positioning** 
    creates no gap because element is removed from normal flow
    instead position it using offsets from the edges of a **containing block.**
```CSS
position: absolute;
```
![[Pasted image 20221127153438.png|300]]
An absolutely positioned element no longer exists in the normal document flow.
Thus, there's no gap 

Rather than positioning the element based on its relative position within the normal document flow, 
They specify the distance the element should be from each of the containing element's sides. 
So in this case, we are saying that the absolutely positioned element should sit 30px from the top of the "containing element" and 30px from the left. 
(In this case, the "**containing element**" is the **initial containing block**.

### How to find the containing element
Which element is the "containing element" of an absolutely positioned element? 
This is very much dependent on the position property of the ancestors of the positioned element 
(See [Identifying the containing block](https://developer.mozilla.org/en-US/docs/Web/CSS/Containing_block#identifying_the_containing_block)).

IF no ancestor elements have their position property explicitly defined, 
THEN by default all ancestor elements will have a static position. 
The result of this is 
-> The absolutely positioned element will be contained in the **initial containing block**. 

The **initial containing block** has the 
- dimensions of the viewport
- also the block that contains the `<html>` element.
In other words, the **absolutely positioned element** will be 
- displayed outside of the `<html>` element 
- and be positioned relative to the initial viewport.

We can change the **positioning context**, 
-> (which element the absolutely positioned element is positioned relative to). 
This is done by setting positioning on one of the element's ancestors: 
to one of the elements it's nested inside of 
(you can't position it relative to an element it's not nested inside of). 
To see this, add the following declaration to your `body` rule:
```CSS
body {
    position: relative;
}
```
The positioned element now sits relative to the `<body>` element.

![[Pasted image 20221128110834.png|300]]
```HTML
<div class="container">
  <p>Veggies es bonus vobis, proinde vos postulo essum magis kohlrabi welsh onion daikon amaranth tatsoi tomatillo melon azuki bean garlic.</p>
  <div class="target">Target</div>
  <p>Gumbo beet greens corn soko endive gumbo gourd. Parsley shallot courgette tatsoi pea sprouts fava bean collard greens dandelion okra wakame tomato. Dandelion cucumber earthnut pea peanut soko zucchini.</p>
</div>
```


### Z-Index
- unitless index values
- Using values of 2 or 3 would give the same effect as values of 300 or 40000.


## Fixed positioning
completely remove an element from the normal flow
is very similar to absolute positioning 
The item remains fixed in relation to viewport (scrolling doesn't affect the position of it)

Can create useful UI items that are fixed in place:
- persistent navigation menus that are always visible no matter how much the page scrolls.
```CSS
h1 {
  position: fixed;
  top: 0;
  width: 500px;
  margin-top: 0;
  background: white;
  padding: 10px;
}
```
The `top: 0;` is required to make it stick to the top of the screen. 
We give the heading the same width as the content column 
and then a white background 
and some padding / margin 
-> so the content won't be visible underneath it.


## Sticky positioning
makes an element act like `position: relative`
it'll scroll in normal flow until it hits offsets from the viewport that we have defined. 
At that point, it becomes "stuck" as if it had `position: fixed` applied
Example:
Scrolling Index Page:
https://mdn.github.io/learning-area/css/css-layout/positioning/7_sticky-positioning.html



















