[[Week 6 - Python]]

# Command Line Arguments in Python
Created:  [[2022-07-16]]
Tags: #permanent 

---
[[C - Command line arguments --argc and argv]]


**Libraries needed below**
```Python
from sys import argv
```


**Explanation of how to use `argv`**
`argv` means "argument vector", this is where we store the arguments. 
`argv[0]` is the code execution itself (i.e `./filename`) 
`len()` counts in 1. So there are two arguments here (`filename` and `arg1`)
```Python
if len(argv) == 2:
    print(f"hello, {argv[1]}")
```


**Execution of the Script below**
```Python
python file_name.py arg1 arg2 ...
```

















### References
1. 112G