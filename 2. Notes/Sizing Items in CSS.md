[[CSS]]

# Sizing Items in CSS
Created:  [[2022-10-10]]

---
It is worth understanding the concepts here before moving on.
Why: 
When you move onto CSS Layout, sizing will become very important in mastering the different layout methods, 


### The Intrinsic / Natural Size of Things
HTML Elements have a intrinsic size, set before they are affected by any CSS. 
Example: 
    An **image** file contains sizing information, described as its intrinsic size. 
    This size is determined by the image itself, not by any formatting we happen to apply.


IF -> you place an image on a page either by using attributes or by CSS
Result -> and do not change its height or width, 
THEN -> it will be displayed using that intrinsic size. 



An empty [`<div>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/div), on the other hand, has no size of its own. 
If you add a [`<div>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/div) to your HTML with no content, 
Then give it a border as we did with the image, you will see a line on the page. 
This is the `collapsed border` on the element — there is no content to hold it open.
It has no height (or size in the block dimension) because there is no content.


### Give elements a specific size.
When a size is given to an element 
    (the content of which then needs to fit into that size) 
    We refer to it as an **extrinsic size**.
Take `<div>` as an example — we can give it specific [`width`](https://developer.mozilla.org/en-US/docs/Web/CSS/width) and [`height`](https://developer.mozilla.org/en-US/docs/Web/CSS/height) values,
Then it will now have that size no matter what content is placed into it. 


Percentages act like [[Two types of length data type units used in CSS|length units]]



### [[Percentages in margins and padding]]


### [[Give an element mininum or maximum size]]


[[object-fit CSS property to really fit an image to a BOX]]