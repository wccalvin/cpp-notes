# Input

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
