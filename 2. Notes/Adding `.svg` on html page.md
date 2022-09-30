[[Vector Graphics - svg files]]

# Adding `.svg` on html page
Created:  [[2022-09-20]]
Tags: #fleeting 

---
1. Using `<img>` element

#### Pros
-   Quick, familiar image syntax with built-in text equivalent available in the `alt` attribute.
-   You can make the image into a hyperlink easily by nesting the `<img>` inside an [`<a>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/a) element.
-   The SVG file can be cached by the browser, resulting in faster loading times for any page that uses the image loaded in the future.

#### Cons
-   You cannot manipulate the image with JavaScript.
-   If you want to control the SVG content with CSS, you must include inline CSS styles in your SVG code. (External stylesheets invoked from the SVG file take no effect.)
-   You cannot restyle the image with CSS pseudoclasses (like `:focus`).


Older browsers doesn't support svg
If you want to support older browsers
Read this link
https://developer.mozilla.org/en-US/docs/Learn/HTML/Multimedia_and_embedding/Adding_vector_graphics_to_the_Web#troubleshooting_and_cross-browser_support


2. Paste SVG code inside in HTML
Copy the `.svg` file using text editor
```HTML
<svg width="300" height="200">
  <rect width="100%" height="100%" fill="green" />
</svg>
```


Pros
-   You can assign `class`es and `id`s to SVG elements and style them with CSS, either within the SVG or wherever you put the CSS style rules for your HTML document. In fact, you can use any [SVG presentation attribute](https://developer.mozilla.org/en-US/docs/Web/SVG/Attribute#presentation_attributes) as a CSS property.

3. Using iframe 
```HTML
<iframe src="triangle.svg" width="500" height="500" sandbox>
  <img src="triangle.png" alt="Triangle with three unequal sides" />
</iframe>
```

This is definitely not the best method to choose:

#### Cons
-   `iframe`s do have a fallback mechanism, as you can see, but browsers only display the fallback if they lack support for `iframe`s altogether.
-   Moreover, unless the SVG and your current webpage have the same [origin](https://developer.mozilla.org/en-US/docs/Glossary/Origin), you cannot use JavaScript on your main webpage to manipulate the SVG.














