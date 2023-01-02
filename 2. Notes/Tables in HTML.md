[[HTML - Hypertext Markup Language]]

# Tables in HTML
Created:  [[2022-09-26]]

---
A successful HTML table should enhance the experience of sighted and visually impaired users alike.
**==HTML tables should only be used for tabular data and nothing else only.==**


A table makes up the following elements:
- `<table> </table>` 
    - `<tr> </tr>` - table row
        1. `<th>` - table header (like a title for the column)
        2. `<td> </td>` - table data


Attributes for `<th>`, `<td>`
- `colspan="2"` Unitless number, means span two columns 
- `rowspan=""` Unitless number



### Provide captions to tables
`<caption>` `</caption>` inside of table
- visible to eyes 
`<caption>` element let's the screen readers read it first before deciding if whether the table is worth reading or not.
```HTML
<table>
  <caption>
    Dinosaurs in the Jurassic period
  </caption>
</table>
```

### Adding structure to tables to be modifiable by css 
Mark up header, footer and body section
All of this must be under the `<tr>` table row tag
- `<thead>` - put it outside of  `<th>`
- `<tfoot>` - makes the `<tr>`, row go at the bottom

`<tbody>` - this will be the rest of the content.

These elements don't make the table any more accessible to screen reader users, and don't result in any visual enhancement on their own. They are however very useful for styling and layout — acting as useful hooks for adding CSS to your table.

`<tbody>` is always included in every table, implicitly if you don't specify it in your code. Meaning every HTML will automatically nest `<tr>`, `<td>` with `<tbody>`

### Tips and Tricks
Automatically apply CSS properties to specific tables 
Use the following to group stylings of tables inside of `<table>` `</table>`
- `<colgroup> </colgroup>`  -
- `<col/>`

Attributes of `<col/>`
- `style=""`  css styling properties
- `span=""`

Example:
```HTML
<table>
    <colgroup>
      <col />  # 1st header won't be colored
      <col style="background-color: yellow" /> # 2nd header yellow
    </colgroup>
    <tr>
      <th>Data 1</th> # 1st Header -> no color
      <th>Data 2</th> # 2nd Header -> yellow
    </tr>
</table>
```




### [[Make HTML Tables be readable for  screen readers]]