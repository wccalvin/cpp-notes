# C++ Notes

- [x] [How to execute C++ program](./docs/execute.md)
- [x] [Program structure](./01-hello/readme.md)

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

Example: [01-hello](https://github.com/wccalvin/cpp-notes/blob/main/01-hello/main.cpp)

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

Example: [02-console](https://github.com/wccalvin/cpp-notes/blob/main/02-console/main.cpp)

## Variables

- Declaring a variable: `type name = value;`
- Defining a variable: `type name;`
- Assigning a variable: `name = value;`
- Declaring multiple variable: `type name_one = value_one, name_two = value_two;`

  Note: same type should be used when declaring multiple variables in the same statement.

- constant variable: `const type name = value;`

  Note: constant variables values cannot be changed after initialization.

## Data types

- A variable must be assigned to the specific data type.

### Common data types

- `int` stores whole numbers without decimals.

  - memory: 4 bytes
  - range: $-2^{31}$ to $2^{31}$

    ```c++
    int num = 10;
    ```

- `double` stores floating-point numbers.

  - memory: 8 bytes
  - range: 15 decimal points

    ```c++
    double decimal = 1.23;
    ```

- `char` stores a single character surrounded by single quotes.

  - memory: 1 byte

    ```c++
    char letter = 'b';
    ```

- `string` stores sequence of characters surrounded by double quotes.

  - not a built-in data type
  - `<string>` library must be included

    ```c++
    #include <string>

    std::string text = "hello, world";
    ```

  - `string` methods

    - `std::string` comes with lot of useful string methods.

      - concatenation

        ```c++
        #include <string>

        std::string first = "foo";
        std::string last = "bar";

        std::string full_name = first + " " + last;
        ```

      - index to access the character at a specified position.

        ```c++
        #include <string>

        std::string text = "foo bar";

        // char at index 1
        // index position starts with 0
        char second_letter = text[1];
        ```

      - length to find the length of the string

        ```c++
        #include <string>

        std::string text = "foo bar foo bar";
        int length = text.length();
        ```

- `bool` stores `true` or `false` boolean values.

  - memory: 1 byte

    ```c++
    bool is_exist = true;
    ```
