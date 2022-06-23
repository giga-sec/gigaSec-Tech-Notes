[[Arguments in linux are called flags or switches]]

# Linux Shell Operators like `&` or `&&`
Created:  [[2022-06-22]]
Tags: #literature  

---
`&` - allows us to use a command in background
(i.e, copying a large file takes a lot of time and leaves us unable to do anything until file succesfully copies. So `&` makes it possible to run copying file on the background)

`&&` - run two commands at the same time

`>` - transfer the output to somewhere else. If the file already exists, then it overwrites that 
(i.e, `echo hello`, we can use `>` to make it so that the hello transfers to a new file `echo hello > welcome` and if we run the file welcome, it will show up `hey` )

`>>` transfer the output to somewhere else and appends that data only, it doesn't overwrite any data 












### References
1. 