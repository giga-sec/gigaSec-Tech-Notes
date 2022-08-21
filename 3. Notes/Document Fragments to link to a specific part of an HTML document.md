

# Document Fragments to link to a specific part of an HTML document
Created:  [[2022-08-21]]
Tags: #fleeting 

---
It's possible to link to a specific part of an HTML document, known as a **document fragment**, rather than just to the top of the document. To do this you first have to assign an [`id`](https://developer.mozilla.org/en-US/docs/Web/HTML/Global_attributes#attr-id) attribute to the element you want to link to. It normally makes sense to link to a specific heading, so this would look something like the following:

```
<h2 id="Mailing_address">Mailing address</h2>
```

Then to link to that specific `id`, you'd include it at the end of the URL, preceded by a hash/pound symbol (`#`), for example:

```
<p>Want to write us a letter? Use our <a href="contacts.html#Mailing_address">mailing address</a>.</p>
```

You can even use the document fragment reference on its own to link to _another part of the current document_:

```
<p>The <a href="#Mailing_address">company mailing address</a> can be found at the bottom of this page.</p>
```













## References
1. te