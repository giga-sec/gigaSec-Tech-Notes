[[This controls which css rule applies to what element - Cascade - Specificity - Inheritance]]

# Situations in which you may use !important flag value
Created:  [[2022-10-04]]

---
One situation in which you may have to use the `!important` flag is when you are working on a CMS where you can't edit the core CSS modules, and you really want to override an inline style or an important declaration that can't be overridden in any other way. But really, don't use it if you can avoid it.

```CSS
p {
  background-color: red !important;
}
```












