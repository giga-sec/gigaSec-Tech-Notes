[[Make HTML Tables be readable for  screen readers]]


# Tables for screen readers - scope attribute
Created:  [[2022-09-29]]

---
`scope=""` for `<th>` element
Tells screen readers which cell it belongs to, either row or column

Example of `scope` with columns and rows
```HTML
<thead>
  <tr>
    <th scope="col">Purchase</th>
    <th scope="col">Location</th>
  </tr>
  <tr>
    <th scope="row">Haircut</th>
    <td>Hairdresser</td>
  </tr>
</thead>
```


### Multiple Headings using scope
`scope` has values to make multiple headings possible
- `colgroup`  - groups columns
- `rowgroup`  - groups rows

Example:
```Table
    "Clothes"          (A heading)
     -> "Trousers",    (Subheading)
     -> "Skirts",      (Subheading)
     -> "Dresses".     (Subheading)
```
`"Clothes"` should get an attribute of `scope="colgroup"`, 
The others would get an attribute of `scope="col"`.












