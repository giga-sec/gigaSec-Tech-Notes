[[MOC Linux]]

# Linux File Permissions
Created:  [[2022-08-09]]
Tags: #fleeting 

---
## Types of Users
### Owner ( u )
The user who created the file/folder
The owner can permit the other type of users to access that file.

### Group ( g )
Users can belong to a group. If a user in that group created a file, then members of that group can access that file/folder.
This is good when multiple users work in a single file/folder

### Others ( o ) and All ( a )
Users who are not the owner of a file/folder
and Users who doesn't belong to a Group

## Permission Type
### Read ( r ) ( 4 )
Permission to Read any file or folder
### Write ( w ) ( 2 )
Permission to Write, append or override a file
### Execute ( x ) ( 1 )
Permission to Execute any file



## ls -l
`-r` is listing files/folders in reverse order 

In depth explanation of first column in `ls -l` command
First column of `ls -l` has four parts that contain 10 bits
```BASH
- --- --- ---
`- rwx rw- -wx`
```
First part contains 1 bit 
-> indicates the **file ( `-` ) or folder ( `d` ) or symbolic link ( `l` )**

The rest of the bits contains the [[#Permission Type]]
2nd part contains 3bits
-> 3 bits indicating permissions of [[#Owner u]] 

3rd part contains 3bits
-> 3 bits indicating permissions of  [[#Group g]] 

4th part contains 3bits
-> 3 bits indicating permissions of [[#Others o and All a]] 

Why the fuck does it not formatted in spaces. It's harder to read ;-;
Ans: Actually not, because `rwx` is in order, if there's no write permission then its `r-x`


## chmod - CHange file MODe
Who can change the permission bits of a file/folder?
- owner of the file
- root user

```Shell
chmod [Permission][Path of file or folder]
```
user types
`u` - owner    `g` - group     `o` - others

permission types
`r` - read      `w` - write       `x` - execute

`+` add perms to file/folder 
`=` reassign perms to file/folder
`-` remov perms to file/folder






## References
1. https://linuxhint.com/linux_file_permissions/