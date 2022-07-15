[[Encryption 101]]

# SSH Key Authentication
Created:  [[2022-07-15]]
Tags: #fleeting 

---
Normally, SSH are authenticated with 
-> username
-> password


Some SSH are configured with 
-> key authentication
    uses  public and private keys to prove client is valid
By default, SSH keys are [[RSA in CTF|RSA]] keys
But you can
- choose what algorithm to generate
- add a passphrase to encrypt the `SSH key`

`ssh-keygen` can do all of that above
- used to generate pairs of keys

`Passphrase` to decrypt  key isn’t used to identify you to the server at all, 
all it does is decrypt the SSH key. 
The passphrase is never transmitted, and never leaves your system.

Using tools like John the Ripper, you can attack an encrypted SSH key to attempt to find the passphrase, which highlights the importance of using a secure passphrase and keeping your private key private.



[[SSH - Remotely execute commands on another device]]








## References
1. 