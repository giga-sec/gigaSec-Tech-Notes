[[MOC Web Development]]

# Javascript


[[Javascript Popup Boxes]]


[[Cookies in Javascript]]


Javascript has variables that can store info
Runs code when a certain [[event in javascript meaning|event]] (e.g clicking) happens

Javascript uses API as well.

Two types of APIs
- Browser's API's
- 3rd Party API's


Browser's API's
-   The [`DOM (Document Object Model) API`](https://developer.mozilla.org/en-US/docs/Web/API/Document_Object_Model "DOM (Document Object Model) API") allows you to manipulate HTML and CSS, creating, removing and changing HTML, dynamically applying new styles to your page, etc. 
    Every time you see a popup window appear on a page, or some new content displayed (as we saw above in our simple demo) for example, that's the DOM in action.

- The [`Geolocation API`](https://developer.mozilla.org/en-US/docs/Web/API/Geolocation "Geolocation API") retrieves geographical information. This is how [Google Maps](https://www.google.com/maps) is able to find your location and plot it on a map.

- The [`Canvas`](https://developer.mozilla.org/en-US/docs/Web/API/Canvas_API "Canvas") and [`WebGL`](https://developer.mozilla.org/en-US/docs/Web/API/WebGL_API "WebGL") APIs allow you to create animated 2D and 3D graphics.

- [Audio and Video APIs](https://developer.mozilla.org/en-US/docs/Web/Guide/Audio_and_video_delivery) like [`HTMLMediaElement`](https://developer.mozilla.org/en-US/docs/Web/API/HTMLMediaElement) and [`WebRTC`](https://developer.mozilla.org/en-US/docs/Web/API/WebRTC_API "WebRTC") allow you to do really interesting things with multimedia.

3rd Party API's
You generally have to grab the code and information from somewhere on the Web
-   The [Twitter API](https://developer.twitter.com/en/docs) allows you to do things like displaying your latest tweets on your website.
-   The [Google Maps API](https://developers.google.com/maps/) and [OpenStreetMap API](https://wiki.openstreetmap.org/wiki/API) allows you to embed custom maps into your website, and other such functionality.


Javascript runs code from top to bottom


[[Client vs Server Side Scripting Languanges]]

### Dynamic vs Static Code
The word **dynamic** is used to describe both client-side JavaScript, and server-side languages — it refers to the ability to update the display of a web page/app to show different things in different circumstances, generating new content as required. Server-side code dynamically generates new content on the server, e.g. pulling data from a database, whereas client-side JavaScript dynamically generates new content inside the browser on the client, e.g. creating a new HTML table, filling it with data requested from the server, then displaying the table in a web page shown to the user. The meaning is slightly different in the two contexts, but related, and both approaches (server-side and client-side) usually work together.

A web page with no dynamically updating content is referred to as **static** — it just shows the same content all the time.






### Browser Security
Each browser tab has its own separate bucket for running code in (these buckets are called "execution environments" in technical terms) — this means that in most cases the code in each tab is run completely separately, and the code in one tab cannot directly affect the code in another tab — or on another website.


### Script Loading Strategies
A common problem is that all the HTML on a page is loaded in the order in which it appears. 
If you are using JavaScript to manipulate elements on the page (or more accurately, the [[DOM - Document Object Model]]), your code won't work if the JavaScript is loaded and parsed before the HTML you are trying to do something to.

In the internal and external examples the JavaScript is loaded and run in the head of the document, before the HTML body is parsed. This could cause an error, so we've used some constructs to get around it.


In the external example, 
the `defer` attribute, which tells the browser to continue downloading the HTML content once the `<script>` tag element has been reached.
```JS
<script src="script.js" defer></script>
```
Both the script and the HTML will load simultaneously and the code will work.


An old-fashioned solution to this problem used to be to put your script element right at the bottom of the body (e.g. just before the `</body>` tag), so that it would load after all the HTML has been parsed. The problem with this solution is that loading/parsing of the script is completely blocked until the HTML DOM has been loaded. On larger sites with lots of JavaScript, this can cause a major performance issue, slowing down your site.


### Async and Defer
![[Pasted image 20221015102459.png]]



Multiple Scripts Behavior
Scripts loaded using the `defer` attribute (see below) will run in the order they appear in the page and execute them as soon as the script and content are downloaded
-   If your scripts need to wait for parsing and depend on other scripts and/or the DOM being in place, load them using `defer` and put their corresponding `<script>` elements in the order you want the browser to execute them.
```JS
<script defer src="js/vendor/jquery.js"></script>

<script defer src="js/script2.js"></script>

<script defer src="js/script3.js"></script>
```

Scripts with an `async` attribute will execute as soon as the download is complete. This blocks the page and does not guarantee any specific execution order.
```JS
<script async src="js/vendor/jquery.js"></script>

<script async src="js/script2.js"></script>

<script async src="js/script3.js"></script>
```


---
Variables
Functions
Loops
Operators

In JavaScript, most of the items you will manipulate in your code are object
An object is a collection of related functionality stored in a single grouping.

In programming, an object is a structure of code that models a real-life object. You can have a simple object that represents a box and contains information about its width, length, and height, or you could have an object that represents a person, and contains data about their name, height, weight, what language they speak, how to say hello to them, and more.
```JS
let dog = { name : 'Spot', breed : 'Dalmatian' };
```
To retrieve the information stored in the object, you can use the following syntax:
```JS
dog.name
```



_Use `const` when you can, and use `let` when you have to._
### [[`let` to initialize variables in Javascript]]
### [[Constants in Javascript]] 

### [[Numbers in Javascript]]

---
### [[Strings in Javascript]]


### [[Template String Literals]]


### [[Arrays in Javascript]]

