

# Endpoint
Created:  [[2022-07-21]]
Tags: #fleeting 

---
An endpoint is any device that connects to a computer network. 


When Bob and Alice talk on the phone, 
the "endpoints" of the connection are their respective phones. 


Similarly, in a network, 
computerized devices have "conversations" with each other, 
a computer connected to a network is one endpoint of an ongoing data exchange.



## Everyday examples of endpoints include 
- desktop, smartphones, tablets, 
- laptops, and [Internet of Things (IoT)](https://www.cloudflare.com/learning/ddos/glossary/internet-of-things-iot/) devices.


## What is NOT an endpoint
-   [Routers](https://www.cloudflare.com/learning/network-layer/what-is-a-router/)   [Switches](https://www.cloudflare.com/learning/network-layer/what-is-a-network-switch/)
-   Network gateways   [Firewalls](https://www.cloudflare.com/learning/security/what-is-a-firewall/)
-   [Load balancers](https://www.cloudflare.com/learning/performance/what-is-load-balancing/)

Going back to the example above, 
when Bob and Alice talk on the phone, 
the cell tower that transmits their conversation is NOT an `endpoint` for their data exchange 
it is the medium by which the exchange occurs.

As a further example, 
imagine a grocery store that 
- has several cash registers connected to the store's network  
- a `router` that connects the store's network to the Internet, 
- an internal server that stores records of each day's transactions, 
- and multiple employees who connect their personal smartphones to the store's WiFi. 
The `router` would be considered CPE. 
The `rest of these devices` are `endpoints` on the store's network, 


## Why do attackers target endpoints?
In a business context, attackers often target endpoints 
because a COMPROMISED ENDPOINT 
can be an entry point into an otherwise secure corporate network. 
-> An attacker may NOT be able to get through firewall, 
-> but an employee's laptop could be a slightly easier target.



## Endpoints are difficult to secure in business
IT teams have 
- less access to `endpoints` than the internal networking infrastructure

Because this `endpoints` are at hands of the employee, not the IT teams
-> one employee at a company regularly update their laptop and avoid risky online behaviors, --> another might avoid software updates and download unsecure files onto their laptop

The difficulty of securing endpoints and importance of protecting `endpoint`, 
has its own category of cyber security [endpoint security](https://www.cloudflare.com/learning/security/glossary/endpoint-security/) 






## References
1. https://www.cloudflare.com/learning/security/glossary/what-is-endpoint/