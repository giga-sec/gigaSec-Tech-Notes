[[CSS]]

# Understanding the DOM helps you design, debug and maintain your CSS
Created:  [[2022-10-03]]

---
Because the DOM is where your CSS and the document's content meet up. 

When you start working with browser DevTools 
you will be navigating the DOM as you select items in order to see which rules apply.

### How HTML is parsed in DOM Tree
Original HTML
```HTML
<p>
  Let's use:
  <span>Cascading</span>
  <span>Style</span>
  <span>Sheets</span>
</p>
```

This below is the DOM Tree
```CSS
P
├─ "Let's use:"
├─ SPAN
|  └─ "Cascading"
├─ SPAN
|  └─ "Style"
└─ SPAN
    └─ "Sheets"
```

If we apply a css to that HTML
```CSS
span {
  border: 1px solid black;
  background-color: lime;
}
```
This is how it applies HTML and CSS to the DOM
1. The browser parses the HTML and creates a DOM from it. 
2. Next, it parses the CSS. The CSS here has a `span` selector, It applies that to each one of the three `<span>`s, 
3. Then paints the final visual representation to the screen.














