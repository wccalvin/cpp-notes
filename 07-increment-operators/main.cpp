#include <iostream>

/*
- pre-increment: value stored in the variable is incremented before returning the new value.
- post-increment: copy of the value is made first, then the value is incremented and the
                  copy is used for assignment.
- same logic holds good for decrement (--)
*/

int main()
{
  // pre-increment example
  std::cout << "-----------------" << std::endl;
  std::cout << "Example of pre-increment ++x" << std::endl;
  int x = 5;
  std::cout << "x = " << x << std::endl;
  int y = ++x;
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "-----------------" << std::endl;

  // post-increment example
  std::cout << "-----------------" << std::endl;
  std::cout << "Example of post-increment x++" << std::endl;
  std::cout << "x = " << x << std::endl;
  y = x++;
  std::cout << "x = " << x << std::endl;
  std::cout << "y = " << y << std::endl;
  std::cout << "-----------------" << std::endl;

  return 0;
}