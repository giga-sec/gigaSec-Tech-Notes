[[VIM 101]]

# Saving file in vim
Created:  [[2022-07-08]]
Tags: #permanent 

---
## With Root Permission
### `:w !sudo tee %`
**:w** – Write a file
**!sudo** – Call shell with sudo command
**tee** – The output of write command redirected using tee
**% -** Indicate the Current filename. Here it is /etc/hosts

## SAVE and EXIT
### `:wq`
`w` is for save
`q` is for quit










### References
1. 