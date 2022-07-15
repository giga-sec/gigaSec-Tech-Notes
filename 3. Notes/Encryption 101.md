[[MOC Cybersecurity]]

# Encryption 101
Created:  [[2022-07-15]]
Tags: #fleeting 

---
-   2 methods of Key Exchange


## [[Encryption Lingo]]


## How services prove their identity
Webservers prove their identity through [[Certificates - verifies legitimacy of websites|certificate]]



## Standards for services to comply
[PCI-DSS](https://www.pcisecuritystandards.org/documents/PCI_DSS_for_Large_Organizations_v1.pdf) states data should be encrypted both at rest (in storage) AND while being transmitted.
- payment card details, you need to comply with these PCI regulations.


## Types of Encryption
SYMmetric Encryption 
-> Uses SAME key to encrypt/decrept
-> Examples are `DES (insecure for modern app)` and `AES`,
-> Tends to be smaller keys (128 or 256 bit)
`DES` is feasible with brute-force attacks


ASYmmetric Encryption 
-> Uses DIFFERENT keys to encrypt/decrypt
-> Examples are `RSA` and `Elliptic Curve Cryptography`
-> Uses larger keys (2048 to 4096 bit)
Public Key and Private Key
Data ENCrypted with Private Key (Must not be shared)
Data DECrypted with Public Key (Can be shared)

## ASYmmetric Cryptography
Common use is exchange keys for symmetric encryption

### HTTPS Symmetric Encryption
#### Problem: 
How do you agree a key with the server without transmitting the key for people snooping to see?

#### Metaphor for the problem:
Imagine you have a `secret code` and `instructions` how to read the secret code
Problem:
-> If you send your friend the instructions 
-> with/out anyone else being able to read it
-> ask your friend for a `lock`. Only they have the `key` for this lock

##### Solution: 
If you send the `instructions` in a _indestructible locked box_ to your friend, 
they can unlock it with a `lock` once it reaches them and read the `instructions`.
Finally, You've communicated the `secret code` without people snooping in

Conclusion:
In this metaphor
the `secret code` represents `symmetric encryption KEY`
the `lock` represents `server's PUBLIC key`




## RSA in CTF
-> RSA seems to come up relatively often in CTFs
-> normally requiring you to calculate variables 
Wikipedia page for RSA seems complicated at first,
but will give you good info you need  to complete challenges.
or break some encryption based on them.

Tools for defeating RSA challenges
https://github.com/RsaCtfTool/RsaCtfTool
https://github.com/ius/rsatool

Key variables for CTF are 
`p    q` 
`m    n` 
`e    d`
`c`
“p” and “q” are large prime numbers, 
“n” is the product of p and q.
`n` and `e` are public key
`n` and `d` are private key
More about RSA here -> https://muirlandoracle.co.uk/2020/01/29/rsa-encryption/


## Uncategorized
Normally, SSH are authenticated with 
-> username
-> password


Some SSH are configured with 
-> key authentication
    uses  public and private keys to prove client is valid
By default, SSH keys are RSA keys
But you can
- choose what algorithm to generate
- add a passphrase to encrypt the `SSH key`

`ssh-keygen` can do all of that above
- used to generate pairs of keys

`Passphrase` to decrypt  key isn’t used to identify you to the server at all, 
all it does is decrypt the SSH key. 
The passphrase is never transmitted, and never leaves your system.

Using tools like John the Ripper, you can attack an encrypted SSH key to attempt to find the passphrase, which highlights the importance of using a secure passphrase and keeping your private key private.



Quantum Computers and Encryption

Quantum computers affect the future of encryption
Once quantom computers exists
- RSA and Elliptical Curve Cryptography will be VERY FAST TO BREAK
Because quantum computers can very efficiently solve the mathematical problems that these algorithms rely on for their strength.

