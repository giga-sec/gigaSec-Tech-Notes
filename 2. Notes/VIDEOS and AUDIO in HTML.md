[[HTML]]

# VIDEOS and AUDIO in HTML
Created:  [[2022-09-19]]
Tags: #fleeting 

---
Videos and Audio can be implemented with the following:
- `<video>`  `</video>`
- `<audio>`  `</audio>`
- JavaScript API


## `<audio>`
Alt text in `<audio>` is called "Fallback Content"
Just put the alt text in between of the opening and closing tag

Optional Attributes for `<audio>`
All attributes in `<video>` works in here except:
- `width=""` / `height=""`
- `poster=""`

## `<video>`
Must have [[Attributes inside of tags]] for `<video>` 
- `src=""` (multiple sources)
- `controls` [[Boolean Attributes]]
- `type=""` for [[How to implement multiple media formats]]
```HTML
<video controls>
  <source src="rabbit320.mp4" type="video/mp4" />
  <source src="rabbit320.webm" type="video/webm" />
</video>
```

Optional attributes of `<video>`
`poster=""` For using custom thumbnail before video is played

`preload=""` Used for buffering large files; it can take one of three values: 


Alt text in `<video>` is called "Fallback Content"
Just put the alt text in between of the opening and closing tag
```HTML
<video src="rabbit320.webm" controls>
  <p>
    Your browser doesn't support HTML video. Here is a
    <a href="rabbit320.webm">link to the video</a> instead.
  </p>
</video>
```


