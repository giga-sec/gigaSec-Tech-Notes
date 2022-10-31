[[CSS]]

# Handling Text Different Directions
Created:  [[2022-10-08]]

---
[[Make text show either horizontally or vertically with writing-mode CSS Property]]

[[Replace physical properties with MAPPED properties]]
### Mapped Properties
It replaces physical properties (e.g width, height) with either:
- **logical**
- **flow relative** 

Mapped Property for:
- `width` in a horizontal writing mode is called [`inline-size`](https://developer.mozilla.org/en-US/docs/Web/CSS/inline-size) —
    it refers to the size in the **inline dimension**. 

- `height` is named [`block-size`](https://developer.mozilla.org/en-US/docs/Web/CSS/block-size) 
    refers to the **block dimension**.


**Block dimension** is always the direction blocks are displayed on the page in the writing mode in use. 
**Inline dimension** is always the direction a sentence flows.
![[Pasted image 20221008111718.png|300]]
![[Pasted image 20221008111727.png|200]]



CSS guys don't talk about left and right
They talk about *start* and *end*
Don't worry too much about that right now, but keep these ideas in mind as you start to look at layout; you will find it really helpful in your understanding of CSS.

### Physical to Logical Properties
```CSS
top     ->   block-start
bottom  ->   block-end
left    ->   inline-start
right   ->   inline-end
```


The `margin-top` property is mapped to [`margin-block-start`](https://developer.mozilla.org/en-US/docs/Web/CSS/margin-block-start) — 
this will always refer to the margin at the start of the block dimension.
    
The [`padding-left`](https://developer.mozilla.org/en-US/docs/Web/CSS/padding-left) property maps to [`padding-inline-start`](https://developer.mozilla.org/en-US/docs/Web/CSS/padding-inline-start),
The padding that is applied to the start of the inline direction. 
This will be where sentences start in that writing mode. 

The [`border-bottom`](https://developer.mozilla.org/en-US/docs/Web/CSS/border-bottom) property maps to [`border-block-end`](https://developer.mozilla.org/en-US/docs/Web/CSS/border-block-end), 
which is the border at the end of the block dimension.


https://developer.mozilla.org/en-US/docs/Web/CSS/CSS_Logical_Properties


### [Should you use physical or logical properties?](https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Handling_different_text_directions#should_you_use_physical_or_logical_properties "Permalink to Should you use physical or logical properties?")
The logical properties and values are newer than their physical equivalents, 
    therefore have only recently been implemented in browsers. 
**If you are not using multiple writing modes** 
**then** for now you might prefer to use the physical versions. 
However, 
    ultimately we expect that people will transition to the logical versions for most things, 
    as they make a lot of sense once you start also dealing with layout methods such as flexbox and grid.

I think he's saying that logical properties is much better intuitively than the physical properties
