

# Punycode in URL deceives you into believing its the real website
Created:  [[2022-07-14]]
Tags: #fleeting 

---
![[Pasted image 20220714172031.png|300]]
![[Pasted image 20220714172040.png|300]]
BOTH WEBSITES LOOK LEGIT
But here me out, the first picture is a PHISHING LINK
The n is replaced by ‘[_n with a dot below it_](http://www.fileformat.info/info/unicode/char/1e47/index.htm)’ (U+1E47).

In Firefox, there's a feature called `idn_show_`
With that feature enabled, the first picture will now look like this
![[Pasted image 20220714172218.png|300]]








## References
1. https://ma.ttias.be/show-idn-punycode-firefox-avoid-phishing-urls/