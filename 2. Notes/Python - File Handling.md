

# Python - File Handling
Created:  [[2022-07-20]]
Tags: #fleeting 

---
[[CSV in Python]]

### Opening a file
```python
f = open("file_name.extension")
```
returns a [file object](https://docs.python.org/3/glossary.html#term-file-object)

### With Statement to automatically close file
```python
with open("welcome.txt") as file:
   data = file.read()
```



### Reading the opened file
We didn't instruct the interpreter to read the contents inside of the opened file
The thing here is, we are only opening a file. 
```python
f.read()
```

This might be wrong, its only on my obversation
-   `read()` – It turns every text into individual characters. 
-   `readline()` – read the text file line by line and return all the lines as strings.
-   `readlines()` – read all the lines of the text file and return them as a list of strings.


how do we remove the \n in python read?
The `strip()` method in Python helps in omitting the spaces that are present at the beginning (leading) and at the end (trailing). Besides white spaces, the `strip()` method also includes the newline characters.



## References
1. 