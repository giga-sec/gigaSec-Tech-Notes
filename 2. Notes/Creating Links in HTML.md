[[HTML - Hypertext Markup Language]]

# Creating Links in HTML
Created:  [[2022-08-21]]
Tags: #fleeting 

---
To create a link, use both attribute and tag
- `<a>` element
- `href` attribute
`href` means `hyperlink reference` or `target`


[[Mail forwarding option in href]]



## Optional attributes for `<a>`
### `target` to decide where to open the link
`_blank`	new window or tab
`_self`	same window as it was clicked (this is default)


`_parent`	opens in parent frame
`_top`	opens infull body of the window
`framename`	opens in the named iframe

### `title` to add a tooltip on hover
```HTML
<a href="google.com"
   title="This text will only show on hover of this link">
```
**Note:** A link with `title` is only revealed on mouse hover, 
People relying on keyboard controls/touchscreens to navigate web pages will have difficulty accessing `<title>` info. 
If a title's information is truly important to the usability of the page,
Then you should present it in a manner that will be accessible to all users, 
    for example by putting it in the regular text.










