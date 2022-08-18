

# Head in HTML
Created:  [[2022-08-11]]
Tags: #fleeting 

---
The Job of Head is to have a place for  
- `<title>`  
- links to css, custom favicons
- `<meta> `metadata such as (author, keywords that describe the webpage)


Bookmarks in browsers grabs the `<title>` as to make it the name of the bookmark

`<meta>`
There are many different attributes to `<meta>` tag
```HTML
<meta charset="utf-8">
```
^-- specifies the document's character encoding

Adding info about the html document
```HTML
<meta name="author" content="gigaSecure">
<meta name="description" content="This is the things etc..">
```
Basically, `name` and `content` must go together.
`name` attribute is basically the name of where the `content` must stay

Benefits of adding author
Useful to be able to understand who wrote the page, 
-> if you have any questions about the content and you would like to contact them.

Benefits of adding description
Useful as it incrase potential to make website appear higher in searches performed in search engines
-> This technique is widely known as Search Engine Optimization

Search Engine also finds the `description` attribute in `meta` to display it in the search result
```HTML
<meta name="description" content="The MDN Web Docs site
  provides information about Open Web technologies
  including HTML, CSS, and APIs for both Web sites and
  progressive web apps.">
```
Below is what google search showed in the link description
![[Pasted image 20220811155010.png]]

!! Copy Pasted
**Note:** Many `<meta>` features just aren't used any more. 
For example, the keyword `<meta>` element (`<meta name="keywords" content="fill, in, your, keywords, here">`) — which is supposed to provide keywords for search engines to determine relevance of that page for different search terms — is ignored by search engines, because spammers were just filling the keyword list with hundreds of keywords, biasing results.
!! End of Copy Paste

## Propriety Metadata
Twitter has [Twitter Cards](https://developer.twitter.com/en/docs/twitter-for-websites/cards/overview/abouts-cards)
Facebook has [Open Graph Data](https://ogp.me/) 

The use of it is to make actually idk, but I kinda get it
```HTML
<meta property="og:image" content="https://developer.mozilla.org/static/img/opengraph-logo.png">
<meta property="og:description" content="The Mozilla Developer Network (MDN) provides
information about Open Web technologies including HTML, CSS, and APIs for both Web sites
and HTML5 Apps. It also documents Mozilla products, like Firefox OS.">
<meta property="og:title" content="Mozilla Developer Network">
```
For example, in FB, when you link MDN Web docs in Facebook.
It will show the logo image, description of the site, and the title of the site
The code above, will result in the fb link having these
![[Pasted image 20220811155619.png|300]]
#myquestion It got me wondering, there are a lot of websites out there. So there must be a way to automate this process where a script gets the `description` attribute in `<meta>` tag and display it, alongside the logo of the website, and scraping the  `<title>` tag  

## Adding Custom Icons
Favicon
Better to have image with filename `.ico` as it supports all the way back to Internet Explorer 6
But it can accept `.gif` or `.png`  #myquestion Wonder if it can ask `.jpeg` too?








## References
1. https://developer.mozilla.org/en-US/docs/Learn/HTML/Introduction_to_HTML/The_head_metadata_in_HTML