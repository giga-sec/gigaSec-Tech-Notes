[[MOC Networking]]

Links: 
Basic Explanation of OSI Model: https://www.forcepoint.com/cyber-edu/osi-model
OSI Model Deep Dive: https://www.youtube.com/watch?v=oVVlMqsLdro
OSI Model by TryHackMe: https://www.youtube.com/watch?v=hWIktHvNjeM

--- 

#### Open Systems Interconnection Model (OSI Model)
I learned that it's not how the internet is really designed for. What it actually means is its just a reference model, meaning it doesn't have to be strict that is, most of the layers can be absent in networks. It's just a helpful way of categorizing each component so we have an easier time diagnosting the issue.


**PDU (Protocol Data Unit)**
\- The names we give to data's at each OSI Layer
1. Bits - Physical Layer
2. Frames - Data Link Layer
3. Packets - Network Layer
4. Segments - Transport Layer

---
	
#### Layers of OSI Model
    
1. Physical Layer (Bits)
	- Wiring Standards
	- [[Topology and its different designs|Physical Topology]]
	- Synchronization
		\- Asynchronous
		\- Synchronous
	- [[Bandwith Usage]]
	- [[Vocabulary on Networking#Multiplexing|Multiplexing]]

2. Data Link Layer (Frames)
	- Focuses the [[Vocabulary on Networking#Physical Addressing|Physical Addressing]] of the [[Vocabulary on Networking#Transmissions|transmission]]
	- [[MacAddress|Media Access Control (MAC)]]
			- Physical Addressing of the networking device (MAC Address)
			- Logical Topology
			- Method of Data Transmission (like CSMA/CD)
	- [[LLC - Logical Link Control|Logical Link Control (LLC)]]
			- Connection Services (Gives [[Flow control]], Error Connection Services)
			- Synchronization of [[Vocabulary on Networking#Transmissions|Transmissions]] ([[Types of Synchronization]])

3. Network Layer (Packets)
	- Logical Addressing
	- Packet Switching
	- Connection Services (Flow Control)
	- Responsible for receiving frames from Data Link Layer
	- Delivering them to their destinations based on the logical address (such as [[Public-Private-IP_Address#IP address Internet Protocol|IP Address]]) contained inside of the frame. 
	- Uses [[OSPF (Open Shortest Path First)|OSPF]] and [[RIP (Routing Information Protocol)|RIP]] to determine the most optimal path to sent the chunks of data
	- Factors that decide what route is taken
		- What path is the shortest?  i.e has the least amount of devices that the packets needs to travel across.
		- What path is the most reliable? i.e have packets been lost on that path before?
		- Which path has the faster medium? (e.g. copper which is slower or fibre which is faster)

4. Transport Layer (Segments)
   	- Manages the delivery and error checking of data
	packets. 
   	- [[TCP (Transmisison Control Protocol)]]
	- [[UDP (User Datagram Protocol)]]
	- [[Windowing]]
	- [[Buffering]]

5. Session Layer
    - Controls the conversations between different computers	
	- Setting up a [[Vocabulary on Networking#Session|session]]
	- Maintaing up a [[Vocabulary on Networking#Session|session]]
	- Tearing down a [[Vocabulary on Networking#Session|session]]

6. Presentation Layer
	- Data Formatting (jpeg)
	-  Data Encryption (Https)
	-  A translator
	- When you send an email, the other user may have another email client to you, but the contents of the email will still need to display the same. This is the job of these layer.

7. Application Layer
	- **We're not talking about the program itself**
	- We're talking about the underlying service that supports microsoft outlook as an example. 
	- Microsoft outlook protocols might include pop3, imap4, smtp which supports the email archiecture. 
	- These is where protocols and rules are in place to determine how the user should interact with data sent or received.

---


