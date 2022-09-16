[[Head in HTML]]

# property, content
Created:  [[2022-09-14]]
Tags: #fleeting 

---
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













### References
1. 