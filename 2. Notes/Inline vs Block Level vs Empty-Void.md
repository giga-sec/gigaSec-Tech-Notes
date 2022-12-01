[[Types of Elements in HTML - Inline vs Block Level vs Empty-Void]]

1. Block Elements
    elements that appear one below the other are described as **block** elements, 
2. **Inline** elements, 
    appear beside one another like the individual words in a paragraph.
3. Empty or Void Element
    doesn't need a closing tag


Note:
The direction in which block element contents are laid out is described as the **Block Direction**. 
The **Block Direction** runs vertically in a language such as English, which has a horizontal writing mode. 
It would run horizontally in any language with a Vertical Writing Mode, such as Japanese. 

The corresponding **Inline Direction** is the direction in which inline contents (such as a sentence) would run.


### Inline Element
```HTML
<em>first</em> <em>second</em> <em>third</em>
```
`<em>` is an inline element
Creates an italic -> *first second third*
Each element provided no newline when used 

In Conclusion, both Inline Element and Block-Level Element are terms dropped in HTML5 because it creates a confusion with the CSS tings

### Block-Level Element
```HTML
<p>fourth</p> <p>fifth</p> <p>sixth</p>
```
`<p>` is a block-level Element
**It creates newline at each element**
```
fourth
fifth
sixth
```

In Conclusion, both Inline Element and Block-Level Element are terms dropped in HTML5 because it creates a confusion with the CSS tings. The terms _block_ and _inline_, as used in this article, should not be confused with [the types of CSS boxes](https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/The_box_model#types_of_css_boxes) that have the same names.



### Empty or Void Element
`<img>` element doesn't need a closing tag. 
```HTML
<img src="https://raw.githubusercontent.com/mdn/beginner-html-site/gh-pages/images/firefox-icon.png">
```
