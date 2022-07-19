[[What is XML]]

# DTD (Document Type Definition)
Created:  [[2022-07-09]]
Tags: #fleeting 

---
#### Abstract:


---
Defines 
- structure
- legal elements
- attributes
of XML document

Say, file named `note.dtd`
```XML
<!DOCTYPE note [ <!ELEMENT note (to,from,heading,body)> <!ELEMENT to (#PCDATA)> <!ELEMENT from (#PCDATA)> <!ELEMENT heading (#PCDATA)> <!ELEMENT body (#PCDATA)> ]>
```
^- We use this DTD above to -^
- validate info of some XML doc
- making sure XML file conforms with rules of`.dtd`

Let's say we validate the XML doc `note` with `note.dtd`
```XML
<?xml version="1.0" encoding="UTF-8"?>  
<!DOCTYPE note SYSTEM "note.dtd">  
<note>  
    <to>falcon</to>  
    <from>feast</from>  
    <heading>hacking</heading>  
    <body>XXE attack</body>  
</note>
```

### Process of how .DTD validates XML file
Basically explanation of the `note.dtd` file

`!DOCTYPE note` -> Defines root element of document named note


`!ELEMENT note (to, from, heading, body)` 
    ^-> Defines that note element must contain:
    `to`, `from`, `heading`, `body`

`!ELEMENT to (#PCDATA)` defines type element to be "#PCDATA"
`!ELEMENT to (#)`
Basically `to`, `from`, `heading`, `body` elements will be defined as "#PCDATA"

NOTE: `#PCDATA` means parseable character data.










### References
1. 