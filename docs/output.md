# Output

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
