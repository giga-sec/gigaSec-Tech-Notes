[[clickjacking is an iframe attack in HTML]]

# How to prevent clickjacking
Created:  [[2022-09-19]]
Tags: #fleeting 

---
[CSP](https://developer.mozilla.org/en-US/docs/Glossary/CSP) stands for **[content security policy](https://developer.mozilla.org/en-US/docs/Web/HTTP/CSP)** and provides [a set of HTTP Headers](https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/Content-Security-Policy) (metadata sent along with your web pages when they are served from a web server) designed to improve the security of your HTML document. When it comes to securing `<iframe>`s, you can _[configure your server to send an appropriate `X-Frame-Options` header.](https://developer.mozilla.org/en-US/docs/Web/HTTP/Headers/X-Frame-Options)_ This can prevent other websites from embedding your content in their web pages (which would enable [clickjacking](https://developer.mozilla.org/en-US/docs/Glossary/Clickjacking) and a host of other attacks), which is exactly what the MDN developers have done, as we saw earlier on.1












