[[Manipulate the background - CSS Background Property]]

# Longhand properties of CSS background
Created:  [[2022-10-07]]

---


### The [`background-color`](https://developer.mozilla.org/en-US/docs/Web/CSS/background-color) property
property defines the background color on any element in CSS. 
The property accepts any valid [`<color>`](https://developer.mozilla.org/en-US/docs/Web/CSS/color_value).
A `background-color` extends underneath the content and padding box of the element.


### The [`background-image`](https://developer.mozilla.org/en-US/docs/Web/CSS/background-image) property
Adds background-image
In the example below, we have two boxes — one has a background image which is larger than the box ([balloons.jpg](https://mdn.github.io/css-examples/learn/backgrounds-borders/balloons.jpg)), the other has a small image of a single star ([star.png](https://mdn.github.io/css-examples/learn/backgrounds-borders/star.png)).
```CSS
.box {
  background-image: url(star.png);
}
```

The `background-image` will always be on top than `background-color`

Gradients data type can be applied here
https://developer.mozilla.org/en-US/docs/Web/CSS/gradient
```CSS
.a {
  background-image: linear-gradient(105deg, rgba(0,249,255,1) 39%, rgba(51,56,57,1) 96%);
}

.b {
  background-image: radial-gradient(circle, rgba(0,249,255,1) 39%, rgba(51,56,57,1) 96%);
  background-size: 100px 50px;
}
```



#### Multiple background images
It is also possible to have multiple background images — 
you specify multiple `background-image` values in a single property value, 
    separating each one with a comma.

You may end up with overlapping background images.
Last listed background image will be at the bottom of the stack


The other `background-*` properties can also have comma-separated values:
```CSS
background-image: 
    url(image1.png), 
    url(image2.png), 
    url(image3.png),
    url(image4.png);
background-position: 10px 20px, 
                     top right;
```
Question: What happens when different properties have different numbers of values? 
Ans: The smaller numbers of values will cycle — 
    Above example has FOUR background images but only TWO `background-position` values. 
    `image1` will be given 1st position value
    `image2` will be given 2nd position value
    then they will cycle back around again — 
        `image3` will be given 1st position value, 
            `image4` will be given 2nd position value.




### The [background-size](https://developer.mozilla.org/en-US/docs/Web/CSS/background-size) property
Values for `background-size: ` property below:
-  [length](https://developer.mozilla.org/en-US/docs/Web/CSS/length)
- [percentage](https://developer.mozilla.org/en-US/docs/Web/CSS/percentage) 
-   `cover` — the browser will make the image just large enough so that it completely covers the box area while still retaining its aspect ratio. 
-   `contain` — the browser will make the image the right size to fit inside the box. 


### The [`background-position`](https://developer.mozilla.org/en-US/docs/Web/CSS/background-position) property
uses a coordinate system in which the top-left-hand corner of the box is `(0,0)`, and the box is positioned along the horizontal (`x`) and vertical (`y`) axes.

keyword values like
- top, bottom `background-position: top center;`
- lengths, percentages `background-position: 20px 10%;`

4 value syntax
`background-position: top 20px right 10px;`
Meaning we are positioning the background 
    20px from the top 
    10px from the right




### The [`background-repeat`](https://developer.mozilla.org/en-US/docs/Web/CSS/background-repeat) property
used to control the tiling behavior of images. 
The available values are:
-   `no-repeat` — stop the background from repeating altogether.
-   `repeat-x` — repeat horizontally.
-   `repeat-y` — repeat vertically.
-   `repeat` — the default; repeat in both directions.
```CSS
.box {
  background-repeat: repeat;
}
```


### The [background-attachment](https://developer.mozilla.org/en-US/docs/Web/CSS/background-attachment) property
This specifies how `background-image: ` behaves when the content scrolls. 
Takes the following values:

-   `fixed`: 
    1. Doesn't scroll when the page or element content is scrolled. Causes element's background to be fixed to the viewport 
    Will always remain in the same position on the screen.


-   `scroll`: 
    1. If page is scrolled, element's background is scrolled too. 
    2. If the element content is scrolled, the background DOES NOT move. 
    In effect, the background is fixed to the same position on the page, 
        so it scrolls as the page scrolls.



-   `local`: fixes the background to the element it is set on, 
    1. If page and element are scrolled, both moves the background.


