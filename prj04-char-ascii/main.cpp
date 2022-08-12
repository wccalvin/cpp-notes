#include <iostream>

int main() {
  char given_char;
  int ascii_value;

  std::cout << "Enter a character: ";
  std::cin >> given_char;

  ascii_value = (int)given_char;

  std::cout << "The ASCII value of " << given_char << " is " << ascii_value << std::endl;

  return 0;
}