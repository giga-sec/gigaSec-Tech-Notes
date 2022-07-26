[[MOC CS50]]

# LAB6 - World Cup
Created:  [[2022-07-14]]
Tags: #fleeting 

---
Understand the general information
Program that runs simulations of the FIfa World Cup

Soccers world cup has 16 teams
Each round, 
    each team plays another team 
    losing teams are eliminated
    Until two remains and whoever the winner of that match is the winner of the overall tourna

FIFA Ratings
- soccer teams are given this
- Higher FIFA ratings indicate better previous game results

Given two teams with their own fifa ratings, we can guess whoever win the round

Using this information, 
- we can simulate the entire tournament by repeatedly simulating rounds until we’re left with just one team. 
- And if we want to estimate how likely it is that any given team wins the tournament, we might simulate the tournament many times (e.g. 1000 simulations) 
- and count how many times each team wins a simulated tournament.


Understand the Code
We got two .csv files and the .py code
```csv
team,rating     
Uruguay,976
Portugal,1306
```
I think I can say that the two .csv files 
- doesn't have similar teams comparing the two .csv files










## References
1. 