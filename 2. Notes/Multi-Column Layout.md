[[CSS Layout]]

# Multi-Column Layout
Created:  [[2022-11-28]]

---
```CSS
.container {
  column-width: 200px;
}
```
The browser creates as many 200 pixel columns as will fit. 
Whatever space is left between the columns will be shared.
![[Pasted image 20221119114528.png|300]]


Three Column Layout
```CSS
.container {
  column-count: 3;
  column-width: 200px;
}
```


## Styling Columns
The columns created by multicol cannot be styled individually. 
There's no way to make
- one column bigger than other columns 
- or to change the background 
- or text color of a single column.

Two opportunities to change the way that columns display:
-   Changing the size of the gap between columns using the [`column-gap`](https://developer.mozilla.org/en-US/docs/Web/CSS/column-gap).
-   Adding a rule between columns with [`column-rule`](https://developer.mozilla.org/en-US/docs/Web/CSS/column-rule).
```CSS
.container {
  column-count: 3;
  column-gap: 20px;
  column-rule: 4px dotted rgb(79, 185, 227);
}
```
column-rule is a shorthand for
[`column-rule-color`](https://developer.mozilla.org/en-US/docs/Web/CSS/column-rule-color), 
[`column-rule-style`](https://developer.mozilla.org/en-US/docs/Web/CSS/column-rule-style), 
[`column-rule-width`](https://developer.mozilla.org/en-US/docs/Web/CSS/column-rule-width), 
and accepts the same values as `border`.


## Spanning in between columns
![[Pasted image 20221128111817.png|400]]
To cause an element to span all the columns, 
specify the value of `all` for the [`column-span`](https://developer.mozilla.org/en-US/docs/Web/CSS/column-span) property.

**It isn't possible to cause an element to span just _some_ columns**. 
The property can only have the values of `none` (which is the default) or `all`.



## Columns are fragmented
![[Pasted image 20221128112513.png|300]]

To fix this
To control this behavior, we can use properties from the [CSS Fragmentation](https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Fragmentation) specification. 
This specification gives us properties to control the breaking of content in multicol and in paged media. 
For example, 
-> by adding the property [`break-inside`](https://developer.mozilla.org/en-US/docs/Web/CSS/break-inside) with a value of `avoid` to the rules for `.card`. 
```CSS
.card {
  break-inside: avoid;
  page-break-inside: avoid;
  background-color: rgb(207, 232, 220);
  border: 2px solid rgb(79, 185, 227);
  padding: 10px;
  margin: 0 0 1em 0;
}
```

![[Pasted image 20221128112715.png|300]]
