[[How google search works]]

# Crawling
Created:  [[2022-09-22]]
Tags: #fleeting 

---
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












