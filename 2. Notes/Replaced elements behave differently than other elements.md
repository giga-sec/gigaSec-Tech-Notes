

# replaced elements
Created:  [[2022-10-10]]

---
Such as:
- `<video>` HTML element
- `<img>` HTML element
- `<iframe>` HTML element




Replaced Elements means 
- CSS cannot affect the internal layout of these elements.
- CSS only affects their position on the page amongst other elements.


**Replaced Elements** behave differently from other elements
Example:
- in a flex or grid layout, 
    elements are stretched by default to fill the entire area. However, Images doesn't stretch, and instead will be aligned to the start of the grid area or flex container.

Forcing an image to fill the grid cell
This, stretches the image btw
```CSS
img {
  width: 100%;
  height: 100%;
}
```







