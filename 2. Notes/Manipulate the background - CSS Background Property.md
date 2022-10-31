[[CSS]]

# Manipulate the background - CSS Background Property
Created:  [[2022-10-07]]

---

The CSS [`background`](https://developer.mozilla.org/en-US/docs/Web/CSS/background) property is a shorthand for a number of background longhand properties  
```CSS
.box {
  background: linear-gradient(
        105deg,
        rgba(255, 255, 255, 0.2) 39%,
        rgba(51, 56, 57, 1) 96%
      ) center center / 400px 200px no-repeat, url(big-star.png) center
      no-repeat, rebeccapurple;
}
```
https://developer.mozilla.org/en-US/docs/Web/CSS/background
**Screen readers cannot parse background images**; therefore, they should be purely decoration.

## [[Longhand properties of CSS background]]
