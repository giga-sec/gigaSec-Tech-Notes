[[Parts of a CSS Box Model]]

# Margin box
Created:  [[2022-10-07]]

---
- `margin: ` property
- can have negative margin

```CSS
/* Apply to all four sides */
margin: 1em;
margin: -3px;

/* vertical | horizontal */
margin: 5% auto;

/* top | horizontal | bottom */
margin: 1em auto 2em;

/* top | right | bottom | left */
margin: 2px 1em 0 auto;
```


Margin Collapsing
A number of rules dictate when margins do and do not collapse: 
-   Two positive margins will combine to become one margin. Its size will be equal to the largest individual margin.
-   Two negative margins will collapse and the smallest (furthest from zero) value will be used.
-   If one margin is negative, its value will be _subtracted_ from the total.

The main thing to remember is that margin collapsing is a thing that happens if you are creating space with margins and don't get the space you expect.
https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Box_Model/Mastering_margin_collapsing


**Note:** 
The margin is not counted towards the actual size of the box 
— sure, it affects the total space that the box will take up on the page, but only the space outside the box. The box's area stops at the border — it does not extend into the margin.

















