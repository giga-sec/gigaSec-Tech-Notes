[[HTML]]

# Embedding other webpages - iframe, embed, object element
Created:  [[2022-09-19]]
Tags: #fleeting 

---
`<iframe>`s are for embedding other web pages, 
Like disqus, yt video, or google maps

[[Embed external resources such as pdf - `embed` and `object` element]]



## Attributes of `<iframe>`
 - `sandbox` [[Boolean Attributes]] requests heightened security settings
Always use `sandbox` [[Boolean Attributes]]
If absolutely required, you can add permissions back one by one (inside the `sandbox=""` attribute value) — see the [`sandbox`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/iframe#attr-sandbox) reference entry for all the available options.
One important note is that you should _never_ add both `allow-scripts` and `allow-same-origin` to your `sandbox` attribute — in that case, the embedded content could bypass the [Same-origin policy](https://developer.mozilla.org/en-US/docs/Glossary/Same-origin_policy) that stops sites from executing scripts, and use JavaScript to turn off sandboxing altogether.


https://developer.mozilla.org/en-US/docs/Learn/HTML/Multimedia_and_embedding/Other_embedding_technologies#the_embed_and_object_elements
**Note:** In order to improve speed, it's a good idea to set the iframe's `src` attribute with JavaScript after the main content is done with loading. This makes your page usable sooner and decreases your official page load time (an important [SEO](https://developer.mozilla.org/en-US/docs/Glossary/SEO) metric.)




Get your website https certified in https://letsencrypt.org/
[[How to prevent clickjacking]]









