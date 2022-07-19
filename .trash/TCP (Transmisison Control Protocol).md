TCP is slow but reliable and accurate

Used with services that require the data to be accurate and complete.
	- File Sharing, 
	- Internet Browsing
	- sending an email

[[TCP VS UDP]]

---
From the *webserver*, 
picture of a dog is broken down into small pieces of data (known as packets) 
The *computer* then re-constructs the picture of the dog into the correct order. 
![[tcpdog.png]]
	
---
#### More Info

TCP/IP Protocol consists of four layers ( Indeed, has similarities of OSi Model )
- Application
- Transport
- Internet
- Network Interface

#### Defining Features of TCP:
- Connection-Based: Both a client and a device acting as a server **must be connected before data is sent**.  These ensures stability of data. 

#### [[Vocabulary on Networking#Header|Headers]] of the TCP Packets

Header      			| Description
------------------------|------------
Source Port 			| Port number is **chosen randomly** between 0-65535 (that aren't already use in at the time)
Destination Port		| Port number that the **app or service is using**. This value is not chosen at random
Source IP 				| IP Address of the sender
Destination IP			| Receiver's IP Address
Sequence Number 		| When a connection occurs, first piece of data transmitted is **given a random number**
Acknowledgement Number	| After a piece of data has been given a sequence, the **number for the next piece of data** will be [[Three Way Handshake#^20a903\|+ 1]]
Checksum 				| Determines the authenticity of the data.
Data					| These is where the bytes of file is stored.
Flag 					| Determines how the **packet should behave** during the [[Three Way Handshake\|handshake]] process.

^4fd6b4

#### [[Three Way Handshake]] in TCP ^930e5a

#### Closing a connection in TCP
When will TCP close a connection?
	\- Once a device has determined that the other device has sucessfully receivedd the full data.

![[Pasted image 20211117161404.png]]
- **Alice** has sent bob "[[Three Way Handshake#Special Messages|FIN]]" packet. 	
- Becaues **bob** received this, he will let Alice know that he received it. That he also wants to close the connection (using FIN). 
- **Alice** has heard Bob loud and clear and will let Bob know that she ACKnowledges this.