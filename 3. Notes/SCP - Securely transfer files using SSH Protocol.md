[[Linux Fundamentals]]

# SCP - Securely transfer files using SSH Protocol
Created:  [[2022-06-30]]
Tags: #permanent 

---
``scp`` basically means **secure copy**
- **allows ==securely transfering files**== between computers **using SSH protocol**.



Copy files/directories 
**FROM YOUR CURRENT system** to a remote system
-> `scp important.txt ubuntu@192.168.1.30:/home/ubuntu/transferred.txt`



Copy files & directories 
**FROM A REMOTE system** to your current system
-> `scp ubuntu@192.168.1.30:/home/ubuntu/documents.txt notes.txt`















### References
1. 