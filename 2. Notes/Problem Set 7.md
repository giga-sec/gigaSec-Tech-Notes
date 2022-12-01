[[MOC CS50]]

# Problem Set 7
Created:  [[2022-08-06]]
Tags: #fleeting 

---
The CS50 Duck has been stolen! 
The town of Fiftyville has called upon you to solve the mystery of the stolen duck. 
Authorities believe that the thief stole the duck and then, shortly afterwards, 
took a flight out of town with the help of an accomplice. 

Two persons working together
Your goal is to identify:
-   Who the thief is,
-   What city the thief escaped to, and
-   Who the thief’s accomplice is who helped them escape

All you know is that the theft 
**took place on July 28, 2021** and that it 
**took place on Humphrey Street**.


In `log.sql`, keep a log of all SQL queries that you run on the database. 
Above each query, label each with a comment (in SQL, comments are any lines that begin with `--`) describing why you’re running the query and/or what information you’re hoping to get out of that particular query. 
You can use comments in the log file to add additional notes about your thought process as you solve the mystery: 
**ultimately, this file should serve as evidence of the process you used to identify the thief!**

As you write your queries, you may notice that some of them can become quite complex. 
To help keep your queries readable, 
see principles of good style at [sqlstyle.guide](https://www.sqlstyle.guide). The [indentation](https://www.sqlstyle.guide/#indentation) section may be particularly helpful!

Ultimately, you should submit both your `log.sql` and `answers.txt` files.




```SQL
CREATE TABLE crime_scene_reports (
    id INTEGER,
    year INTEGER,
    month INTEGER,
    day INTEGER,
    street TEXT,
    description TEXT,
    PRIMARY KEY(id)
);
CREATE TABLE interviews (
    id INTEGER,
    name TEXT,
    year INTEGER,
    month INTEGER,
    day INTEGER,
    transcript TEXT,
    PRIMARY KEY(id)
);
CREATE TABLE atm_transactions (
    id INTEGER,
    account_number INTEGER,
    year INTEGER,
    month INTEGER,
    day INTEGER,
    atm_location TEXT,
    transaction_type TEXT,
    amount INTEGER,
    PRIMARY KEY(id)
);
CREATE TABLE bank_accounts (
    account_number INTEGER,
    person_id INTEGER,
    creation_year INTEGER,
    FOREIGN KEY(person_id) REFERENCES people(id)
);
CREATE TABLE airports (
    id INTEGER,
    abbreviation TEXT,
    full_name TEXT,
    city TEXT,
    PRIMARY KEY(id)
);
CREATE TABLE flights (
    id INTEGER,
    origin_airport_id INTEGER,
    destination_airport_id INTEGER,
    year INTEGER,
    month INTEGER,
    day INTEGER,
    hour INTEGER,
    minute INTEGER,
    PRIMARY KEY(id),
    FOREIGN KEY(origin_airport_id) REFERENCES airports(id),
    FOREIGN KEY(destination_airport_id) REFERENCES airports(id)
);
CREATE TABLE passengers (
    flight_id INTEGER,
    passport_number INTEGER,
    seat TEXT,
    FOREIGN KEY(flight_id) REFERENCES flights(id)
);
CREATE TABLE phone_calls (
    id INTEGER,
    caller TEXT,
    receiver TEXT,
    year INTEGER,
    month INTEGER,
    day INTEGER,
    duration INTEGER,
    PRIMARY KEY(id)
);
CREATE TABLE people (
    id INTEGER,
    name TEXT,
    phone_number TEXT,
    passport_number INTEGER,
    license_plate TEXT,
    PRIMARY KEY(id)
);
CREATE TABLE bakery_security_logs (
    id INTEGER,
    year INTEGER,
    month INTEGER,
    day INTEGER,
    hour INTEGER,
    minute INTEGER,
    activity TEXT,
    license_plate TEXT,
    PRIMARY KEY(id)
);
```


Goal: Familiarize the SQL database
## Table Schema
We have 11 tables
**Crime Scene Reports**, **Interviews,** **ATM Transactions,** 
Bank Accounts, Airports, **Flights,** 
Passengers, **Phone Calls**, 
People, **Bakery_security_logs**

Similarities Between Tables
- All tables have ID
- People and Bakery_security_logs have license_plate

Bakery_Security_Logs have
- year month day hour minute
- What does activity mean in here

People have
- Phone and Passport Number
- Also Licens

I think the better thing to do is to know what we're looking for then that's where we dive in through the database

Theft **took place on July 28, 2021** 
and that it **took place on Humphrey Street**.

## Tables that have Dates
- Bakery_security_logs  year month day hour minute
-> license_plate - activity - license_plate

- Phone calls -> year - month - day - duration
- ID

- Flights ->  year - month - day - hour - minute
id, origin_airport_id, destination_airport_id
    FOREIGN KEY(origin_airport_id) REFERENCES airports(id),
    FOREIGN KEY(destination_airport_id) REFERENCES airports(id)


- Crime_scene_repots -> year - month - day - hour - minute
-> id, street, description

- interview -> year - month - day 
-> id, name, day, transcript

- ATM Transactions -> year - month - day
-> id, account_number, atm_location, transaction_type, amount


## Tables that have locations
- Crime_scene_reports -> street
- ATM Transactions -> atm_location

## (DONE) Crime_Scene_Reports
Done meaning that no more information can be extracted in this database
```SQL
ID|Street|Description
| 293 | Axmark Road     | Vandalism took place at 12:04. No known 
                             witnesses.                                                                                                                                                                       |
| 294 | Boyce Avenue    | Shoplifting took place at 03:01. Two people 
                        witnessed the event.                                                                                                                                                         |
| 295 | Humphrey Street | Theft of the CS50 duck took place at 10:15am at the Humphrey Street bakery. Interviews were conducted today with three witnesses who were present at the time – each of their interview transcripts mentions the bakery. |
| 296 | Widenius Street | Money laundering took place at 20:30. No known witnesses.                                                                                                                                                                |
| 297 | Humphrey Street | Littering took place at 16:36. No known witnesses.                                                                                                                                                                       |
```


Theft of the CS50 duck took place at **10:15am** at the **Humphrey Street bakery**. 
Interviews were conducted today with **three witnesses** who were present at the time – 
**each interview mentions the bakery.**
The thief must be a baker?

###  Evidences Collected of Crime Reports
- ==**10:15 AM**== theft time
- ==**Humphrey Street Bakery**== theft location
- ==**Three witnesses**== -> Interviewed and both mentions the bakery


Find a way to group similar plate numbers
GROUP BY hour then the license_plate
```SQL
SELECT license_plate, hour, minute, activity
FROM bakery_security_logs
WHERE year = 2021 AND month = 7 AND day = 28 AND hour <= 10
ORDER BY license_plate ASC, hour ASC, minute ASC;
```

Things that I wasn't able to translate in query
`Exclude the license_plate with same entrance and exit minute time`
`Exclude license_plate with no exit value`
Why?
It seems to include subqueries or the use of JOIN, I'm still not that familiar with SQL that I can easily translate english into SQL queries. 

We'd have to translate this manually this time
## Bakery_security_logs
License_plate with their entrance and exit time
```SQL
  license_plate | hour | minute | activity 
+---------------+------+--------+----------+
| 0NTHK55       | 8    | 42     | entrance |
| 0NTHK55       | 10   | 23     | exit     |
| 1106N58       | 8    | 34     | entrance |
| 1106N58       | 10   | 35     | exit     |
| 322W7JE       | 8    | 36     | entrance |
| 322W7JE       | 10   | 23     | exit     |
| 4328GD8       | 9    | 14     | entrance |
| 4328GD8       | 10   | 19     | exit     |
| 5P2BI95       | 9    | 15     | entrance |
| 5P2BI95       | 10   | 16     | exit     |
| 6P58WS2       | 9    | 20     | entrance |
| 6P58WS2       | 10   | 18     | exit     |
| 94KL13X       | 8    | 23     | entrance |
| 94KL13X       | 10   | 18     | exit     |
| G412CB7       | 9    | 28     | entrance |
| G412CB7       | 10   | 20     | exit     |
| L68E5I0       | 8    | 25     | entrance |
| L68E5I0       | 8    | 34     | exit     |
| L93JTIZ       | 8    | 18     | entrance |
| L93JTIZ       | 10   | 21     | exit     |
+---------------+------+--------+----------+
```
### Analysis of Bakery_Security_logs
Evidence
> ten minutes after the theft, thief gets into car
10:15 was the time of the theft
10:15 + 00:10 = **10:25**
So the car left at **10:25** at bakery parking lot

With the info above we can say that it's
Weird, there's no exact timeframe of `10:25` exit
Time exit near `10:25`
```SQL
| 0NTHK55       | 8    | 42     | entrance |
| 0NTHK55       | 10   | 23     | exit     |

| 322W7JE       | 8    | 36     | entrance |
| 322W7JE       | 10   | 23     | exit     |
``` 

### Conclusion of Bakery Logs
So can we say that the 10 minutes after the thief was just an approximation?
Or do I have a lack of info?
-> Let's assume that it was just an approximation

Both plate numbers `0NTHK55` and `322W7JE`. 
Either could be the accomplice and the thier 



## Interview Table
```SQL
| Jose    | 28  | “Ah,” said he, “I forgot that I had not seen you for some weeks. It is a little souvenir from the King of Bohemia in return for my assistance in the case of the Irene Adler papers.”                                                                                                                               |
| Eugene  | 28  | “I suppose,” said Holmes, “that when Mr. Windibank came back from France he was very annoyed at your having gone to the ball.”                                                                                                                                                                                      |
| Barbara | 28  | “You had my note?” he asked with a deep harsh voice and a strongly marked German accent. “I told you that I would call.” He looked from one to the other of us, as if uncertain which to address.                                                                                                                   |
| Ruth    | 28  | Sometime within ten minutes of the theft, I saw the thief get into a car in the bakery parking lot and drive away. If you have security footage from the bakery parking lot, you might want to look for cars that left the parking lot in that time frame.                                                          |
| Eugene  | 28  | I dont know the thief's name, but it was someone I recognized. Earlier this morning, before I arrived at Emma's bakery, I was walking by the ATM on Leggett Street and saw the thief there withdrawing some money.                                                                                                 |
| Raymond | 28  | As the thief was leaving the bakery, they called someone who talked to them for less than a minute. In the call, I heard the thief say that they were planning to take the earliest flight out of Fiftyville tomorrow. The thief then asked the person on the other end of the phone to purchase the flight ticket. |
| Lily    | 28  | Our neighboring courthouse has a very annoying rooster that crows loudly at 6am every day. My sons Robert and Patrick took the rooster to a city far, far away, so it may never bother us again. My sons have successfully arrived in Paris. 
```
Interesting that there are also evidences transcripted before June 28, 2021. We could gather information ther

These investigations are all from June 28, 2021
Jose, Eugene, Barbara contained irrelevant evidences

Ruth    ->
Sometime within ten minutes of the theft, 
I saw the thief get into a car in the bakery parking lot and drive away. 
If you have security footage from the bakery parking lot, 
    you might want to look for cars that left the parking lot in that time frame.  

Eugene  ->
Earlier this morning, before I arrived at Emma's bakery, 
Saw the thief withdrawing on ATM in Leggett Street
Eugene recognizes the Thief

Raymond  ->
THIEF Left the Bakery
THEN called someone for less than a minute
In the call, I heard the thief say 
> they were planning to take the earliest flight out of Fiftyville tomorrow. 
> The thief then asked the person on the other end of the phone to purchase the flight ticket. 

### Evidences Collected Interview Table
Ruth, Eugene, Raymond provided useful evidences

1. ten minutes after the theft, thief gets into car
10:15 + 00:10 = **10:30**
So the car left at **10:30** at bakery parking lot

2. Earlier on morning
**Thief withdrawed ATM in Leggett Street**

3. After the thief incident, Made a call less than a minute
-> Purchase flight ticket to take earliest flight out of Fiftyville at June 29, 2021


## Flights Table
FOREIGN KEY(origin_airport_id) REFERENCES airports(id),
    FOREIGN KEY(destination_airport_id) REFERENCES airports(id)
year - month - day - hour - minute

-> Purchase flight ticket to take earliest flight out of Fiftyville at June 29, 2021
```SQL
SELECT  day, hour, minute
        origin_airport_id, destination_airport_id
FROM Flights
WHERE year = 2021 AND month = 7 AND day = 29
ORDER BY hour ASC
LIMIT 5;
```

Result (This data below is wrong)
```SQL
+-----+------+-------------------+------------------------+
| day | hour | origin_airport_id | destination_airport_id |
+-----+------+-------------------+------------------------+
| 29  | 8    | 20                | 4                      |
| 29  | 9    | 30                | 1                      |
| 29  | 12   | 15                | 11                     |
| 29  | 15   | 20                | 9                      |
| 29  | 16   | 0                 | 6                      |
+-----+------+-------------------+------------------------+
```

This is the result of flights table below
```SQL
+----+-------------------+------------------------+
| id | origin_airport_id | destination_airport_id |
+----+-------------------+------------------------+
| 18 | 8                 | 6                      |
| 36 | 8                 | 4                      |
| 43 | 8                 | 1                      |
| 23 | 8                 | 11                     |
| 53 | 8                 | 9                      |
+----+-------------------+------------------------+
```
Also, the only flight logs we have is flight_id `18` 
I concluded that they are in boston since destionation_airport_id is `4` and that's boston. 


This are the resutls of passengers table below
```SQL
+-----------+-----------------+------+
| flight_id | passport_number | seat |
+-----------+-----------------+------+
| 18        | 3592750733      | 4C   |
| 24        | 3592750733      | 2C   |
| 54        | 3592750733      | 6C   |
| 36        | 8294398571      | 6C   |
+-----------+-----------------+------+
```

### Analysis of Flights Table
take earliest flight out of Fiftyville at June 29, 2021
```SQL
+-----+------+-------------------+------------------------+
| day | hour | origin_airport_id | destination_airport_id |
+-----+------+-------------------+------------------------+
| 29  | 8    | 20                | 4                      |
```





## ATM Transaction
Check the ATM 
`account_number, atm_location, transaction_type, `
`year - month - day `
```SQL
SELECT day, account_number, atm_location, transaction_type
FROM ATM_transactions
WHERE atm_location = "Leggett Street"
    AND transaction_type = "withdraw"
    AND year = 2021 AND month = 7 AND day = 28;
```
```SQL
+-----+----------------+----------------+------------------+
| day | account_number |  atm_location  | transaction_type |
+-----+----------------+----------------+------------------+
| 28  | 28500762       | Leggett Street | withdraw         |
| 28  | 28296815       | Leggett Street | withdraw         |
| 28  | 76054385       | Leggett Street | withdraw         |
| 28  | 49610011       | Leggett Street | withdraw         |
| 28  | 16153065       | Leggett Street | withdraw         |
| 28  | 25506511       | Leggett Street | withdraw         |
| 28  | 81061156       | Leggett Street | withdraw         |
| 28  | 26013199       | Leggett Street | withdraw         |
+-----+----------------+----------------+------------------+
```



Why does each table have an ID?
ANs: THE ID WILL HELP US DETERMINE the order of the log entry!
Assuming that 1 in id means that it's the first recorded log and is accurate, then that's the ting!!!!


## Phone_Calls
year - month - day -  duration
>THIEF Left the Bakery
THEN called someone for less than a minute

```SQL
SELECT id, year, day, duration
FROM Phone_calls
WHERE   month = 7 AND day = 28
        AND duration <= 60
ORDER BY id ASC;
```

Results
```SQL
+-----+------+-----+----------+
| id  | year | day | duration |
+-----+------+-----+----------+
| 221 | 2021 | 28  | 51       |
| 224 | 2021 | 28  | 36       |
| 233 | 2021 | 28  | 45       |
| 234 | 2021 | 28  | 60       |
| 251 | 2021 | 28  | 50       |
| 254 | 2021 | 28  | 43       |
| 255 | 2021 | 28  | 49       |
| 261 | 2021 | 28  | 38       |
| 279 | 2021 | 28  | 55       |
| 281 | 2021 | 28  | 54       |
+-----+------+-----+----------+
```


## People Table
People have license plate, passport number  and phone number

Let's see 
```SQL

```

## Passengers
flight_id, passport_number, seat
```SQL
+-----------+-----------------+------+
| flight_id | passport_number | seat |
+-----------+-----------------+------+
| 18        | 3592750733      | 4C   |
| 24        | 3592750733      | 2C   |
| 54        | 3592750733      | 6C   |
| 36        | 8294398571      | 6C   |
+-----------+-----------------+------+
```
3 seats exactly for 3592750733, or for Diana


## Airports
```SQL
+----+--------------+-----------------------------------------+---------------+
| id | abbreviation |                full_name                |     city      |
+----+--------------+-----------------------------------------+---------------+
| 1  | ORD          | O'Hare International Airport            | Chicago       |
| 2  | PEK          | Beijing Capital International Airport   | Beijing       |
| 3  | LAX          | Los Angeles International Airport       | Los Angeles   |
| 4  | LGA          | LaGuardia Airport                       | New York City |
| 5  | DFS          | Dallas/Fort Worth International Airport | Dallas        |
| 6  | BOS          | Logan International Airport             | Boston        |
| 7  | DXB          | Dubai International Airport             | Dubai         |
| 8  | CSF          | Fiftyville Regional Airport             | Fiftyville    |
| 9  | HND          | Tokyo International Airport             | Tokyo         |
| 10 | CDG          | Charles de Gaulle Airport               | Paris         |
| 11 | SFO          | San Francisco International Airport     | San Francisco |
| 12 | DEL          | Indira Gandhi International Airport     | Delhi         |
+----+--------------+-----------------------------------------+---------------+
```
So assuming that the airport ID is related to the ID of flights table
Then the earliest flight in flights table is 
```SQL
            Origiin | Destination
20                | 4 
```
Okay, so there's no origin airport ID here,
so we can assume that 
```
| id | abbreviation |    full_name                |     city      |
| 4  | LGA  | LaGuardia Airport        | New York City |
```
New York City is where the thief escaped to

So I think New York City is wrong, the earliest flight could be not the really earliest, maybe just the 2nd earlist or 3rd earliest. Like that




## Bank Accounts
```SQl
account_number INTEGER,
    person_id INTEGER,
    creation_year INTEGER,
```

Let's combine the data of bank_accounts and ATM Transaction
```SQL
+-----+----------------+----------------+------------------+---------------+-----------+
| day | account_number |  atm_location  | transaction_type | creation_year | person_id |
+-----+----------------+----------------+------------------+---------------+-----------+
| 28  | 28500762       | Leggett Street | withdraw         | 2014          | 467400    |
| 28  | 28296815       | Leggett Street | withdraw         | 2014          | 395717    |
| 28  | 76054385       | Leggett Street | withdraw         | 2015          | 449774    |
| 28  | 49610011       | Leggett Street | withdraw         | 2010          | 686048    |
| 28  | 16153065       | Leggett Street | withdraw         | 2012          | 458378    |
| 28  | 25506511       | Leggett Street | withdraw         | 2014          | 396669    |
| 28  | 81061156       | Leggett Street | withdraw         | 2018          | 438727    |
| 28  | 26013199       | Leggett Street | withdraw         | 2012          | 514354    |
+-----+----------------+----------------+------------------+---------------+-----------+
```

```SQL
+-----------+---------+---------------+-----------------+----------------+
| person_id |  name   | license_plate | passport_number |  phone_number  |
+-----------+---------+---------------+-----------------+----------------+
| 686048    | Bruce   | 94KL13X       | 5773159633      | (367) 555-5533 |
| 514354    | Diana   | 322W7JE       | 3592750733      | (770) 555-1861 |
| 458378    | Brooke  | QX4YZN3       | 4408372428      | (122) 555-4581 |
| 395717    | Kenny   | 30G67EN       | 9878712108      | (826) 555-1652 |
| 396669    | Iman    | L93JTIZ       | 7049073643      | (829) 555-5269 |
| 467400    | Luca    | 4328GD8       | 8496433585      | (389) 555-5198 |
| 449774    | Taylor  | 1106N58       | 1988161715      | (286) 555-6063 |
| 438727    | Benista | 8X428L0       | 9586786673      | (338) 555-6650 |
+-----------+---------+---------------+-----------------+----------------+
```

```
| 6P58WS2       | 9    | 20     | entrance |
| 6P58WS2       | 10   | 18     | exit     |
| 94KL13X       | 8    | 23     | entrance |
| 94KL13X       | 10   | 18     | exit     
```

```SQL
+--------+-------+----------------+-----------------+---------------+
|   id   | name  |  phone_number  | passport_number | license_plate |
+--------+-------+----------------+-----------------+---------------+
| 243696 | Barry | (301) 555-4174 | 7526138472      | 6P58WS2       |
+--------+-------+----------------+-----------------+---------------+
```

Okay we got a match!
```SQL
| 514354    | Diana   | 322W7JE       | 3592750733  | (770) 555-1861 |
```

With the data gained from Bakery_security_logs
```SQL
| 322W7JE       | 8    | 36     | entrance |
| 322W7JE       | 10   | 23     | exit     |
```
She must be the thief
Diana is the thief! Nope, It's bruce
Kelsey is the accomplice!
```SQL
+--------+--------+----------------+-----------------+---------------+
|   id   |  name  |  phone_number  | passport_number | license_plate |
+--------+--------+----------------+-----------------+---------------+
| 560886 | Kelsey | (499) 555-9472 | 8294398571      | 0NTHK55       |
+--------+--------+----------------+-----------------+---------------+
```

`0NTHK55` is the plate_number of the Accomplise


Edit: I was wrong, many things that I didn't look out for.
First, I ignored the evidence that the thief is going to take the earliest flight.
When I saw that the flight of Diana wasn't scheduled for evening.
Okay, so I actually got blinded by my own reasoning that I thought the accomplise was the only one who needs to take the earliest flight since my suspect accompliece was

I could have actually kept it going and quesitoned myself, Where did I go wrong?

I was under the impression that the thief and accomplice was together. So I looked for information where two cars leave the bakery together. It turns out, I was wrong. What I have no idea is, 
Oh, i'm stupid, I was stupid, why would I think that there were together if they made a call to each other? 
Also, what I didn't question is why did I not ask how the accomplice helped the thief, by escaping of course, but how. Oh, shit, basically he helped him buy a ticket. 

Okay, so this is a detective thing. I was poised by the programming mindset where "Collect all information before executing any actions". I did so execute actions but my primary motivation was to collect more information.  

Okay, so upon further investigation. I was directed by not a good info from the start, the interview details said that the thief got into the car after 10 minutes of the incident. Yet the thief already exited the bakery, 3 minutes after the incident. `10:15` was the reported accident. So either we can say that the information given by the interviewee was wrong, or either the reported time frame of the accident was wrong. Either way, we can say that using the timeframe of leaving the bakery was wrong place to begin with. 

Oh, it's the languange illetirate!
Look at this
> **_within ten minutes_**.
> 

**==WITHIN==** ten minutes, it means **less than or equal** to ten minutes
Then they are just saying any time _less than_ **or equal to** ten minutes.
This is basically where I got it all wrong! One simple not understanding of an english languange made me lead to a different answer. 
Basically, one simply mistake of an info can lead to a wrong logic.  