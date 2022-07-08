

# Deletion
Created:  [[2022-07-08]]
Tags: #fleeting 

---
-> Deletion in VIM is actually CUT. 
### Delete char on current position 
#### `x`

### Delete Word
#### `d   [count]  motion`
##### `dw`  -> till next word (no whitespace are left)
`w` means move cursor to next word

##### `de` -> till end of current word (whitespaces are spared) 
`e` means move cursor to end of current word

### Delete from CURRENT cursor to END OF LINE 
#### `shift+d`  or  `d$`
`$` means move cursor at end of line

-> NOT DELETE empty line


### Delete WHOLE LINE 
#### `dd` 
-> CAN DELETE EMPTY LINE

### [[Using count in vim]] to delete more
`d  [count]  motion`
`d3w`

Delete two lines
(From current line to below)
**`2dd`**












### References
1. 