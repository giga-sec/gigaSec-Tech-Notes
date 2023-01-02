[[MOC Web Development]]

# CSS
Created:  [[2022-08-09]]
Tags: #fleeting 

---
Where do default style of browsers come from?
https://youtu.be/spK_S0HfzFw


CSS is a rule-based language, you define the rules by
    specifying groups of styles that should be applied to particular elements 
    or groups of elements on your web page.

CSS must use US spelling, so `colour` must be only use as `color`


Everything in CSS generates a box

### [[Syntax and Lingo of CSS]]

**CSS specs are intended for engineers to use 
    to implement support for the features in user agents, 
NOT for web developers to read to understand CSS.** 
Many experienced developers would much rather refer to MDN documentation or other tutorials. Nevertheless, it is worth knowing that these specs exist and understanding the relationship between the CSS you are using, the browser support (see below), and the specs.


### Find the "browser compatability" of a css property
Browsers usually doesn't integrate a feature at the same time
You can use some CSS in some browsers and not in others.


### [[Use `Class` to target specific elements]]


### [[CSS Selectors]]


### **==Lastly, you can combine multiple types together==**
```CSS
body h1 + p .special {
  color: yellow;
  background-color: black;
  padding: 5px;
}
```
This will style any element with a class of `special`, 
    which is inside a `<p>`, 
    which comes just after an `<h1>`, 
    which is inside a `<body>`. Phew!



CSS Data Types
https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Types




## [[CSS Website Tools]]




----
`calc()` function
Which can do simple math


Transform functions like `rotate()`

`@rules` like 
There kind of give logic to CSS that triggers something when a condition is true
Or just importing stuff `@import "styles2.css";


[[One liner css declarations - Shorthand Properties]]



[[How a browser takes CSS and HTML and turns that into a webpage]].



[[Understanding the DOM helps you design, debug and maintain your CSS]] 



[[CSS Padding pushes content away from borders]]


----
[[This controls which css rule applies to what element - Cascade - Specificity - Inheritance]]



## [[The CSS Box Model]]

### [[Parts of a CSS Box Model]]

### [[Alternative CSS Box Model]]


### [[Manipulate the background - CSS Background Property]]


----
### [[Handling Text Different Directions]]


### [[Always remember overflow when developing sites - Overflowing Content in CSS]]


### [[CSS Values and Units]]


[[Sizing Items in CSS]]


[[How CSS differently treats images and video elements]]
[[How CSS differently treats form elements]]


[[Styling tables using CSS]]


[[Debugging CSS]]


[[Styling Texts in CSS]]


[[CSS Layout]]

[[Bootstrap]]