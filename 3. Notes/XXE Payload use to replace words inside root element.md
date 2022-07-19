e

# XXE Payload use to replace words inside root element
Created:  [[2022-07-10]]
Tags: #fleeting 

---
#### Abstract:


---
```XML
<!DOCTYPE replace [<!ENTITY name "feast"> ]>  
 <userInfo>  
  <firstName>falcon</firstName>  
  <lastName>&name;</lastName>  
 </userInfo>
```
We are replacing `&name` with `feast` as specified in `!ENTITY name "feast"`


[[XXE Payload to read files from system]]










### References
1. 