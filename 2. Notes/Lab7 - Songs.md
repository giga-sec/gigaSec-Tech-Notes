

# Lab7 - Songs
Created:  [[2022-07-29]]
Tags: #fleeting 

---
Understanding
Provided to you is a file called `songs.db`, 
a SQLite database that stores data from [Spotify](https://developer.spotify.com/documentation/web-api/) 
-> about songs and their artists. 
-> Contains top 100 streamed songs on Spotify in 2018. 

In a terminal window,
run `sqlite3 songs.db` so that you can begin executing queries on the database.

First, when `sqlite3` prompts you to provide a query, 
type `.schema` and press enter. 
By examining those statements, you can identify the columns present in each table.

Notice that every `artist` has an `id` and a `name`. 
Notice, too, that every song has a 
`name`, 
an `artist_id` (corresponding to the `id` of the artist of the song), 
as well as values for the danceability, energy, key, loudness, speechiness (presence of spoken words in a track), valence, tempo, and duration of the song (measured in milliseconds).


You should write a single SQL query that outputs the results specified by each problem. 
Your response must take the form of a single SQL query, though you may nest other queries inside of your query. 
You **should not** assume anything about the `id`s of any particular songs or artists: 
your queries should be accurate even if the `id` of any particular song or person were different. Finally, 
each query should return only the data necessary to answer the question: 
if the problem4 only asks you to output the names of songs, for example, then your query should not also output each song’s tempo.








## References
1. 