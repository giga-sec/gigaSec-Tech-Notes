[[Make HTML Tables be readable for  screen readers]]

# Tables for screen readers - id and header attributes
Created:  [[2022-09-29]]

---
The ID and headers attribute
An alternative for `scope` for more precise assignment of rows and columns

**Note:** This method creates very precise associations between headers and data cells 
It uses **a lot** more markup and does not leave any room for errors. 
The `scope` approach is usually enough for most tables. 
[[Tells screen readers if cell belongs to either row or column - Scope attribute]]


The following tells you how to use `id`
1.  You add a unique `id` to each `<th>` element.
2.  You add a `headers` attribute to each `<td>` element. 
    Each `headers` attribute has to contain a list of the `id`s of all the `<th>` elements that act as a header for that cell, separated by spaces.


This gives your HTML table 
    an explicit definition of the position of each cell in the table, 
    defined by the header(s) for each column / row it is part of, 
    kind of like a spreadsheet. 
For it to work well, the table really needs both column and row headers.

Returning to our spending costs example, the previous two snippets could be rewritten like this:
```HTML
<thead>
  <tr>
    <th id="purchase">Purchase</th>
    <th id="location">Location</th>  # This is a column
  </tr>
</thead>
<tbody>
  <tr>
    <th id="haircut">Haircut</th> # This is a row
    <td headers="location haircut">Hairdresser</td>
  </tr>

  …
</tbody>
```





















