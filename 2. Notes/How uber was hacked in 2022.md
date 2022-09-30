[[Cybersecurity news]]

# How uber was hacked in 2022
Created:  [[2022-09-18]]
Tags: #fleeting 

---
![[Pasted image 20220918134814.png]]
`#uberunderpaiddrivers`
Many Uber employees initially thought it was a joke, the [_Washington Post_ reports](https://www.washingtonpost.com/technology/2022/09/15/uber-hack/).



## **Lessons learned:**
1.  No hardcoded credentials and temperate keys, such as [SSH](https://www.wallarm.com/what/what-is-ssh-protocol), VPN, cloud credentials, etc. Scan your shares and assets for hardcoded credentials before hackers do that. That’s an easy task. 
2.  Always require 2FA/MFA for VPN. Split intranet by zones even inside VPN; segmentation required. 
3.  No AWS keys. Use AWS IAM Instance Profile ([https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_switch-role-ec2_instance-profiles.html](https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_switch-role-ec2_instance-profiles.html)) or GCP Application Default Credentials ([https://cloud.google.com/docs/authentication/client-libraries#adc](https://cloud.google.com/docs/authentication/client-libraries#adc)) or the same approach of granting access (part of every cloud’s CIS Benchmark) instead of provisioning secrets. 
4.  Use [API security solutions](https://www.wallarm.com/product/api-security-platform), such as Wallarm, to protect internal services and systems, such as PAM, corporate portals, and management systems. It also helps with leaked API token blocking and investigations.






https://lab.wallarm.com/how-uber-was-hacked/