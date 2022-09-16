[[MOC Web Development]]

# HTML
Created:  [[2022-07-12]]
Tags: #fleeting 

---
https://jsbin.com/?html,output

Build fast, full-stack web apps in your browser for free
https://glitch.com
---
```HTML
<!DOCTYPE html>
```

## Tags
[[Tags in HTML]]


## Attributes 
[[Attributes inside of tags]]


## Element
[[Elements in HTML]]


## Basic Anatomy of an HTML Document
`<!DOCTYPE HTML>` Tells us what standard the webpage is using
`<html>`  -> often called as root element
    `<head>`
        Everything you want to include in HTML...
        - keywords / page description that appears in search result
        - character set declarations  `<meta charset="utf-8">`
        - and more more [[Head in HTML]]
            `<title>`
                It's a text that appears on browser tabs
                title tag is also what the bookmark title gets
            `</title>`
    `</head>`
    `<body>`
        contains all content that displays on the page, 
        including text, images, videos, games etc..
    `</body>`
`</html>`



[[HTML will reduce whitespaces to 1 only]]


## [[Some symbols can't be used in HTML - Special Characters or Entity References]]




The overall data structure of an HTML page is 
like a tree, [[Trees in Programming]]
![[Pasted image 20220808155048.png|300]]
Rectangular nodes are tags, 
Oval nodes are text.



URL
We can provide inputs in a request as part of a URL like 
`https://wwww.example.com/path?key=value`. 
Here, `?` indicates that we’re adding inputs, which will include one or more key-value pairs.

---
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
**NOT working above**

---


[[Lists in HTML - Description, Unordered, Ordered]]


[[Creating Links in HTML]]



[[Link to a specific part inside of HTML- Document Fragments]]


## Advance Text Formatting
Always keep an accessibility mindset. The concept of italics isn't very helpful to people using screen readers, or to people using a writing system other than the Latin alphabet.


[[Two types of Quotations tag in HTML]]
- [[blockquote tag - Blockquotes in HTML]]
- [[p tag - Inline Quotations in HTML]]



https://developer.mozilla.org/en-US/docs/Learn/HTML/Introduction_to_HTML/Advanced_text_formatting#abbreviations
Abbreviations
Making up Contact Details
Superscript and subscript
Representing Computer Code
Marking up time and dates

## [[Abbreviations tags or Acronym Tags]]

## Address element - Provides Contact Details
**Note:** The `<address>` element should only be used to provide contact information for the document contained with the nearest [`<article>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/article) or [`<body>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/body) element. 
It would be correct to use it in the footer of a site to include the contact information of the entire site, or inside an article for the contact details of the author, but not to mark up a list of addresses unrelated to the content of that page.


Short Example
```HTML
<address>
  Chris Mills, Manchester, The Grim North, UK
</address>
```


Long Ass Example
```HTML
<address>
  <p>
    Chris Mills<br>
    Manchester<br>
    The Grim North<br>
    UK
  </p>

  <ul>
    <li>Tel: 01234 567 890</li>
    <li>Email: me@grim-north.co.uk</li>
  </ul>
</address>
```

^ https://developer.mozilla.org/en-US/docs/Web/HTML/Element/address


### Computer Codes
This are elements that marks up codes 
`<code>`: Usually all codes are warped here.
`<pre>`: For retaining whitespace (generally code blocks) — 
Browsers ignore more than 1 whitespaces therefore `<pre>` tag helps retain the whitespace


Specific Computer Codes
`<var>`: for variable names.
`<kbd>`: for user inputs. 
`<samp>`: for output of a program.

---
[[Computers can't read human dates - Dates and Times tags in HTML]]



[[Semantics are tags that provide meaning]]

[[No ideal semantic element to group items together - Non-Semantic Wrapper]]

[[Planning a website - Information Architecture]]


Debugging
Use a markup validation service https://validator.w3.org/
[[HTML Parser]]




[[Assesment - Marking up a letter]]

