# C++ Notes

## How to execute C++ program

`g++ main.cpp -o hello`

## Program Structure

```c++
#include <iostream>

int main() {
  std::cout << "Hello there, first c++ program" << std::endl;
  return (0);
}
```

- `#` in `#include <iostream>` is a preprocessor directive and it's processed
  before actual compilation.
- `include` keyword is used to import libraries.
  - standard library names are enclosed in `<>`
  - user-defined library names are enclosed in `""`
- every c++ program has a main function which serves as a entry point.

## Comments

- single line comments `// this is a one line comment`
- multi line comments

```c++
/*
this is a multi-line comment
1 ...
2 ...
*/
```

## Output

- `iostream` stands for "input/output stream".
- It is part of C++ standard library
  `std::cout` stands for "character output". It is used with insertion
  operator `<<`.
- Multiple insertion operators can be used together on the same line.

```c++
std:cout << "Hi there, " << "this is second insertion operator.";
```

- `std::cout` does not automatically insert a new line. It should be deliberately added
  using `\n` or `<< std::endl` (it stands for "end line")

## Input

- `std::cin` stands for "character input". It is used with extration operator `>>`.
- Below code gives and example of `std::cin` usage

```c++
int x;
std::cin >> x;  // stores user input in variable x as declared above
```

- it is possible to read multiple values in a single line.

```c++
int x, y;
std::cin >> x >> y;
std::cout << "Recieved values: " x << "and " << y;
```
