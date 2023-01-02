[[HTML - Hypertext Markup Language]]

# Closed Captions in HTML
Created:  [[2022-09-18]]
Tags: #fleeting 

---
Use both of the following:
- [WebVTT](https://developer.mozilla.org/en-US/docs/Web/API/WebVTT_API) file format 
- the [`<track>`](https://developer.mozilla.org/en-US/docs/Web/HTML/Element/track) element.

```HTML
<video>
  <track
    label="English"
    kind="subtitles"
    srclang="en"
    src="media/subtitles_en.vtt"
    default>
</video>
```

[Captions and subtitles are not the same thing](https://web.archive.org/web/20160117160743/http://screenfont.ca/learn/): they have significantly different audiences, and convey different information, and it is recommended that you read up on the differences if you are not sure what they are. They are however implemented in the same way technically, so the material in this article will apply to both.

---
## Lingo:
"**Transcribe**" means "to write down spoken words as text." 
The resulting text is a "**transcript**."

**Subtitles**
- Translated spoken words to a specific languange in text

**Captions**
- Synchronized transcriptions of dialog or descriptions of significant sounds

**Timed descriptions**
- Text which should be spoken by the media player 
---

## `WebVTT` file format
These text strings are called `cues`
The most common cues are:
- **subtitles**
- **captions**
- **timed descriptions**

Text tracks also help you with [[MOC Search Engine Optimization]] since search engines especially thrive on text. 
Text tracks even allow search engines to link directly to a spot partway through the video.

---
Adding subtitles











