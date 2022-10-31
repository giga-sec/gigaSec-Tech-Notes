[[Parts of a CSS Box Model]]

# Border box
Created:  [[2022-10-07]]

---
The `border` is drawn between the `margin` and the `padding` of a box. 
The border box wraps the content and any padding; 
```CSS
.box {
    border: solid 5px;
}
```


To set the width, style, or color of a SPECIFIC side.
-   [`border-top-width`](https://developer.mozilla.org/en-US/docs/Web/CSS/border-top-width)
-   [`border-top-style`](https://developer.mozilla.org/en-US/docs/Web/CSS/border-top-style)
-   [`border-top-color`](https://developer.mozilla.org/en-US/docs/Web/CSS/border-top-color)
    

More Border Properties:
https://developer.mozilla.org/en-US/docs/Web/CSS/border

---
### Rounded Corners
- to all sides
```CSS
.box {
  border-radius: 10px;
}
```
- or top right side
```CSS
.box {
  border-top-right-radius: 1em 10%;
}
```






### Standard Box vs Alternative Box Model
If you are using the standard box model, 
    the size of the border is added to the `width` and `height` of the box. 


If you are using the [[Alternative CSS Box Model]] 
    the size of the border makes the content box smaller as it takes up some of that available `width` and `height`.




