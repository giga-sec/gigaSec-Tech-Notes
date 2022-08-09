[[MOC CS50]]

# Week 8 - HTML, CSS, Javascript
Created:  [[2022-08-08]]
Tags: #fleeting 

---
## Networking

The internet, with routers, IP, TCP, and DNS or basically networking in general basically allows us to send data from one computer to another. 


**Routers** are specialized computers, with CPUs and memory, 
It routes / relays data from one point to another. 
A router has its own algorithm that makes it have multiple options to choose what direction to send data
[[Routers and Switch]]


Protocols are a set of rules or conventions that the world agreed upon for computers to communicate with.
[[What is protocol in networking]]

[[TCP - Transmission Control Protocol]]
[[IP - Internet Protocol]]


## HTML
```HTML
<!DOCTYPE html>

<html lang="en">
    <head>
        <title>
            hello, title
        </title>
    </head>
    <body>
        hello, body
    </body>
</html>
```

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


## CSS
CSS uses properties, or `key-value pairs`, like 
`font-size: large;`

CSS can be implemented inside HTML
or an external file

Two ways to do this inside HTML
First is the `<name_of_tag style>`

The style applied to the `<body>` tag **cascades** (meaning it applies to its children), 
so all the sections inside will have centered text as well.
```HTML
<body style="text-align: center;">
   <header style="font-size: large;">
      John Harvard
   </header>
   <main style="font-size: medium;">
       Welcome to my home page!
   </main>
   <footer style="font-size: small;">
       Copyright &#169; John Harvard
   </footer>
</body>
```

Second way to implement CSS in HTML
Is to use `<style>` tag inside of  `<head>`
It uses CSS **type selector** to style each type of tag. There are many kinds of selectors in CSS
```HTML
<head>
    <style>
        body {
            text-align: center;
        }

        header {
            font-size: large;
        }

        main {
            font-size: medium;
        }

        footer {
            font-size: small;
        }
    </style>
    <title>home</title>
</head>
```

CSS Class
We can define our own CSS **class** with a `.` followed by a keyword we choose

`<link>` tag 
- to add the css file
```HTML
<head>
    <link href="home.css" rel="stylesheet">
    <title>home</title>
</head>
```


The **attribute selectors** will affect tags with those attributes, 
and we can use `a[href*="harvard.edu"]` to be less specific in our selection, 
affecting tags with `harvard.edu` anywhere in its `href`.


A set of CSS conventions and shared styles is known as a **framework**, 
with classes and components we can quickly use.

It's like Modules in python but for Web->CSS


## Javascript

The javascript code comes in webserver but will be executed in user's browser

```Javascript
let counter = 0;
counter = counter + 1;
counter += 1;
counter++;
```

Looping
if/else
```Javascript
if (x < y) {

}
else if (x > y) {

}
else {

}
```

while loop
```Javascript
while (true) {

}
```

for loop
```Javascript
for (let i = 0; i < 3; i++) {

}
```


```JAVASCRIPT
let name = document.querySelector('#name').value;
alert('hello, ' + name);
```
`document` is a global variable that comes with JavaScript in the browser, and
`querySelector` is a function we can use to select a node in the [[DOM - Document Object Model]] . After we select the element with the ID name, 
    we get the text value inside the input, and add it to our alert

Order of execution matters in HTML
We can move our `<script>` tag to below of `<body>` of the page, 
since we want the rest of the page to load first:
```HTML
<!DOCTYPE html>

<html lang="en">
    <head>
        <title>hello</title>
    </head>
    <body>
        <form>
            <input autocomplete="off" autofocus id="name" placeholder="Name" type="text">
            <input type="submit">
        </form>
        <script>

            function greet()
            {
                let name = document.querySelector('#name').value;
                alert('hello, ' + name);
            }

            document.querySelector('form').addEventListener('submit', greet);

      </script>
    </body>
</html>
```


Anonymous functions

### Listening to Events
```Javascript
document.querySelector('form').addEventListener('submit', greet);
```
Now, we can listen to **events** in JavaScript, which occur when something happens on the page. For example, we can listen to the `submit` event on our `form` element, 
and call the `greet` function when the event happens.


