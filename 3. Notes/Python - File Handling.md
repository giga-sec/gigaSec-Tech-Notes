

# Python - File Handling
Created:  [[2022-07-20]]
Tags: #fleeting 

---
[[CSV in Python]]

### Opening a file
```python
f = open("<file name>")
```
returns a [file object](https://docs.python.org/3/glossary.html#term-file-object)

### Reading the opened file
We didn't instruct the interpreter to read the contents inside of the opened file
The thing here is, we are only opening a file. 
```python
f.read()
```


### With Statement to automatically close file
```python
with open("welcome.txt") as file:
   data = file.read()
```






## References
1. 