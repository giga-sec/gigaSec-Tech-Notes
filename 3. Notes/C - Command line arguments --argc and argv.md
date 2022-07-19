[[Week 2 - Arrays, Compiling, Command Line Argument, Strings]]

# Command line arguments in C--argc and argv
Created:  [[2022-05-16]]
Tags: #permanent 

---
```C
int main(int argc, char** argv)
```

`argc` means "argument count", how many arguments it must receive
`argc` starts counting on `1` as the code execution itself (i.e `./filename`) 
Meaning if we give ./test Hello, then ``argc`` will be a value of **2** 

`argv` means "argument vector", this is where we store the arguments. 
`argv[0]` is the code execution itself (i.e `./filename`) 
Overall, we have a default of `two` arguments in `argv`












### References
1. https://cs50.harvard.edu/x/2021/notes/2/#command-line-arguments