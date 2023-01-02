[[HTML - Hypertext Markup Language]]

# name, content (adding info of html document)
Created:  [[2022-09-14]]
Tags: #fleeting 

---
### Adding info about the html document
```HTML
<meta name="author" content="gigaSecure">
<meta name="description" content="This is the things etc..">
```
`name` attribute is basically the category of what's in the `content` 

### The benefits of specific values in `name=" "`:
- Benefits of adding author
    Helps let users know who wrote the page, 
    -> if you have any questions about the content and you would like to contact them.

- Benefits of adding description
    Increase appearing on higher results on search engines
    **What you put in the "description" will also appear in search engines**
    **Example below:**
```HTML
<meta name="description" 
      content="The MDN Web Docs site provides information about Open Web technologies including HTML, CSS, and APIs for both Web sites and progressive web apps.">
```
![[Pasted image 20220811155010.png]]






!! Copy Pasted
**Note:** Many `<meta>` features just aren't used any more. 
For example, the keyword `<meta>` element (`<meta name="keywords" content="fill, in, your, keywords, here">`) — which is supposed to provide keywords for search engines to determine relevance of that page for different search terms — is ignored by search engines, because spammers were just filling the keyword list with hundreds of keywords, biasing results.
!! End of Copy Paste












### References
1. 14k