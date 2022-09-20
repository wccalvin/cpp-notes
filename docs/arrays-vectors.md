# Arrays and Vectors

## Arrays

In C++, arrays are the fixed collection of items of the same type.

> Syntax: `type array_name[constant number of elements]{value1, value2, ...};`

```c++
// creating an array
int numbers[5];  // array called numbers that can have 5 integer values.

// initialize values when creating an array
char caps[3] = {'A', 'B', 'C'}
```

- values can be inserted into the array one by one or when declaring the array.
- The initial values are placed between the braces `{}`.
- When the array is initialized the size of the array declared in the `[]` can be skipped.
  This implies that the array will be just big enough to contain the initialized values.
- Arrays can be modified with new value.

### Multi-dimensional Array

Since arrays are fixed collection of things, it is possible to have array of arrays or
multi-dimensional array.

- Multi-dimensional array declaration should end with `;`

## Vectors

Similar to arrays, vectors are used to store sequence of data. However, vector can
dynamically shrink and grow in size.

- elements can be added or removed from the vector after declaration.

```c++
#include <vector>

std::vector<char> alpha = {'a', 'b', 'c'};
```

### Common vector methods

- Adding an element to the end of the vector (`.push_back.(value)`)
- Removing an element from the end of the vector (`.pop_back()`) - note, `pop_back` has no return value.
- Elements in the vector can be accessed the same way as arrays.
- C++ offers two methods to access first and last element of a vector (`.front()` and `.back()`)
- Size of the vector (`.size()`)
- To check if the vector is empty (`.empty()`) - returns a boolean value.
