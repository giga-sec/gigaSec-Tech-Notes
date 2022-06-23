[[MOC Networking]]

# TryHackMe - Intro to Lan
Created:  [[2022-04-22]]
Tags:  #literature  

---
Abstract:
[[Topology defined in Networking]]

[[Routers and Switch]]

[[ARP Protocol purpose in networking]]

[[DHCP Protocol purpose in networking]]


---
Topology is the design of how networks are connected. Each topologies have their own strength and weaknesses. 


Star Topology, a switch has a one on one connection to each devices. These devices talks to the switch and the switch will pass their message to the dedicated device. It's costly as it requires lots of cables.  


Bus Topology, it only uses single connection known as `backbone cable`. 


Ring Topology, 


[[Topology defined in Networking]]



Switch allows multiple connections of local networks and transmit those data to a correct location. 
Router is a device that is responsible for handling communication of networks, [[Networks and Networking in computers defined]]

[[Routers and Switch]]




Subnetting allows networks to be splitted into smaller pieces. 

Subnetting uses IP address in
. Network Address, this is the place where the network starts
. Host Address, use to identify devices in a network
. Default Gateway, this is used when we want to send data outside of our network address. 

[[Subnetting's purpose in networking]]



Address Resolution Protocol
ARP Protocol broadcasts connected networks and ask each of them which one has the mac address that is being find. It allows devices to identify themselves on a network. 
Types of ARP Packets
1. ARP Request

2. ARP Reply


[[ARP Protocol purpose in networking]]
[[ARP Protocol and how it works]]
[[ARP Protocl and its types]]


Dynamic Host Configuration Protocol
IP Address can be assigned automatically using DHCP
Types of DHCP Packets
1. DHCP Discover 
Sees if there is any DHCP server available

2. DHCP Offer
The DHCP server replies back with an IP address

3. DHCP Request
The device then accepts the offer by the DHCP server

4. DHCP ACK


[[DHCP Protocol purpose in networking]]




### References
1. https://tryhackme.com/room/introtolan