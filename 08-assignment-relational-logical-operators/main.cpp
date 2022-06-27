#include <iostream>

int main() {
  // assignment operators
  int x = 10;
  int y = 5;
  std::cout << "x: " << x << std::endl;
  std::cout << "y: " << y << std::endl;
  x += 2;
  y *= 20;
  std::cout << "x += 2: " << x << std::endl;
  std::cout << "y *= 20: " << y << std::endl;
  return 0;
}