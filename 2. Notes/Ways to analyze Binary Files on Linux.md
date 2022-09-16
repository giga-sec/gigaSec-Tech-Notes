

# Ways to analyze Binary Files on Linux
Created:  [[2022-07-20]]
Tags: #fleeting 

---
`file`

`ldd <filename>`
What does the Command Do
Running it against a dynamically linked binary shows all its dependent libraries and their paths.

What does "dynamically linked" mean in the output of `file`?
When software is being developed, we try not to reinvent the wheel. 
There are a set of common tasks that most software programs require, like printing output or reading from standard in, or opening files, etc. 
All of these common tasks are abstracted away in a set of common functions that everybody can then use instead of writing their own variants. 
These common functions are put in a library called **libc** or **glibc**.

How does one find which libraries the executable is dependent on? 
That’s where **ldd** command comes into the picture. 
Running it against a dynamically linked binary shows all its dependent libraries and their paths.

`Hexdump`
Display file contents in ASCII, decimal, hexadecimal, or octal.












## References
1. 