[[Common Directories-Folders of Linux]]

# Understanding passwd file
Created:  [[2022-07-09]]
Tags: #fleeting 

---
#### Abstract:


---
Can be found at /etc/passwd
passwd is a plain text file

Contains list of
- system accoutnss
- each account has info about user ID, group ID, home directory, shell etc..

Quick Tips
- Name of the user is usually found at the end of the file


All fiels are separated by colon symbol. All have 7 fields
![[Pasted image 20220709145529.png|400]]
1. Username 
Username, that's it. What more can you ask for?

2. Passoword 
-> `x` character indicates encypted password is stored at `/etc/shadow`. 

`passwd`
You need to use `passwd` command to compute hash of a password typed at CLI
Store/update the hash of the password in `etc/shadow` file.

3. User ID (UID)
Each user must be assigned with an ID
`0` reversed for root
`1-99` for other predefined accounts
`100-999` for administrative and system accounts/groups

4. Group ID (GID)
Primary group ID (stored in /etc/group)


5. User ID Info (GECOS)
Comment field. Allows you to add extra info.

6. Home Directory
Absolute path to directory when user will be logged in

7. Command/Shell
Absolute path of command/shell  (bin/bash)
Please note that it does not have to be a shell
sysadmin can use the nologin shell, `sbin/nologin`









### References
1. https://www.cyberciti.biz/faq/understanding-etcpasswd-file-format/