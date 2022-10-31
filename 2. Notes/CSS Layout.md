[[CSS]]

# CSS Layout
Created:  [[2022-10-20]]

---
The page layout techniques we'll be covering in more detail in this module are:
-   Normal flow
-   The [`display`](https://developer.mozilla.org/en-US/docs/Web/CSS/display) property
-   Flexbox
-   Grid
-   Floats
-   Positioning
-   Table layout
-   Multiple-column layout


Each technique has its uses, advantages, and disadvantages.



Block Elements
    Elements that appear one below the other are described as **block** elements, 
**Inline** elements, 
    appear beside one another like the individual words in a paragraph.



---
Note:
The direction in which block element contents are laid out is described as the **Block Direction**. The 
**Block Direction** runs vertically in a language such as English, which has a horizontal writing mode. 
It would run horizontally in any language with a Vertical Writing Mode, such as Japanese. 

The corresponding **Inline Direction** is the direction in which inline contents (such as a sentence) would run.

----



The methods that can change how elements are laid out in CSS are:
-   **The [[Change display type of an HTML element - display property|display]] property** — 
    Following values changes how elements behave in normal flow 
    - `block`
    - `inline`
    - `inline-block`
    
    We also have entire layout methods that are enabled via specific `display` values, 
    Following alters how child elements are laid out inside their parents.
        - [[CSS Grid]]
        - [[Flexbox]]

-   **Floats** — Applying a [`float`](https://developer.mozilla.org/en-US/docs/Web/CSS/float) value such as `left` can cause block-level elements to wrap along one side of an element.

-   **The [`position`](https://developer.mozilla.org/en-US/docs/Web/CSS/position) property** — 
    Allows you to precisely control the placement of boxes inside other boxes.
    `static` positioning is the default in normal flow, 

-   **Table layout** — 
    Features designed for styling parts of an HTML table can be used on non-table elements using `display: table` and associated properties.

-   **Multi-column layout** — 
    The [Multi-column layout](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Columns) properties can 
    -> cause the content of a block to layout in columns, as you might see in a newspaper.



### Display Property
[[Change display type of an HTML element - display property]]

This property allows us to change the default way something displays. 
**Everything in normal flow has a default value for `display**`

For example, paragraphs in English display one below the other is because they are styled with `display: block`. 

The [`<a>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/a) element is `display: inline` by default.
Thus, creating a link inside of a paragraph doesn't create a new line


You can change this default display behavior. 
For example, the [`<li>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/li) element is `display: block` by default, meaning that list items display one below the other in our English document. 
If we were to change the display value to `inline` they would display next to each other, as words would do in a sentence. 
The fact that you can change the value of `display` for any element means that you can pick HTML elements for their semantic meaning without being concerned about how they will look. The way they look is something that you can change.

In addition to being able to change the default presentation by turning an item from `block` to `inline` and vice versa, there are some more involved layout methods that start out as a value of `display`. However, when using these you will generally need to invoke additional properties. The two values most important for our discussion of layout are `display: flex` and `display: grid`.


Continue Reading -> https://developer.mozilla.org/en-US/docs/Learn/CSS/CSS_layout/Introduction
