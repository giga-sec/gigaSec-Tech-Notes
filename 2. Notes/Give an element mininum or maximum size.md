[[Sizing Items in CSS]]

# Give an element mininum or maximum size
Created:  [[2022-10-10]]

---
Following uses `<length>` data type
`min-height: ` 
`min-width:`

`max-height:`
`max-width:`

Tips:
**useful for dealing with variable amounts of content while avoiding overflow**

**Useful for making [[Responsive Images]]**:
if you were to set `width: 100%` on [[Replaced elements behave differently than other elements|replaced elements]], 
    and its intrinsic width was smaller than its container, 
the image would be forced to stretch and become larger, causing it to look pixelated.

If you instead use `max-width: 100%`, 
    and its intrinsic width is smaller than its container, 
the image will not be forced to stretch and become larger, thus preventing pixelation.


This technique is used to make images responsive, 
so that when viewed on a smaller device they scale down appropriately. 















