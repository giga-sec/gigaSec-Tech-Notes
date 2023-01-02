[[The CSS Box Model]]

# Alternative CSS Box Model
Created:  [[2022-10-07]]

---
### How to enable Alternative CSS Box Model
To turn on the alternative model for an element, 
set `box-sizing: border-box` on it:
```CSS
.box {
  box-sizing: border-box;
}
```

To use the alternative box model for all of your elements (which is a common choice among developers)
```CSS
html {
  box-sizing: border-box;
}
*,
*::before,
*::after {
  box-sizing: inherit;
}
```


[[Border box]]
Using the alternative box model  
    the size of the border makes the content box smaller as it takes up some of that available `width` and `height`.










