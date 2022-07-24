# Command line arguments

Command line arguments are optional arguments passed to the `main()` function of a C++
program.

- Command line arguments are passed at the point of execution.
- The executable name is the first command line argument.
- In order to access the command line arguments, the `main()` function should be defined
with parameters.

  ```c++
  int main(int argc, char *argv[]){
    return 0;
  }
  ```

  or

  ```c++
  int main(int argc, char **argv) {
    return 0;
  }
  ```

- `argc` (argument count) is an `int` parameter containing number of command line arguments
 passed to the program.
- `argv` (argument vector) is an `array` parameter containing the values of command line
 arguments.
- command line argument values are separated using spaces.
- If the argument value needs to have spaces, enclosed it with double quotes.
- If the argument value needs to have double quotes, escape the quotes using `\`.
