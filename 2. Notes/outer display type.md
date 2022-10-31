[[The CSS Box Model]]

# Outer display type
Created:  [[2022-10-06]]

---
### If a box has an OUTER display type of `block`, then:
-   The box will break onto a new line.
-   The [`width`](https://developer.mozilla.org/en-US/docs/Web/CSS/width) and [`height`](https://developer.mozilla.org/en-US/docs/Web/CSS/height) properties are respected.
-   Padding, margin and border will cause other elements to be pushed away from the box.
-   The box will extend in the inline direction to fill the space available in its container. 
     In most cases, the box will become as wide as its container, filling up 100% of the space available.

Following HTML elements uses **block** outer display type by default:
- `<a>`
- `<span>`
- `<em>`
- `<strong>`

### If a box has an OUTER display type of `inline`, then:
-   The box will not break onto a new line.
-   The [`width`](https://developer.mozilla.org/en-US/docs/Web/CSS/width) and [`height`](https://developer.mozilla.org/en-US/docs/Web/CSS/height) properties will not apply.
-   Vertical padding, margins, and borders will apply but will not cause other inline boxes to move away from the box.
-   Horizontal padding, margins, and borders will apply and will cause other inline boxes to move away from the box.
Following HTML elements uses **inline** as display type by default:
- `<h1>`
- `<p>`


