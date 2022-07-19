Pros: Less bandwidth usage... much faster than TCP
Cons: Unreliable Protocol


Good fit for voice and video calling
Also for discovering devices ([[ARP Protocol|ARP]] and [[DHCP Protocol|DHCP]])

---
Any data that gets sent by UDP is sent to the computer whether it gets there or not. 
Just hope for the best, fingers crossed. 	
![[udpdog.png]]	

---
#### More Info
- Data Integrity doesn't exist in here
- UDP is **stateless**. No **ACK**nowledgement is sent during connection.

#### [[Vocabulary on Networking#Header|Headers]] of the TCP Packets

Header 				| Description
--------------------|------------
Time to Live (TTL)	| This field sets an expiry timer for the packet, so it doesn't clog up your network if it never manages to reach the host or escape
Source Address		| IP address of the device is being sent from
Destionation Address| Receiver's IP address so that the data knows where to travel next
Source Port			| Opened by the sender. Port number is chosen randomly between 0-65535 (that aren't already use in at the time)
Destination Port 	| Port number that an app or service is running. This value is not chosen at random
Data 				| These is where files of bytes is stored and being transmitted. 