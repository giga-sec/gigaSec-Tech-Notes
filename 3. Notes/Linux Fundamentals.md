[[MOC Networking]]

# TryHackMe - Linux Fundamentals
Created:  [[2022-04-26]]
Tags: #fleeting 

---
[[Common Directories-Folders of Linux]]


### Using Linux Terminal

[[Linux Commands to navigate file system]]


[[SSH - Remotely execute commands on another device]]


[[SCP - Securely transfer files using SSH Protocol]]


[[Software Repos and Packages]]


[[Arguments in linux are called flags or switches]]


[[Processes on Linux]]
[[Killing Processes on linux and more options we can add]]





### Windows System Apps and their respective linux alternative

[[Task Scheduler but on Linux]]


[[Task Manager in Linux, specifically ps command]]


[[EVERYTHING but on linux terminal]]



``wget``
Allows us to download files from the web via HTTP


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









https://stackoverflow.com/questions/53343801/how-do-i-get-the-man-command
`apt update` to update the local package lists followed by `apt install man-db` to install the actual package.


https://averagelinuxuser.com/how-to-install-and-use-ssh-on-linux/#configure-ssh-on-a-local-computer
Install SSH on computer





 ### References
1. 