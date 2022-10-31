[[Tables in HTML]]
[[CSS]]

# Styling tables using CSS
Created:  [[2022-10-10]]

---
[[Quick CSS table format]]


```CSS
table {
    table-layout: fixed;
    width: 100%;
    border-collapse: collapse;
    border: 3px solid purple;
}
```


A [`table-layout`](https://developer.mozilla.org/en-US/docs/Web/CSS/table-layout) value of `fixed` is generally a good idea to set on your table, 
Normally, table columns tend to be sized according to how much content they contain, 
which produces some strange results. 
With `table-layout: fixed`, 
    you can size your columns according to the width of their headings, 


A [`border-collapse`](https://developer.mozilla.org/en-US/docs/Web/CSS/border-collapse) value of `collapse` is **standard best practice** for any table styling effort. 
By default, when you set borders on table elements, they will all have spacing between them:
![a 2 by 2 table with default spacing between the borders showing no border collapse](https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Styling_tables/no-border-collapse.png).

With `border-collapse: collapse;` set, 
the borders collapse down into one:
![a 2 by 2 table with border-collapse property set to collapse showing borders collapse into one](https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Styling_tables/border-collapse.png).


:nth-child() selector





----
Table Stylings Quick Tips
-   Make your table markup as simple as possible, and **keep things flexible, e.g. by using percentages**, so the design is more responsive.
-   Use [`table-layout`](https://developer.mozilla.org/en-US/docs/Web/CSS/table-layout)`: fixed` to create a more predictable table layout that allows you to easily set column widths by setting [`width`](https://developer.mozilla.org/en-US/docs/Web/CSS/width) on their headings ([`<th>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/th)).
-   Use [`border-collapse`](https://developer.mozilla.org/en-US/docs/Web/CSS/border-collapse)`: collapse` to make table elements borders collapse into each other, producing a neater and easier to control look.
-   Use [`<thead>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/thead), [`<tbody>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/tbody), and [`<tfoot>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/tfoot) to break up your table into logical chunks and provide extra places to apply CSS to, so it is easier to layer styles on top of one another if required.
-   Use zebra striping to make alternative rows easier to read.
-   Use [`text-align`](https://developer.mozilla.org/en-US/docs/Web/CSS/text-align) to line up your [`<th>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/th) and [`<td>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/td) text, to make things neater and easier to follow.



----
https://alistapart.com/article/web-typography-tables/