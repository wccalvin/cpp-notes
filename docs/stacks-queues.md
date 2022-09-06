# Stacks and Queues

Stacks and Queues are data structure for containing ordered sets.

## Stacks

Stacks are designed to operate in a LIFO (Last In First Out) context, where elements are
inserted and extracted only from one end of the container.

```c++
#include <stack>

std::stack<int> bowls;

// adding an element
bowls.push(7);
bowls.push(5);
bowls.push(9);

// removing an element
// .pop() function removes the latest element inserted to the stack
bowls.pop();

// access an element
// .top() returns a reference to the top element in the stack without removing it
int bowl_weight = bowls.top();

// size of a stack
// .size() returns the number of elements in the stack
std::cout << bowls.size() << std::endl;

// .empty() returns a boolean value whether the stack is empty
std::cout << bowls.empty() << std::endl;
```

Note: Unlike vectors, stack access is limited to the top element and cannot use index access.

## Queues
