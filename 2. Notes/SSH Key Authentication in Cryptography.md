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
By default, [[SSH - Remotely execute commands on another device|SSH]] keys are [[RSA in CTF|RSA]] keys
But you can
- choose what algorithm to generate
- add a [[passphrase]] to encrypt the `SSH key`
`ssh-keygen` can do all of that above
- used to generate pairs of keys


The `~/.ssh` folder is the default place to store these [[Key]]s for OpenSSH.
`authorized_keys` - holds public keys that are allowed to access the server if key authentication is enabled




`Passphrase` to `decrypt key` isn’t used to identify you to the server at all, 
all it does is decrypt the SSH key. 
The passphrase is never transmitted, and never leaves your system.


SSH Keys can upgrade reverse shell
- assuming user has login enabled
Copy Pasted: Leaving an SSH key in authorized_keys on a box can be a useful backdoor, and you don't need to deal with any of the issues of unstabilised reverse shells like Control-C or lack of tab completion.


Using tools like John the Ripper, you can attack an encrypted SSH key to attempt to find the passphrase, which highlights the importance of using a secure passphrase and keeping your private key private.




[[SSH - Remotely execute commands on another device]]









## References
1. 