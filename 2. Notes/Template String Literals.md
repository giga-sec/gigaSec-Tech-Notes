[[Javascript]]

# Template String Literals
Created:  [[2022-10-20]]

---
Template literals are literals delimited with backtick (`` ` ``) characters, 
allowing for 
- [multi-line strings](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Template_literals#multi-line_strings), 
- [string interpolation](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Template_literals#string_interpolation) with embedded expressions, 
- special constructs called [tagged templates](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Template_literals#tagged_templates).

Template literals are sometimes informally called _template strings_, 
because they are used most commonly for [string interpolation](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Template_literals#string_interpolation) 
(to create strings by doing substitution of placeholders). 
However, a tagged template literal may not result in a string; 
it can be used with a custom [tag function](https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Template_literals#tagged_templates) to perform whatever operations you want on the different parts of the template literal.


Syntax:
```JS
`string text ${expression} string text`
```



