[[Responsive Images]]

# Resolution Switching
Created:  [[2022-09-26]]

---
The problem whereby you want to serve 
- use **smaller image files to narrow-screen devices**, as they don't need huge images like desktop displays do
- use **different resolution images to high density/low density screens**. 
You can solve this problem using either:
- [vector graphics](https://developer.mozilla.org/en-US/docs/Learn/HTML/Multimedia_and_embedding/Adding_vector_graphics_to_the_Web) (SVG images)
- or the following `<img>` attributes:
    - `srcset=""`
    - `sizes=""`
    - `src=""`


### Attributes Explained:
`srcset=""`
Defines the set of images the browser will choose and what size each image is
So, with these attributes in place, the browser will:
1.  An **image filename** (`elva-fairy-480w.jpg`)
2.  A space
3.  The image's **intrinsic width in pixels** (`480w`) — note that this uses the `w` unit, not `px` as you might expect. An image's [intrinsic size](https://developer.mozilla.org/en-US/docs/Glossary/Intrinsic_Size) is its real size, which can be found by inspecting the image file on your computer (for example, on a Mac you can select the image in Finder and press Cmd + I to bring up the info screen).


`sizes=""`
Defines a set of media conditions (e.g. screen widths) 
and Indicates what image size would be best to choose
1.  A **media condition** (`(max-width:600px)`) — you'll learn more about these in the [CSS topic](https://developer.mozilla.org/en-US/docs/Learn/CSS), but for now let's just say that a media condition describes a possible state that the screen can be in. In this case, we are saying "when the viewport width is 600 pixels or less".
2.  A space
3.  The **width of the slot** the image will fill when the media condition is true (`480px`)


Example:
```HTML
<img
  srcset="elva-fairy-480w.jpg 480w, elva-fairy-800w.jpg 800w"
  sizes="(max-width: 600px) 480px,
         800px"
  src="elva-fairy-800w.jpg"
  alt="Elva dressed as a fairy" />
```


Responsive Images Tutorial
https://cloudfour.com/thinks/responsive-images-101-definitions/












