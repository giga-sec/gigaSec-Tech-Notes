[[Parts of a CSS Box Model]]

# Content box
Created:  [[2022-10-07]]

---
The area where your content is displayed; 
- `inline-size: `
- `block-size: `
- `width: `      `height" `

In the example below, we have a `<span>` inside a paragraph. 
We have applied a `width`, `height`, `margin`, `border`, and `padding` to it.
![[Pasted image 20221007093428.png|250]]
```CSS
.box {
  width: 350px;
  inline-size: 350px;
  height: 150px;
  block-size: 150px;
  margin: 10px;
  padding: 25px;
  border: 5px solid black;
}
```
You can see that the width and height are ignored. 
The vertical margin, padding, and border are respected but don't change the relationship of other content to our inline box. 
The padding and border overlap other words in the paragraph. 
The horizontal padding, margins, and borders move other content away from the box.


`display: ` property controls if an HTML element behaves as inline or block element
The following are the values of `display: ` property
- `inline-block`
- `block`
- `inline`

More info below
https://developer.mozilla.org/en-US/docs/Web/CSS/display












