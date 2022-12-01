[[CSS]]

# CSS Layout
Created:  [[2022-10-20]]

---
The page layout techniques we'll be covering in more detail in this module are:
Each technique has its uses, advantages, and disadvantages.
-   Normal flow
-   The [`display`](https://developer.mozilla.org/en-US/docs/Web/CSS/display) property
-   Flexbox
-   Grid
-   Floats
-   Positioning
-   Table layout
-   Multiple-column layout

## [[Normal Flow]]


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

-   **Table layout** — 
    Features designed for styling parts of an HTML table can be used on non-table elements using `display: table` and associated properties.



## Display Property
[[Change display type of an HTML element - display property]]
**Normal flow has a default value for `display`**


The `<a>` element is 
`display: inline` by default.


You can change this default display behavior. 
The `<li>` element is 
`display: block` by default


You can change the default value of `display` for any element 
## [[Flexbox]]
Designed for one dimension layout — either as a row or as a column. 

## [[Grid Layout]]
Designed for two dimensions — lining things up in rows and columns.

## [[Float]]
Floating an element changes the 
1. behavior of that element 
2. the block level elements that follow it in normal flow. 

## [[Positioning Techniques]]
Removes from normal flow
Put it whatever you want

## [[Multi-Column Layout]]
-> cause the content of a block to layout in columns, as you might see in a newspaper.



[[Responsive Design]]


[[Bootstrap]]