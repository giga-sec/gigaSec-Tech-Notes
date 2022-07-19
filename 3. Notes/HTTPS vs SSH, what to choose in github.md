

# HTTPS vs SSH, what to choose in github
Created:  [[2022-07-20]]
Tags: #fleeting 

---
[[What is protocol in networking|Protocols]] such as
[[HTTP in Detail|HTTP]], [[SSH - Remotely execute commands on another device|ssh]], [[FTP - File Transfer Protocol|FTP]]
- Used for transferring data from client to server and vice cerse
- Basically, this are communication protocols


## How SSH Login Process works
Private and Public Keys
- These are generated on client 
- Client then sends public key to server

IF -> Client wants to connect to the server
THEN -> Server encrypts the random number using your public key 
#myquestion What does random number mean here???

Server sends the encrypted message to client
Client will decrypt it using its private key
Client then sends the decrypted information to server
Server verifies that the decrypted info is correct


## Git with HTTPs
- uses password-based authentication for doing things like git push, clone, fetch or pull
- easier to set-up
- HTTPs is a port that is open in all firewalls therefore does not require configuring anything in firewall settings

Downsides of using HTTPs
- You have to enter password everytime you push
    - It can however be set to store it permanently using windows credentials in windows machine
    - **credential.helper** can cache your password
    - If user changes github password, they must redo the caching again

## Git with SSH
https://ourtechroom.com/tech/https-vs-ssh-in-git/
















## References
1. 