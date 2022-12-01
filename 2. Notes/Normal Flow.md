[[CSS Layout]]

# Normal Flow
Created:  [[2022-11-19]]

---
You can't set width or height on inline elements — 
they just sit inside the content of block level elements — 
except for `<img>`. 

If you want to control the size of an inline element 
You need to set it to behave like a block level element 
(e.g., with `display: block;` or `display: inline-block;` which mixes characteristics from both).


By default, 
Block-level elements are laid out in the block flow direction, 
    which is based on the parent's writing mode (initial: horizontal-tb). 
Each element will appear on a new line below the last one, 
    with each one separated by whatever margin that's been specified. 

Inline Elements
They don't appear on new lines
If there isn't space, then the overflowing content will move down to a new line.

If two vertically adjacent elements both have a margin set on them 
And their margins touch, the larger of the two margins remains and the smaller one disappears.
This is known as [[margin collapsing]].
Collapsing margins is only relevant in the vertical direction.














