[[This controls which css rule applies to what element - Cascade - Specificity - Inheritance]]

# Specificity
Created:  [[2022-10-05]]

---
An algorithm that the browser uses to decide which property value is applied to an element. 


**Class selector** has more weight than **Element selector**
1 Class selector will always beat a 9999999 Element Selector


Following have no effect on specificity BUT THEIR PAREMETERS DO:
- negation ([`:not()`](https://developer.mozilla.org/en-US/docs/Web/CSS/:not))
- matches-any ([`:is()`](https://developer.mozilla.org/en-US/docs/Web/CSS/:is)) pseudo-classes
The specificity that each contributes to the specificity algorithm 
    is the specificity of the selector in the parameter that has the greatest weight.


The amount of specificity a selector has is measured using three different values (or components), 
1. Identifiers: Score one in this column for each 
                    - ID selector contained inside the overall selector.
2. Classes: Score one in this column for each 
                    - class selector, attribute selector, or pseudo-class contained inside the overall selector.
3. Elements: Score one in this column for each 
                    - element selector or pseudo-element contained inside the overall selector.
#myquestion Wtf is an overall selector


The following have no effect on specificity:
- universal selector ([`*`](https://developer.mozilla.org/en-US/docs/Web/CSS/Universal_selectors)),
- combinators (`+`, `>`, `~`, ' ')
- specificity adjustment selector  ([`:where()`](https://developer.mozilla.org/en-US/docs/Web/CSS/:where)) 


Note: 
Although we are thinking about selectors and the rules that are applied to the text or component they select, **it isn't the entire rule that is overwritten**, only the properties that are declared in multiple places.
This behavior helps avoid repetition in your CSS. 
A common practice is to define generic styles for the basic elements, and then create classes for those that are different. 




Note:
Each selector type has its own level of specificity that cannot be overwritten by selectors with a lower specificity level. 
For example, 
    a _million_ **class** selectors combined would not be able to overwrite the specificity of _one_ **id** selector.

The best way to evaluate specificity is to score the specificity levels individually starting from the highest and moving on to the lowest when necessary. 
Only when there is a tie between selector scores within a specificity column do you need to evaluate the next column down; 
otherwise, 
you can disregard the lower specificity selectors since they can never overwrite the higher specificity selectors.