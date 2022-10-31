[[CSS]]

# inner display type
Created:  [[2022-10-06]]

---
Boxes also have an _inner_ display type, 
which dictates how elements inside that box are laid out.


By default,
    the elements inside a box are also laid out in [[normal flow]] and behave as block or inline boxes.


Change the inner display type -> `display: flex;`.
    Element will still use outer display type `block` 
    but this changes the inner display type to `flex`. 
Any direct children of this box will become flex items and behave according to the [Flexbox](https://developer.mozilla.org/en-US/docs/Learn/CSS/CSS_layout/Flexbox) specification.



**Learn more about**
- values of display
- how boxes work in block and inline layout
[Block and Inline Layout](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Flow_Layout/Block_and_Inline_Layout_in_Normal_Flow). 


