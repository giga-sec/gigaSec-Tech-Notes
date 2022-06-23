[[MOC Networking]]

# TryHackMe - Linux Fundamentals
Created:  [[2022-04-26]]
Tags: #fleeting 

---
[[Common Directories-Folders of Linux]]


### Using Linux Terminal

[[Linux Commands to navigate file system]]


[[SSH - Remotely execute commands on another device]]


[[Software Repos and Packages]]


[[Arguments in linux are called flags or switches]]


[[Processes on Linux]]
[[Killing Processes on linux and more options we can add]]



### Windows System Apps and their respective linux alternative

[[Task Scheduler but on Linux]]


[[Task Manager in Linux, specifically ps command]]


[[EVERYTHING but on linux terminal]]






The Operating System (OS) uses namespaces to ultimately split up the resources available on the computer to (such as CPU, RAM and priority) processes. Namespaces are great for security as it is a way of isolating processes from another -- only those that are in the same namespace will be able to see each other.


`systemctl <option> <service>`
This command allows us to interact with the **systemd** process/daemon. Basically doing some things with the boot-up system

**The flags of `systemctl`**
`<option>` like 
Start, 
Stop, 
Enable, -  start the same service on the boot-up of the system 
Disable

`<service>` for instance, apache2



Useful Commands
``wget``
Allows us to download files from the web via HTTP


``scp`` basically means secure copy
- allows you to transfer files between two computers using SSH protocol.

-   Copy files & directories from your current system to a remote system\
-> `scp important.txt ubuntu@192.168.1.30:/home/ubuntu/transferred.txt`

-   Copy files & directories from a remote system to your current system
-> `scp ubuntu@192.168.1.30:/home/ubuntu/documents.txt notes.txt`




 ### References
1. 