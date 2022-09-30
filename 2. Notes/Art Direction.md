[[Responsive Images]]

# Art Direction
Created:  [[2022-09-26]]

---
This the solution for problem whereby you want to serve **cropped images for different layouts** — 
For example:
- A landscape image showing a full scene for a desktop layout, 
- A portrait image showing the main subject zoomed in for a mobile layout. 
You can solve this problem using the [`<picture>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/picture) element.
```HTML
<picture>
    <source media="(max-width:600px)"
        srcset="green_crop.webp">
    <source media="(min-width:800px)"
        srcset="green.webp">
    <img src="green.webp"
        alt="A picture of grass in landscape">
</picture>
```












