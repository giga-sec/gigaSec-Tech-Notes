[[Burp Suite Basics]]

# What is Burp Proxy
Created:  [[2022-07-08]]
Tags: #fleeting 

---
Allows us to capture requests and responses between ourselves and target.
Can then be manipulated/sent to other tools before being allowed to continue their destination.

For example, 
If we make a request to `https://tryhackme.com` through the Burp Proxy, 
our request will be captured and won't be allowed to continue to the TryHackMe servers until we explicitly allow it through. 
We can choose to do the same with the response from the server, although this isn't active by default. 

The ability to intercept requests ultimately means that we can take complete control over our web traffic -- an invaluable ability when it comes to testing web applications.


### Working with Proxy Tab

Burp Suite will still (by default) be logging requests made through the proxy when the intercept is off. This can be very useful for going back and analysing prior requests, even if we didn't specifically capture them when they were made.

Burp will also capture and log WebSocket communication, which, again, can be exceedingly helpful when analysing a web app.


_**Remember:**_ _Whilst you are connected to the proxy and have the Proxy Intercept switched on, your browser will hang whenever you make a request. A very common mistake when you are learning to use Burp Suite (and indeed, later on!) is to accidentally leave the intercept switched on and ergo be unable to make any web requests through your browser. If your browser is hanging and you don't know why: check your proxy!_


Problem: Allowing Burp to capture _everything_ can quickly become a massive pain.
Solution: [[Scoping in Burp Proxy]]

[[Working with Target Tab]]










### References
1. 