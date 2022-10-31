[[CSS]]

# How CSS differently treats form elements
Created:  [[2022-10-10]]

---
## Form Elements
Form elements can be a tricky issue when it comes to styling with CSS. 
The [Web Forms module](https://developer.mozilla.org/en-US/docs/Learn/Forms) contains detailed guides to the trickier aspects of styling these, hich I will not fully reproduce here. 

Different browsers vary with one another in how much styling and customization they allow for such items.


### Styling Text Input Elements
Text input element tend to behave just like other CSS boxes
The following are form elements that allow for text input:
- `<input type="text">`, 
- `<input type="email">`, 
- `<textarea>` 

The default styling of these elements will differ, however, based on the 
- operating system 
- browser that your user visits the site with.
Therefore,  **==always assume that forms are going to look quite different for different visitors and then you should test complex forms in a number of browsers.==**



###  Form Reset
As a final step, we can wrap up the various properties discussed above into the following "form reset" to provide a consistent base to work from. This includes all the items mentioned in the last three sections:
```CSS
button,
input,
select,
textarea {
  font-family: inherit;
  font-size: 100%;
  box-sizing: border-box;
  padding: 0;
  margin: 0;
}

textarea {
  overflow: auto;
}
```


#### Form Reset Explanation below
In some browsers, 
Form elements do not inherit font styling by default. 
Therefore, if you want to be sure
    that your form fields use the font defined on the body, or on a parent element, 
    you should add this rule to your CSS.
```CSS
button,
input,
select,
textarea {
  font-family: inherit;
  font-size: 100%;
}
```


Across browsers, 
Form elements use different box sizing rules for different widgets. 
You learned about the box-sizing property in our box model lesson and you can use this knowledge when styling forms to ensure a consistent experience when setting widths and heights on form elements.

For consistency, it is a good idea to set margins and padding to `0` on all elements, 
then add these back in when styling particular controls:
```CSS
button,
input,
select,
textarea {
  box-sizing: border-box;
  padding: 0;
  margin: 0;
}
```





