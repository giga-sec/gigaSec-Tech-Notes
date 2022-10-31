[[CSS]]

# CSS Values and Units
Created:  [[2022-10-09]]

---
CSS Values are often called **Data Types** in CSS. This is basically a property value
Syntax: `<color>`


### [`<integer>`](https://developer.mozilla.org/en-US/docs/Web/CSS/integer)
Is a whole number such as `1024` or `-55`.


### [`<number>`](https://developer.mozilla.org/en-US/docs/Web/CSS/number)
represents a decimal number — For example, `0.255`, `128`, or `-1.2`.


#### [`<dimension>`](https://developer.mozilla.org/en-US/docs/Web/CSS/dimension) data type
Is a `<number>` with a unit attached to it -- For example, `45deg`, `5s`, or `10px`. `<dimension>` 

##### `<length>` data type units
[[Two types of length data type units used in CSS]]


### [`<percentage>`](https://developer.mozilla.org/en-US/docs/Web/CSS/percentage)`
For example, `50%`.


Percentages are always set relative to some other value. You need to be aware what it is a percentage of
For example, 
    IF -> you set an element's `font-size` as a percentage, 
    THEN -> it will be a percentage of the parent's `font-size`
    IF -> you set an element's `width` as a percentage, 
    THEN -> it will be a percentage of the parent's `width` 





### `<color>` data type
Can be any of the following:
- `Color keywords` ***[[identifiers]]*** such as `purple`, `red` 
- Hexadecimal Values

- `rgb(0-255, 0-255, 0-255)`  
- `rgba(0-255, 0-255, 0-255, 0-1)` last value is for transparency values


### `<image>` data type
- `url(filename.png)`

### `<position>` data type
Can be any of the following:
- top
- left
- bottom
- right
- center

Typically consists of two values
1. first sets the position HORIZONTALLY, 
2. second sets position VERTICALLY

### Strings data type
Quoted in `""`
```CSS
.box::after {
  content: "This is a string. I know because it is quoted in the CSS."
}
```


### Functions data type
Can be any of the following:
- `rgb()`
- `url()`
- `calc()`

