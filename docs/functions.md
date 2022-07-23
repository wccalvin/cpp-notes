# Functions

Function contains a set of instructions that are executed when it's called.

## Creating a function

```c++
void functionName() {  // declaration
  std::cout << "do something.\n";  // definition
}
```

- `void` means that function does not have a return value.
- `()` is the parameter list. Since it's empty this function takes no parameters.
- All the code inside `{}` is the function is the body of the function.

## Calling a function

A function is called by specifying the function name, followed by `()` and `;`.

```c++
int main() {
  functionName();
  return 0;
}
```

## Return value and scope

- A function that does not return a value should be declared using `void` keyword.
- For a function to return values,
  - it should be declared using the right datatype, just like variables.
  - definition should include the `return` keyword.
- variables declared inside the function are only accessible within the function.

## Function parameters

Parameters are variables that acts as placeholders for values to be passed to a function.

### Parameters

- Function parameters are defined within the parentheses `()` after the function name.
- Each parameter should be defined with a *name* and *data type*.

### Arguments

- Function argument is a value that is passed to the function.
- Argument must be of the same data type as the parameter.

### Multiple parameters

- Functions can have more than one parameters.
- Arguments in the function call must include the same number of parameters.
- Corresponding arguments must be passed in the same order.

### Default parameters

- Default parameters make it possible to call a function without including all the
arguments.

- When defining a function with multiple parameters, all default parameters should follow
any non-default parameters.
