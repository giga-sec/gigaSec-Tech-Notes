[[MOC Networking]]

#### Firewalls
- They can be hardware, routers, software
- Responsible for determing what is allowed to enter and exit
- Firewalls operate at [[The OSI Model| Network Layer]] and [[The OSI Model|Data Link Layer]]

#### Firewall Categories
1. Stateful
	- Uses the **entire information from a connection**; rather than inspecting an individual packet
	- Decision making is dynamic. **For example**, a firewall could allow the first parts of a [[TCP (Transmisison Control Protocol)|TCP]] handshake that would later fail.
	- If host connection is bad, it will **block the entire device.**

2. Stateless
	- Uses static set of rules to determine whether individual packets are acceptable or not. **For example**, a device sending a bad packet **will not necessarilly mean** that the entire device is blocked 
	- Uses much fewer resources. **Great for receiving** large amounts of traffic from a set of hosts such as [[DDoS (Distributed Denial-of-Service Attack)]]    
	- **Much dumber** since these firewalls are only as effective as what the rules define them. 