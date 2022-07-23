[[Root Directory is the GOD of all folders]]

# Root Directory and the folders it contains
Created:  [[2022-07-23]]
Tags: #fleeting 

---
All folders in here comes from `/` or `root directory`
`/etc` -> passwd, shadow, sudoers.d
`/var` -> /var/log
`/root`
`/tmp `

---
## [[bin - directory]]
- binaries and executable files
- the files here can be executed in terminal

## [[etc - directory]]



## [[boot - directory]]
- contain files needed to boot system


## `/opt`
This is where 3rd-party software lives

## `/usr`
user related programs


## `/var`
- Frequently accessed/written by services/applications
### Special Files worth mentioning in `/var`
- `/var/log` is where log files are stored
It automatically manage logs in a process that is known as "rotating".

#### Examples of useful logs in `/var/log`
-   An Apache2 web server
-   Logs for the fail2ban service, which is used to monitor attempted brute forces, for example
-   The UFW service which is used as a firewall


## `/root`
Home directory of a root user. The user would have their data in a directory such as `/home/root` by default.



## `/tmp`
Like temp in windows
What's useful for us in pentesting is that any user can write to this folder by default. Meaning once we have access to a machine, it serves as a good place to store things like our enumeration scripts. 


## `/dev`
Linux exposes devices as files, and `/dev` is where we store these files

These are not actual files as we know them, but they appear as files — for example, /dev/sda represents the first SATA drive in the system. If you wanted to partition it, you could start a partition editor and tell it to edit /dev/sda.











## References
1. https://www.howtogeek.com/117435/htg-explains-the-linux-directory-structure-explained/