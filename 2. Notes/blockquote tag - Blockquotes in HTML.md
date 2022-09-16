[[Two types of Quotations tag in HTML]]

# Blockquotes in HTML
Created:  [[2022-09-13]]
Tags: #fleeting 

---
[[Block Level Statement]]
`<blockquote>` `</blockquote>`
`cite` attribute


### When to use blockquotes?
IF -> a **block level content** is **quoted from somewhere else**,(be it a paragraph, multiple paragraphs, a list, etc.) 
THEN -> the text should wrap it inside a [`<blockquote>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/blockquote) element to signify this, and include a URL pointing to the source of the quote inside a [`cite`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/blockquote#attr-cite) attribute. 

---
Example
The following markup is taken from the MDN `<blockquote>` element page:
```HTMl
<p>The HTML blockquote Element indicates that the enclosed text is an extended quotation.</p>
```

To turn this into a block quote, we would just do this below:
```html
<p>Here is a blockquote:</p>
<blockquote cite="https://developer.mozilla.org/en-US/docs/Web/HTML/Element/blockquote">
  <p>The HTML blockquote Element indicates that the enclosed text is an extended quotation.</p>
</blockquote>
```


Rendered Result of code above: 
![[Pasted image 20220913161339.png]]
Note: Browser styling renders blockquote as indented paragraph by default













### References
1.(https://developer.mozilla.org/en-US/docs/Learn/HTML/Introduction_to_HTML/Advanced_text_formatting#blockquotes "Permalink to Blockquotes")