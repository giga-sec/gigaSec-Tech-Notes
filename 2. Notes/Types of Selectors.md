    [[CSS Selectors]]

# Types of Selectors
Created:  [[2022-10-06]]

---
### Element Selector
```CSS
h1 {
}
```

### Class Selector 
```CSS
.box{
}
```

### ID Selector
```CSS
#unique {
}
```


### Attribute Selectors
This group of selectors gives you different ways to select elements based on the presence of a certain attribute on an element:

```CSS
a[attribute="value"] {
}
```

Or even make a selection based on the presence of an attribute with a particular value:
```CSS
a[href="https://example.com"] {
}
```


### Pseudo-classes
Selects only when to apply the css rules base on the condition it is in
Below will only take effect when link is in hover
```CSS
a:hover {
}
```



### Pseudo-elements
Selects a certain part of an element to be modified
This only takes effect on the first line of a `<p>` element
```CSS
p::first-line {
}
```



### Combinator
The following, selects `<p>` that are direct children of `<article>` elements using the child combinator (`>`):
```CSS
article > p {
}
```


#myquestion I think the following below are combinators???
#### **Descendant Combinator**
To select only an `<em>` that is nested inside an `<li>` element, 
You can use a selector called the 
```CSS
li em {
  color: rebeccapurple;
}
```


#### **Adjacent Sibling Combinator**
Something else you might like to try is styling a paragraph when it comes directly after a heading at the same hierarchy level in the HTML. 
To do so, place a `+` the selectors.
```CSS
h1 + p {
  font-size: 200%;
}
```











