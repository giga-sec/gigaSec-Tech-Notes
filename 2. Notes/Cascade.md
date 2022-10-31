[[This controls which css rule applies to what element - Cascade - Specificity - Inheritance]]

# Cascade
Created:  [[2022-10-05]]

---
This is basically the order of the CSS declaration style
An algorithm that the browser uses to decide which property value is applied to an element. 

Same style block,same property but different values
There are three factors to consider, (Earlier number overrides later numbers)
1. [[Important flag overrides all specificity|Importance]]
2. [[Specificity]]
3. [[Source order]]


### [Order of overriding declarations](https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Cascade_and_inheritance#order_of_overriding_declarations "Permalink to Order of overriding declarations")

Conflicting declarations will be applied in the following order, with later ones overriding earlier ones:

1.  Declarations in user agent style sheets (e.g., the browser's default styles, used when no other styling is set).
2.  Normal declarations in user style sheets (custom styles set by a user).
3.  Normal declarations in author style sheets (these are the styles set by us, the web developers).
4.  Important declarations in author style sheets.
5.  Important declarations in user style sheets.
6.  Important declarations in user agent style sheets.

**Note:** The order of precedence is inverted for styles flagged with `!important`. It makes sense for web developers' stylesheets to override user stylesheets, so the design can be kept as intended; however, sometimes users have good reasons to override web developer styles, as mentioned above, and this can be achieved by using `!important` in their rules.


### [Order of cascade layers](https://developer.mozilla.org/en-US/docs/Learn/CSS/Building_blocks/Cascade_and_inheritance#order_of_cascade_layers "Permalink to Order of cascade layers")
Even though [cascade layers](https://developer.mozilla.org/en-US/docs/Web/CSS/@layer) is an advanced topic and you may not use this feature right away, it's important to understand how layers cascade.

When you declare CSS in cascade layers, the order of precedence is determined by the order in which the layers are declared. CSS styles declared outside of any layer are combined together, in the order in which those styles are declared, into an unnamed layer, as if it were the last declared layer. With competing normal (not important) styles, later layers take precedence over earlier defined layers. For styles flagged with `!important`, however, the order is reversed, with important styles in earlier layers taking precedence over important styles declared in subsequent layers or outside of any layer. Inline styles take precedence over all author styles, no matter the layer.

When you have multiple style blocks in different layers providing competing values for a property on a single element, the layer in which the styles are declared determine the precedence. Specificity between layers doesn't matter, but specificity within a single layer still does.


The **`@layer`** [CSS](https://developer.mozilla.org/en-US/docs/Web/CSS) [at-rule](https://developer.mozilla.org/en-US/docs/Web/CSS/At-rule) is used to declare a cascade layer and can also be used to define the order of precedence in case of multiple cascade layers.


```CSS
@layer , green, purple; /**Order here matters **/
  @layer green {
    a {
      color: lightgreen;
    }
  }        
       
  @layer purple {
    a {
      color: rebeccapurple;
    }
  }
```