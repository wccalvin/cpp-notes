#include <iostream>

int main() {
  // assignment operators
  std::cout << "--- assignment operators --- " << std::endl;
  int x = 10;
  int y = 5;
  std::cout << "x: " << x << std::endl;
  std::cout << "y: " << y << std::endl;
  x += 2;
  y *= 20;
  std::cout << "x += 2: " << x << std::endl;
  std::cout << "y *= 20: " << y << std::endl;

  // relational operators
  std::cout << "--- relational operators --- " << std::endl;
  int a = 7, b = 5, c = 7;
  std::cout << "a > b: " << (a > b) << std::endl;    // true (1)
  std::cout << "a != c: " << (a != c) << std::endl;  // false (0)
  std::cout << "a == c: " << (a == c) << std::endl;  // true (1)
  std::cout << "b >= a: " << (b >= a) << std::endl;  // false (0)

  // logical operators
  std::cout << "--- logical operators --- " << std::endl;
  bool is_true = true, is_false = false;
  std::cout << "true && false: " << (is_true && is_false) << std::endl;      // false (0)
  std::cout << "true || false: " << (is_true || is_false) << std::endl;      // true (1)
  std::cout << "!true: " << (!is_true) << std::endl;                         // false (0)
  std::cout << "!(true && false): " << !(is_true && is_false) << std::endl;  // true (1)

  return 0;
}