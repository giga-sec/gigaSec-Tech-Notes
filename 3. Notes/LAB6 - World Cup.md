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


The order in which the teams are listed 
-> determines which teams will play each other in each round 
Example:
in the first round, 
    Uruguay will play Portugal and 
    France will play Argentina; 
    #myquestion So does that mean that 1st round consists of all teams, like Brazil vs Mexico, Beligun vs Japan till the last team which is Colombia vs England?????? Yeah I think it is because the `simulate_round` returns the list of all of the teams that won the round. 
in the next round, 
    the winner of the `Uruguay-Portugal` match will play the winner of the `France-Argentina` match). 
    **So be sure not to edit the order in which teams appear in this file!**



Functions Explained (Already implented)
The `simulate_game` function accepts two teams as inputs 
(recall that each team is a dictionary containing the team name and the team’s rating), and simulates a game between them. 
If -> first team wins, the function returns `True` 
ELSE -> the function returns `False`.    Assumes that the 2nd team wins


The `simulate_round` function accepts a list of teams (in a variable called `teams`) as input, and simulates games between each pair of teams. 
The function returns a list of all of the teams that won the round.

**Main Function**
Finally, at the end of `main`, we sort the teams in descending order of how many times they won simulations (according to `counts`) and print the estimated probability that each team wins the World Cup.




Functions or Code that we are going to implement
First, in `main`, 
- read the team data from the CSV file into your program’s memory,
- add each team to the list `teams`.
    The file to use will be provided as a cli arg. You can access the name of the file, then, with `sys.argv[1]`.
    `csv.DictReader` function to read the csv file
    By default, all values read from the file will be strings. convert the team’s `rating` to an `int`
    Ultimately, append each team’s dictionary to `teams`. The function call `teams.append(x)` will append `x` to the list `teams`.
```python
teams = []
file = sys.argv[1]
with open(file) as csv_file: 
    dictionary = csv.DictReader(csv_file)
    for team in dictionary:
        teams.append(team)
```
Do we still need to remember the `.csv` file outside of this particular code?
Ans: I don't think so, okay so I guess we can safely use `with`
- [x] Experiement with dictionary
- [ ] How do we make the particular value transform into an `int`?
    - [ ] I could read the article about dictionaries in python. That will also lead us to learn more about dictionaries in python.
Basically like this
```python
{'team': 'Urugay', 'rating': '976'}
And I want it to be like this below
{'team': 'Urugay', 'rating': 976}
```

> append each team’s dictionary to `teams`. The function call `teams.append(x)` will append `x` to the list `teams`.
- [ ] What should I expect the `teams` list value is gonna be?
Ans: Okay, so I'm expecting that it's just gonna be the name of the teams, not their ratings??? 
Different Ans: Hmm no, **I think the `teams` variable is gonna be a list of dictionary representing the team name and their rating. And the rating is expected to be `int`**
~~- [ ] So where will I put the ratings value? Will I need to create a new list?

Code Plan to add values to `teams`
```python
for team in dictionary:
    # Replace the value of key rating to an int
    teams.append(team)
```
- [x] Let's first learn how to GET the value of a particular key
```python
dictionary.get('ratings')
```

- [x] Then let's learn how to REPLACE a value of a particular key
```python
dictionary['Key'] = 'new value to update the old value of key'
```

So in conclusion
```python

```


`Simulate Tournament`
input a list of teams and 
should repeatedly simulate rounds until you’re left with one team.
return the name of the one team that's left
    You can call the `simulate_round` function, which simulates a single round, accepting a list of teams as input and returning a list of all of the winners.
    -   You should not assume the number of teams in the tournament, but you may assume it will be a power of 2.


Back to `main` function
For example, 
IF -> Uruguay won 2 tournaments and Portugal won 3 tournaments, 
THEN -> your `counts` dictionary should be `{"Uruguay": 2, "Portugal": 3}`.

Use your `simulate_tournament` to simulate each tournament and determine the winner.

-   Recall that if `counts` is a dictionary, then syntax like `counts[team_name] = x` will associate the key stored in `team_name` with the value stored in `x`.
-   You can use the `in` keyword in Python to check if a dictionary has a particular key already. For example, `if "Portugal" in counts:` will check to see if `"Portugal"` already has an existing value in the `counts` dictionary.




## References
1. 