# Data types

- A variable must be assigned to the specific data type.

## Common data types

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
