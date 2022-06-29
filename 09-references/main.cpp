#include <iostream>
/*
- reference is an alias to an existing variable.
- it is declared using &
- references must be initialized.
- references cannot be reassigned.
*/

int main() {
  int x = 7;
  int& y = x;
  std::cout << "x: " << x << " and reference y: " << y << std::endl;

  // changing x will also change y
  x = 5;
  std::cout << "x: " << x << " and reference y: " << y << std::endl;

  // print the memory address of variables
  std::cout << "x memory address: " << &x << " and reference y memory address: " << &y << std::endl;

  return 0;
}