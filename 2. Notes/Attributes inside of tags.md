[[HTML]]

# Attributes inside of tags
Created:  [[2022-09-10]]
Tags: #fleeting 

---
Attributes are optionally added in the opening tag, [[Tags in HTML]]
Wrap values of attribute with  `""` for readability and normalization
```HTML
<tag attribute="value">
<html lang="en">
``` 



If attribute's value doesn't have spaces, the `""` can be omitted 
But **==for readability and normalization==, better to enclose values with `""`**
```HTML
<a href=https://www.mozilla.org/> favorite website </a>
```



### Boolen Attributes only gets 1 value 
The only value of boolean attributes are their name itself
```HTML
<input type="text" disabled="disabled">
```

We can omit the values of boolean attributes for simplicity
```HTML
<input type="text" disabled>
```













### References
1. 