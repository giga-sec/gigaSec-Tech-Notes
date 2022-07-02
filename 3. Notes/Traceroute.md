

# Traceroute
Created:  [[2022-07-02]]
Tags: #fleeting 

---
Abstract:


---
The internet is made up of many, many different servers and end-points, all networked up to each other. This means that, in order to get to the content you actually want, you first need to go through a bunch of other servers. Traceroute allows you to see each of these connections -- it allows you to see every intermediate step between your computer and the resource that you requested.


The basic syntax for traceroute on Linux is this: `traceroute <destination>`


By default, the Windows traceroute utility (`tracert`) operates using the same ICMP protocol that ping utilises, and the Unix equivalent operates over UDP. This can be altered with switches in both instances.












### References
1. 