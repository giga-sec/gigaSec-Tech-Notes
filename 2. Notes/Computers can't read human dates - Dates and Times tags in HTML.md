[[HTML - Hypertext Markup Language]]

# Computers can't read human dates - Dates and Times tags in HTML
Created:  [[2022-09-15]]

---
### Dates and Times
In web, we have to keep in mind the accessibility, 
- the human readers 
- the computer who reads code

**Computers can't read human dates, they prefer numbers** (Machine-readable dates)
```HTML
<time datetime="2016-01-20">20 January 2016</time>

<time datetime="2016-01-20T19:30+01:00">7.30pm, 20 January 2016 is 8.30pm in France</time>
```
Needs to use both tag and attribute:
- `<time>` `</time>` tag
- `datetime=` attribute











