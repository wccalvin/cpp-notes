# Variables

- A variable is an abstraction for a memory location. This allows for meaningful names and not memory address.
- Variable must be declared before they are used.
- Declaring a variable: `type name = value;`
- Defining a variable: `type name;`
- Assigning value to a variable: `name = value;`
- Declaring multiple variables in a statement (same type): `type name_one = value_one, name_two = value_two;`

> Note: same type should be used when declaring multiple variables in the same statement.

- constant variable: `const type name = value;`

> Note: constant variables values cannot be changed after initialization.

## Good practices

- Chose meaningful names over short form.
- Be consistent with the styling (cameCase or snake_case)
- Never use variables before initializing them.
- Declare variables only when you need them.

## Examples

```c++
// example of uninitialized variable
int x;
```

```c++
// Example of initialized variable
int x = 5;  // C-like
int y {7};  // C++ 11 and above
```
