[[HTML]]

# Tables in HTML
Created:  [[2022-09-26]]

---
HTML tables are handled well by accessibility tools such as screen readers, so a successful HTML table should enhance the experience of sighted and visually impaired users alike.

for tables to be effective on the web, you need to provide some styling information with [CSS](https://developer.mozilla.org/en-US/docs/Learn/CSS), as well as good solid structure with HTML


HTML tables should only be used for tabular data

- `<table> </table>` 
    - `<tr> </tr>` - table row
        1. `<th>` - table header (like a title for the column)
        2. `<td> </td>` - table data


Attributes for `<tr>`, `<th>`, `<td>`
- `colspan="2"` Unitless number, means span two columns 
- `rowspan=""` Unitless number



Tips and Tricks
Use the following to group stylings of tables inside of `<table>` `</table>`
- `<colgroup> </colgroup>` 
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




### `<caption>` `</caption>` inside of table
- visible to eyes 
`<caption>` element let's the screen readers read it first before deciding if whether the table is worth reading or not.
```HTML
<table>
  <caption>
    Dinosaurs in the Jurassic period
  </caption>
</table>
```

## Adding structure to tables to be modifiable by css 
Mark up header, footer and body section
All of this must be under the `<tr>` table row tag
- `<thead>` - for `<th>`
- `<tfoot>` - makes the `<tr>`, row go at the bottom

`<tbody>` - this will be the rest of the content.

These elements don't make the table any more accessible to screen reader users, and don't result in any visual enhancement on their own. They are however very useful for styling and layout — acting as useful hooks for adding CSS to your table.

`<tbody>` is always included in every table, implicitly if you don't specify it in your code. Meaning every HTML will automatically nest `<tr>`, `<td>` with `<tbody>`

---
It is possible to nest tables however not advisable as it just make things confusing



[[Make HTML Tables be readable for  screen readers]]
