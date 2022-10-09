# Loops

Loops are used to accomplish repetitive tasks.

## while loops

It is used to repeat a block of code as long as the condition evaluates `true`.

```c++
  int count = 5;
  while (count >= 1) {
    std::cout << count;
    count--;
  }
```

## do-while loops

Similar to while loop, but it will always execute the statement at least once.

```c++
  int cost = 20;
  do {
    std::cout << "Too expensive.\n";
  } while (cost > 30);
```

Unlike the while loop, a semi-colon needs to be placed to terminate the statement.

## for loops

It is used when the number of times the code block to be executed is known.

The `for` loop statement is made of three parts.

- initialization counter: which is executed only once at start.
- condtion: for executing the code block if true.
- increment/decrement counter: executed at the end of every iteration.

```c++
  for (int i = 5; i >= 1; i--) {
    std::cout << i;
  }
```

## range based for loops

## for-each loops

for-each loop is useful when iterating through list-like structures such as arrays
and vectors.

```c++
  int numbers[5] = {5, 4, 3, 2, 1};
  for (int num : numbers) {
    std::cout << num;
  }
```

## break keyword

`break` keyword terminates the loop.

## continue keyword

`continue` keyword, skips over the iteration based on condition.
