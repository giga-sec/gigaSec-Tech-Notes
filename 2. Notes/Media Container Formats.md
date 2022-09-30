[[HTML]]

# Media Container Formats
Created:  [[2022-09-18]]
Tags: #fleeting 

---
More: https://developer.mozilla.org/en-US/docs/Web/Media/Formats/Containers


They define a structure of 
- how the audio / video are stored, 
- metadata describing the media, 
- what codecs are used to encode its channels  #myquestion What is a channel?


The format of audio and video media files is defined in two parts 
(three if a file has both audio and video in it, of course): 
- the audio / video codecs used 
- the media container format (or file type) used.  


The most commonly used containers for video on the web are:
- MPEG-4 (MP4), 
- QuickTime Movie (MOV), 
- Wavefile Audio File Format (WAV). 

However, you may also encounter media formats such as:
- MP3, Ogg, WebM, AVI, and other formats. 


Not all of these media formats are broadly supported by browsers, however; 
some combinations of container and codec are sometimes given their own file extensions 
and MIME types as a matter of convenience, 
or because of their ubiquity. 
^ For example:
An `Ogg` file with only an Opus audio track is sometimes referred to as an `.opus` file, 
But it's still actually just an `Ogg` file.


Some file extensions have *nicknames* for example:
- `.ogg` with opus audio track is referred to as `.opus`. But it's still just an `.ogg` file






---
[WebRTC](https://developer.mozilla.org/en-US/docs/Web/API/WebRTC_API) does not use a container at all. 
Instead, it streams the encoded audio and video tracks directly from one peer to another using [`MediaStreamTrack`](https://developer.mozilla.org/en-US/docs/Web/API/MediaStreamTrack) objects to represent each track. 
See [Codecs used by WebRTC](https://developer.mozilla.org/en-US/docs/Web/Media/Formats/WebRTC_codecs) for information about codecs commonly used for making WebRTC calls, as well as browser compatibility information around codec support in WebRTC.

---















https://developer.mozilla.org/en-US/docs/Web/Media/Formats/Containers