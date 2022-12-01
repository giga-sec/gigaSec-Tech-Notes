[[CSS Layout]]

# Grid Layout
Created:  [[2022-11-19]]

---
Designed for two dimensions — lining things up in rows and columns.
It lets you lay content out in rows and columns. 
```CSS
.wrapper {
  display: grid;
  grid-template-columns: 1fr 1fr 1fr;
  grid-template-rows: 100px 100px;
  gap: 10px;
}
```

```HTML
<div class="wrapper">
  <div class="box1">One</div>
  <div class="box2">Two</div>
  <div class="box3">Three</div>
  <div class="box4">Four</div>
  <div class="box5">Five</div>
  <div class="box6">Six</div>
</div>
```
![[Pasted image 20221119111024.png|300]]


---
- A grid is a collection of horizontal / vertical lines 
- Help us create layouts in which our elements won't jump around
- Won't change width as we move from page to page, 


A grid will typically have 
- **columns**, 
- **rows**, 
- **gutters** (gaps between each row and column)


![[Pasted image 20221119180734.png|500]]


```CSS
.container {
  display: grid;
}
```
Unlike Flexbox, the items will not immediately look any different. 
By default, gives you a one column grid, 
    so your items will continue to display one below the other as they do in normal flow.


```CSS
.container {
  display: grid;
  grid-template-columns: 200px 200px 200px;
}
```
![[Pasted image 20221119181452.png|300]]


Flexible grids with `fr` unit
```CSS
.container {
  display: grid;
  grid-template-columns: 2fr 1fr 1fr;
}
```
![[Pasted image 20221119181640.png|300]]


To create gaps between tracks we use the properties 
- `column-gap: ;`  
- `row-gap: ;`  
- `gap: 20px;` as a shorthand for both.


## `repeat()` function
```CSS
grid-template-columns: repeat(3, 1fr);
```
Three `1fr` 

## Explicit Grid
**Explicit grid**, you create using:
1. `grid-template-columns: ` 
2. `grid-template-rows: `

## Implicit Grid
**Implicit grid** EXTENDS the defined EXPLICIT GRID when content is placed outside of that grid, 
such as into our rows by drawing additional grid lines.

By default, 
Tracks created in the implicit grid are `auto` sized, 
If you wish to give implicit grid tracks a size, you can use the properties:
- `grid-auto-rows: 200px`
- `grid-auto-columns: 200px` 
- `grid-auto-rows: 200px`


---
```CSS
.container {
  display: grid;
  grid-template-columns: repeat(3, 1fr);
  grid-auto-rows: 100px;
  gap: 20px;
}
```
![[Pasted image 20221119184108.png|300]]


## minmax() function
- Prevent overflow of content inside of the grid
- Make the grid expandable when overflow happens

`minmax(100px, auto)` 
Minimum size is `100` pixels, 
Maximum is `auto`, which will expand to accommodate more content. 

Expandable grid 
```CSS
.container {
  display: grid;
  grid-template-columns: repeat(3, 1fr);
  grid-auto-rows: minmax(100px, auto);
  gap: 20px;
}
```


Create a useful pattern. 
- `track listing`
- `repeat()`
- `minmax()` 
```CSS
.container {
  display: grid;
  grid-template-columns: repeat(auto-fill, minmax(200px, 1fr));
  grid-auto-rows: minmax(100px, auto);
  gap: 20px;
}
```


## Line-based placement - Where we place things on the grid
We now move on from creating a grid to **==placing things on the grid.==** 
Our grid always has lines — 
    counts begin with 1 and relate to the writing mode of the document. 


`z-index: 1;` Controls whether an item is in foreground or background

We do this using the following properties:
Value: line number 
- `grid-column`
    - `grid-column-start`
    - `grid-column-end`
- grid-row
    - `grid-row-start`
    - `grid-row-end`
```CSS
header {
  shorthand: grid-column-start / grid-column-end;
  grid-column: 1 / 3;
  grid-row: 1;
}

article {
  grid-column: 2;
  grid-row: 2;
}

aside {
  grid-column: 1;
  grid-row: 2;
}

footer {
  grid-column: 1 / 3;
  grid-row: 3;
}
```

### Alternative Way of arranging items in grid
Use the `grid-template-areas` property to arrange items on grid.
The rules for `grid-template-areas` are as follows:
-   You need to have every cell of the grid filled.
-   To span across two cells, repeat the name.
-   To leave a cell empty, use a `.` (period).
-   Areas must be rectangular — for example, you can't have an L-shaped area.
-   Areas can't be repeated in different locations.
```CSS
.container {
  display: grid;
  grid-template-areas:
    "header header"
    "sidebar content"
    "footer footer";
  grid-template-columns: 1fr 3fr;
  gap: 20px;
}

header {
  grid-area: header;
}

article {
  grid-area: content;
}

aside {
  grid-area: sidebar;
}

footer {
  grid-area: footer;
}
```

