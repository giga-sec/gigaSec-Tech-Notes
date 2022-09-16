[[HTML]]

# Computers can't read human dates - Dates and Times tags in HTML
Created:  [[2022-09-15]]

---
### Dates and Times
 machine-readable dates
Uses tag paired with attribute
- `<time>` `</time>` tag
- `datetime=` attribute

In web, we have to keep in mind the accessibility, the human readers 
and the computer who reads code

Computers can't read human dates, they prefer numbers
```HTML
<time datetime="2016-01-20">20 January 2016</time>

<time datetime="2016-01-20T19:30+01:00">7.30pm, 20 January 2016 is 8.30pm in France</time>
```













