[[Arch Linux Installation]]

# iwctl - Connecting to a network using Wifi
Created:  [[2022-07-15]]
Tags: #fleeting 

---
type -> iwctl
-> device list
-> station `name_of_device` scan
-> station `name_of_device` get-networks
-> station `name_of_device` connect SSID


`iwd` automatically stores network passphrases in the `/var/lib/iwd` directory and uses them to auto-connect in the future
See more -> [Network configuration](https://wiki.archlinux.org/title/Iwd#Network_configuration).

### Device name with spaces?
`name_of_device` should be quoted in parenthesis

### Show device info and connection status
device `name_of_device` show
station `name_of_device` show













## References
1. 