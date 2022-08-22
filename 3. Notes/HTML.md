[[MOC Web Development]]

# HTML
Created:  [[2022-07-12]]
Tags: #fleeting 

---
https://jsbin.com/?html,output

Build fast, full-stack web apps in your browser for free
https://glitch.com
---
CS50 Version Below
HTML tags 
Refers to the commands used in HTML
https://www.w3schools.com/TAgs/default.asp


```HTML
<!DOCTYPE html>
```
It tells us what standard the webpage is using

## HTML Element
Tags
`<html>`    This is open tag
`</html>`  This is close tag
Tags are also not case-sensitive
Overall, we call both open tag and close tag an Element. It's like a sentence, we got a period indicating the end and a starting word but overall we call the structure as sentence.

Often, people call the opening tags as an element
This is justified as some element doesn't have a closing tag. Like a void element

Also Element is part of [[DOM - Document Object Model]]
![[Pasted image 20220811110138.png|450]]

[[Elemenets in HTML - Inline vs Block Level vs Empty-Void]]



## Attributes 
Attributes are always added in the opening tag
The syntax of attribute

A space opening tag and attribute
A space between multiple attributes
Values of attribute must always be  wrapped with `""`
Like this -> `Attribute="Value_here"`
Some websites don't use `""` in the value of attributes. 
    Perfectly fine because the value doesn't have spaces
```HTML
<a href=https://www.mozilla.org/> favorite website </a>
```
But for the sake of readability and normalization, just put everything on `""`


```HTML
<html lang="en">
```
The `lang="en"` is an attribute here
It's like a `key-value pair`, like dictionary in python. [[Python Dictionaries - Dictionary]]

### Boolen Attributes
Some attributes are written without values, Like the `disable` attribute
Here's an example on Empty element `<input>` with Boolen Attribute
```HTML
<input type="text" disabled="disabled">
```

It's preferrable to just exclude the value here 
as often, the value is just the attribute name itself.
also, most boolean attributes only have 1 value
```HTML
<input type="text" disabled>
```


## Basic Anatomy of an HTML Document
```HTML
<!DOCTYPE html>
<html lang="en-US">
  <head>
    <meta charset="utf-8">
    <title>My test page</title>
  </head>
  <body>
    <p>This is my page</p>
  </body>
</html>
```
`<!DOCTYPE HTML>`
`<html>`  -> sometimes called as root elemetn
    `<head>`
        ^--> acts as a place for everything you want to include in HTML...
        ...such as
        - keywords and a page description that would appear in search results
        - character set declarations  `<meta charset="utf-8">`
        - and more more [[Head in HTML]]
            `<title>`
                ^--> It's a text that appears on browser tabs
                ... itle is also what the bookmark title gets
            `</title>`
    `</head>`
    `<body>`
        ^--> contains all content that displays on the page, including text, images, videos, games etc..
    `</body>`
`</html>`



Okay so no matter the amount of whitespaces, HTML parser will always reduce it to 1 whitespace only
For instance
```HTML
<p>Dogs are silly</p>
```
Is the same as this below
```HTML
<p>Dogs                  are
                   silly</p>
```

## [[Special Characters or Entity References in HTML]]




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



## Semantics
This are tags that provides meaning to the html rather than just for the appearance
For instance, we have `<h1></h1>` it means a top level heading of a page. 

`<span>` has no mearning to html. It just gives its appearance by using css or give functionalities by using javascript. 

## [[Unordered and Ordered Lists in HTML]]

Description Lists
Purpose of this is to make such as terms and definitions, or questions and answers

Like this below
monologue
    In drama, where a character speaks their thoughts out loud to share them with the audience and any other characters present.

Code
It needs `<dl>` to wrap things (description list)
    And `<dt>` description term
    And `<dd>` description definition
```HTML
<dl>
    <dt>Meme</dt>
      <dd>A meme is like SPAGHET</dd>
      <dd>Also, like uhh</dd>
</dl>
```


## `<em>` emphasis is not italic
Browsers show `<em>` *italic* by default but that doesn't mean you should use it for italization
`<em>` is a Semantic. The meaning is it gives *stress* to words.
Screen readers detects `<em>` and reads it differently

## `<strong>` strong importance is not bold
Browsers show `<strong>` **BOLD** by default but that doesn't mean to use it for bolding words
Screen readers detects `<strong>` and reads it differently


## [[Creating Links in HTML]]



## [[Document Fragments to link to a specific part of an HTML document]]



https://developer.mozilla.org/en-US/docs/Learn/HTML/Introduction_to_HTML/Advanced_text_formatting#abbreviations
Quotations
Abbreviations
Making up Contact Details
Superscript and subscript
Representing Computer Code
Marking up time and dates

