

# PGP, GPG and AEs
Created:  [[2022-07-20]]
Tags: #fleeting 

---
## PGP - (Pretty Good Privacy)
- software that implements encryption 
- performs digital signing

## GPG - 
- open source implementation of PGP
- also called `GnuPG`

### Both of two methods above
- private keys can be protected with passphrases 
- in a similar way to SSH private keys

private key must first be imported
`gpg` --import filename.key
then, we can safely decrypt the file now
`gpg -d message.gpg`


You may need to use GPG to decrypt files in CTFs
IF -> the key is passphrase protected, 
THEN -> you can attempt to crack this passphrase using John The Ripper and gpg2john.


## AES - (Advance Encryption Standard)
- replacement for DES 
- because DES had short keys and other cryptographic flaws.
AES and DES both operate on blocks of data (a block is a fixed size series of bits).
More info about AES here -> https://www.youtube.com/watch?v=O4xNJsjtN6E












## References
1. 112G