[[Sizing Items in CSS]]

# Percentages in margins and padding
Created:  [[2022-10-10]]

---
TBH, I don't understand this yet but this seems really useful
### [Percentage margins and padding](https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Sizing_items_in_CSS#percentage_margins_and_padding "Permalink to Percentage margins and padding")

If you set `margins` and `padding` as a percentage, you may notice some strange behavior. In the below example we have a box. We have given the inner box a [`margin`](https://developer.mozilla.org/en-US/docs/Web/CSS/margin) of 10% and a [`padding`](https://developer.mozilla.org/en-US/docs/Web/CSS/padding) of 10%. The padding and margin on the top and bottom of the box are the same size as the margin on the left and right.

You might expect for example the percentage top and bottom margins to be a percentage of the element's height, and the percentage left and right margins to be a percentage of the element's width. However, this is not the case!

When you use margin and padding set in percentages, the value is calculated from the **inline size** of the containing block — therefore the width when working in a horizontal language. In our example, all of the margins and padding are 10% of the width. This means you can have equal-sized margins and padding all around the box. This is a fact worth remembering if you do use percentages in this way.












