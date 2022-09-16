[[Head in HTML]]

# Linking CSS and Javascript in HTML
Created:  [[2022-09-15]]

---
To link CSS in `<head>` 
`<link rel="stylesheet" href="filename.css">`


To link JS in `<head>`
`<script src="filename.js" defer></script>`
defer instructs browser to load javascript after html is loaded
How is it useful?
- It makes sure that you don't get errors resulting from JS trying to access an HTML element that doesn't exist on the page yet.













