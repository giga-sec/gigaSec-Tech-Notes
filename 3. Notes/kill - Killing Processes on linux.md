[[Processes on Linux]]

# Killing Processes on linux and more options we can add
Created:  [[2022-06-22]]
Tags: #literature  

---
`kill <PID>`
For instance, to kill PID 1337, we'd use `kill 1337`. 


**Optional Arguments to send**
Below are some of the signals that we can send to a process when it is killed:
-   SIGTERM - Kill the process, but allow it to do some cleanup tasks beforehand. Basically cleanly kill the process
-   SIGKILL - Kill the process - doesn't do any cleanup after the fact
-   SIGSTOP - Stop/suspend a process













### References
1. 