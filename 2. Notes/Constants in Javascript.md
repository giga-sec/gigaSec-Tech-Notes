[[Javascript]]

# Constants in Javascript
Created:  [[2022-10-15]]

---
_Use `const` when you can, and use `let` when you have to._

```JS
const count = 1;
```

**==Note==** Important to read
that although a constant in JavaScript must always name the same value, you can change the content of the value that it names. This isn't a useful distinction for simple types like numbers or booleans, but consider an object:

```JS
const bird = { species : 'Kestrel'};
console.log(bird.species);  // "Kestrel"
```

You can update, add, or remove properties of an object declared using `const`, because even though the content of the object has changed, the constant is still pointing to the same object:
```JS
bird.species = 'Striated Caracara';
console.log(bird.species);  // "Striated Caracara"
```

- case sensitive (`myage` is different from `myAge`)
- no numbers at start of variables
- Don't use underscores at the start of variable names — this is used in certain JavaScript constructs to mean specific things, so may get confusing.
- [[Dynamically typed language]]











