# Program Structure

```c++
#include <iostream>

int main() {
  std::cout << "Hello, world!" << std::endl;
  return (0);
}
```

- `#` in `#include <iostream>` is a preprocessor directive and it's processed
  before actual compilation.
- `include` keyword is used to import libraries.
  - standard library names are enclosed in `<>`
  - user-defined library names are enclosed in `""`
  - the line is not terminated with `;`
- every c++ program has a main function which serves as a entry point.
