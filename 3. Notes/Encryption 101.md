e

# Encryption 101
Created:  [[2022-07-15]]
Tags: #fleeting 

---
#### Abstract:


---
-   2 methods of Key Exchange
-   Notes about the future of encryption with the rise of Quantum Computing


## Encryption Lingo
Encryption -> Transforming data into encrypted data

Encoding 
-> Not encryption. Just data representation like base64
-> Easily reversible


Ciphertext -> the result of plaintext to encrypted data
Cipher -> method of encryptiong/decrypting data

Key -> needed to correctly decrypt ciphertext to plaintext

Passphrase -> used to protect the key (like a password but for `key`)

Crtpytanalysis -> Attacking cryptography by finding weaknesses in its math

## How services prove their identity
Webservers prove their identity through` certificate`
Trusted Files through `checksum`


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

HTTPS Symmetric Encryption
Problem: How do you agree a key with the server without transmitting the key for people snooping to see?

Metaphor for the problem:
Imagine you have a secret code and instructions how to read the secret code
If you want to send to your friend the instructions with/out anyone else being able to read it


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



## References
1. ``