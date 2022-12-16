#include <iostream>

int main()
{
  int a = 10;
  int b = 12;

  // add
  int sum = a + b;
  std::cout << "a + b = " << sum << std::endl;

  // subtract
  int diff = b - a;
  std::cout << "b - a = " << diff << std::endl;

  // multiply
  int product = a * b;
  std::cout << "a * b = " << product << std::endl;

  // divide
  int quotient = b / a;
  std::cout << "b / a = " << quotient << std::endl;

  // modulus
  int remainder = b % a;
  std::cout << "b % a = " << remainder << std::endl;

  return 0;
}