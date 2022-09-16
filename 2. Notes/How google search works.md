[[MOC Search Engine Optimization]]

# How google search works
Created:  [[2022-09-05]]
Tags: #fleeting 

---
https://developers.google.com/search/docs/advanced/guidelines/how-search-works#a-few-notes-before-we-get-started

[[web crawler]]


Three stages of Google Search
1. [[#Crawling]]
2. [[#Indexing]]
3. [[#Serving Search Results]]


### Crawling
Finding out what pages exist on the web

URL discovery
- Google must constantly look for new and updated pages and add them to its list of *known pages*. 

How does google discover a page?
- Some pages are known because Google has already visited them. 
- When Google follows a link from a *known page* to a new page: for example, a hub page, such as a category page, links to a new blog post. 
- when you submit a list of pages (a [sitemap](https://developers.google.com/search/docs/advanced/sitemaps/overview)) for Google to crawl. 

Once Google discovers a page's URL, 
    it may visit (or "crawl") the page to find out what's on it.

[Googlebot](https://developers.google.com/search/docs/advanced/crawling/googlebot) uses an algorithmic process to determine which sites to crawl, how often, and how many pages to fetch from each site. 
[Google's crawlers](https://developers.google.com/search/docs/advanced/crawling/overview-google-crawlers) are also programmed such that they try not to crawl the site too fast to avoid overloading it. 

Googlebot doesn't crawl all the pages it discovered. 
Some pages may be [disallowed for crawling](https://developers.google.com/search/docs/advanced/robots/robots_txt#disallow) 
- disallwoed by the site owner,
- not accessible without logging in to the site
- and other [pages may be duplicates of previously crawled pages](https://developers.google.com/search/docs/advanced/crawling/consolidate-duplicate-urls).


### Indexing
After a page is crawled, Google tries to understand what the page is about

it includes processing and analyzing the 
    textual content and 
    key content tags  
    attributes, such as [`<title>` elements](https://developers.google.com/search/docs/advanced/appearance/title-link) 
    and alt attributes such as [images](https://developers.google.com/search/docs/advanced/guidelines/google-images), [videos](https://developers.google.com/search/docs/advanced/guidelines/video), and more.

During the indexing process, 
Google determines if a page is a [duplicate of another page on the internet or canonical](https://developers.google.com/search/docs/advanced/crawling/consolidate-duplicate-urls).
#myquestion Wtf is a canonical 

Google also collects *signals* about the canonical page and its contents, 
which may be used in the next stage, where we serve the page in search results. 
Some signals include 
    the language of the page, 
    the country the content is local to, 
    the usability of the page
    and so on.

The collected information about the canonical page and its cluster may be stored in the Google index, 
However, Indexing isn't guaranteed; not every page that Google processes will be indexed.


### Serving Search Results

When a user enters a query, 
machines search the google index for matching pages 
return the results we believe are the highest quality and most relevant to the user

Search Console might tell you that a page is indexed, 
but you don't see it in search results. This might be because:
-   [The content of the content on page is irrelevant to users](https://developers.google.com/search/docs/beginner/seo-starter-guide)
-   [The quality of the content is low](https://developers.google.com/search/docs/advanced/guidelines/overview)
-   [Robots meta directives prevent serving](https://developers.google.com/search/docs/advanced/crawling/block-indexing)














### References
1. 