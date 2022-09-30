[[Multiple media formats must be used in HTML]]

# How to implement multiple media formats
Created:  [[2022-09-18]]
Tags: #fleeting 

---
Elements and attributes needed
- `<source>` [[void element]]
    - `src=""`
    - `type=""` 

Example:
```HTMl
<video controls>
  <source src="rabbit320.mp4" type="video/mp4" />
  <source src="rabbit320.webm" type="video/webm" />
</video>
```
https://developer.mozilla.org/en-US/docs/Web/Media/Formats
For help selecting the best containers and codecs for your needs












