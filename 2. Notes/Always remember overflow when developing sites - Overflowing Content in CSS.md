[[CSS]]

# Overflowing Content in CSS
Created:  [[2022-10-09]]

---
**==When developing a site, always keep overflow in mind.==**


By default, 
    CSS does NOT HIDE any overflow of content


### Values of `overflow: ;` property 
- `hidden`
- `scroll` - to add scrollbar when content overflows
- `auto` - usually works best
  But if you want to be more specific:
    - `overflow-y: scroll` - only have a scrollbar on the y axis (left side)
Note:
Using `auto` or `scroll` you create a **Block Formatting Context** (BFC). 
The content of the box that you have changed the value of `overflow` for acquires a self-contained layout. 
Content outside the container cannot poke into the container, and nothing can poke out of that container into the surrounding layout. 
    This enables scrolling behavior, as all box content needs to be contained and not overlap, in order to create a consistent scrolling experience.


### Long word in a small box
![[Pasted image 20221009104332.png|100]]
Long word in a small box,
consider using the following properties:
- [`word-break`](https://developer.mozilla.org/en-US/docs/Web/CSS/word-break) 
- [`overflow-wrap`](https://developer.mozilla.org/en-US/docs/Web/CSS/overflow-wrap) 






References:
https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Overflowing_content