# Arrays

In C++, arrays are the fixed collection of items of the same type.

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

## Multi-dimensional Array

Since arrays are fixed collection of things, it is possible to have array of arrays or
multi-dimensional array.

- Multi-dimensional array declaration should end with `;`
