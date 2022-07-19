[[XML Eternal Entity]]

# XML (eXtensible Markup Languange)
Created:  [[2022-07-09]]
Tags: #fleeting 

---
#### Abstract:
- Why use XML
- Syntax and more info about XML languange
---
## Used for storing and transporting data 

[[What is DTD]]

[[XXE Payload use to replace words inside root element]]
[[XXE Payload to read files from system]]


### Why use XML

#### No data conversion needed
-> When transferred between different systems
-> XML can be used on any systems

#### Data stored/transported using XML can be
-> can be changed without affecting data presentation

#### Free of Syntax Error
-> Validates syntax using DTD and Schema

### Syntax and more info about XML languange
-> Mostly starts with XML Prolog.** 
-> Must have **`ROOT` element**
-> **Case sensitive language**

#### XML doc **mostly starts with XML Prolog.** 
Not compulsory but `good practice` to put that line in all your XML documents.
```XML
<?xml version="1.0" encoding="UTF-8"?>
```
**^- XML Prolog Specifies -^** 
- XML version <--> Encoding used


#### **ALL XML document must have `ROOT` element**
`<mail>` is ROOT element
    `<to>, <from>, <subject>, <text>` are CHILDREN elements
```XML
<mail>  
   <to>falcon</to>  
   <from>feast</from>  
   <subject>About XXE</subject>  
   <text>Teach about XXE</text>  
</mail>
```

#### **XML is case-sensitive languange**
Attributes can be used
```C
<text category = "message">You need to learn about XXE</text>
```
^--- `category` is attribute name
^--- `"message"` is attribute value





### References
1. 