#include <iostream>

int main()
{
  // use single-quotes to initialize char; only one char allowed with this type
  char firstLetter = 'a'; // example of variable declaration
  std::cout << "char value:" << firstLetter << std::endl;

  int count; // example of variable definition
  count = 0; // example of variable assignment
  std::cout << "int value: " << count << std::endl;

  // multiple variable declaration
  char a = 'a', b = 'b', c = 'c';
  std::cout << "multiple variable declaration: " << a << b << c << std::endl;

  //   constant variable declaration
  const double pi = 3.14;
  std::cout << "constant value: " << pi << std::endl;

  return 0;
}