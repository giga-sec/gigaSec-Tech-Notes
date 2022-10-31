[[CSS]]

# How a browser takes CSS and HTML and turns that into a webpage
Created:  [[2022-10-02]]

---
Things to keep in mind:
- this is a very simplified version of what happens when a browser loads a webpage, 
- different browsers will also handle the process in different ways.
But this is roughly what happens
1.  The browser loads the HTML (e.g. receives it from the network).
2.  It converts the HTML into a [[DOM - Document Object Model|DOM]]. 
3.  The browser gets resources linked to the HTML document, such as:
    - embedded images, videos, 
    - linked CSS! 
    - JavaScript (sort of)
4.  The browser [[parser|parses]] the fetched CSS, 
    It sorts the different rules by their selector types into different **buckets**, e.g. element, class, ID, 
    Based on the selectors it finds, 
        it works out which rules should be applied to which nodes in the DOM, 
        and attaches style to them as required (this intermediate step is called a **render tree**).
5.  The render tree is arranged in the structure it should appear in after the rules have been applied to it.
6.  The visual display of the page is shown on the screen (this stage is called painting).












