

# HTML
Created:  [[2022-07-12]]
Tags: #fleeting 

---


CS50 Version Below
HTML tags 
Refers to the commands used in HTML
https://www.w3schools.com/TAgs/default.asp


```HTML
<!DOCTYPE html>
```
It tells us what standard the webpage is using

Tags
`<html>`    This is open tag
`</html>`  This is close tag
Anything that's in `<>` are tags

Attributes
```HTML
<html lang="en">
```
The `lang="en"` is an attribute here
It's like a `key-value pair`, like dictionary in python. [[Python Dictionaries - Dictionary]]

The overall data structure of an HTML page is 
like a tree, [[Trees in Programming]]
![[Pasted image 20220808155048.png|300]]
Rectangular nodes are tags, 
Oval nodes are text.


Videos in HTML
```HTML
<video autoplay loop muted width="1280">
    <source src="halloween.mp4" type="video/mp4">
</video>
```

Iframe or Inline Frame
```HTML
<iframe allowfullscreen src="https://www.youtube.com/embed/xvFZjo5PgG0">
</iframe>
```

Anchor Tag to put a website link
```HTML
<a href="https://www.link_here.com">Text here</a>.
```
`href` means `Hypertext REFerence` 

URL
We can provide inputs in a request as part of a URL like 
`https://wwww.example.com/path?key=value`. 
Here, the `?` indicates that we’re adding inputs, which will include one or more key-value pairs.

Take user input and direct it to other website
```HTML
<form action="https://www.google.com/search" method="get">
    <input name="q" type="text">
    <input type="submit">
</form>
```
`<form>` tag that has an `action` of `Google search URL`, with a method of `GET`.
    Inside the form, we have two `<input>`, 
        - First `<input>` is `name=q`  with `type=text` 
        - Second `<input>` `type=submit` is a button
        When second input is clicked, the `<form>` will add the `<input>` `<type=text>` to URL









### References
1. 