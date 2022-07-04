[[Linux Fundamentals]]

# Common Directories of Linux
Created:  [[2022-06-21]]
Tags: #permanent 

---
Abstract:
/etc -> passwd, shadow, sudoers.d
/var -> /var/log
/root
/tmp

---
## `/bin`
- Where all available commands that can be used in the system are here


## `/etc`

- Root directory where system files used in OS are stored
### Special files worth mentioning in `/etc`
- **passwd**, **shadow** -> shows how system store passwords using sha512
- **sudoers.d** -> shows users/groups that have sudo permission


## `/var`
- Frequently accessed/written by services/applications
### Special Files worth mentioning in `/var`
- `/var/log` is where log files are stored
It automatically manage logs in a process that is known as "rotating".

Examples of useful logs
-   An Apache2 web server
-   Logs for the fail2ban service, which is used to monitor attempted brute forces, for example
-   The UFW service which is used as a firewall


## `/root`
Home directory of a root user. The user would have their data in a directory such as `/home/root` by default.



## `/tmp`
Like temp in windows
What's useful for us in pentesting is that any user can write to this folder by default. Meaning once we have access to a machine, it serves as a good place to store things like our enumeration scripts. 















### References
1. 