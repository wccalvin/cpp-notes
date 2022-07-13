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
