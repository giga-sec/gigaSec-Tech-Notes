[[Two types of length data type units used in CSS]]

# relative length units
Created:  [[2022-10-10]]

---
Relative length units are relative to something else, perhaps the size of the parent element's font, or the size of the viewport. The benefit of using relative units is that with some careful planning you can make it so the size of text or other elements scales relative to everything else on the page

`<length>` unit value
What relative to it is


### `em`    
Relative to font size of the parent, typographical properties like `font-size` property
Relative to font size of the element itself, like `width` property

Each successive level of nesting gets progressively larger
    as each has its font size times its parent's font size.

### `rem`
Font size of the root element.
Take their sizing from the root element (`<html>`). 
This means that each successive level of nesting does not keep getting large


## More
### `ex`
x-height of the element's font.

### `ch`
The advance measure (width) of the glyph "0" of the element's font.


### `lh`
Line height of the element.

### `rlh`
Line height of the root element. When used on the `[font-size](https://developer.mozilla.org/en-US/docs/Web/CSS/font-size)` or `[line-height](https://developer.mozilla.org/en-US/docs/Web/CSS/line-height)` properties of the root element, it refers to the properties' initial value.

### `vw` 
`1vw` is equal to 1% of the viewport width
10vw is 10 percent of the width of the viewport


### `vh`
`1vh` is equal to 1% of the viewport height


### `vmin`
1% of the Viewport's smaller dimension.

### `vmax`
1% of the viewport's larger dimension.

### `vb`
1% of the size of the initial containing block in the direction of the root element's [block axis](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Logical_Properties#block_vs._inline).

### `vi`
1% of the size of the initial containing block in the direction of the root element's [inline axis](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Logical_Properties#block_vs._inline).

### `svw, svh`
1% of the [small viewport](https://developer.mozilla.org/en-US/docs/Web/CSS/length#relative_length_units_based_on_viewport)'s width and height, respectively.

### `lvw, lvh`
1% of the [large viewport](https://developer.mozilla.org/en-US/docs/Web/CSS/length#relative_length_units_based_on_viewport)'s width and height, respectively.

### `dvw, dvh`
1% of the [dynamic viewport](https://developer.mozilla.org/en-US/docs/Web/CSS/length#relative_length_units_based_on_viewport)'s width and height, respectively.