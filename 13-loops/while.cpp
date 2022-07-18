#include <iostream>

int main() {
  int count = 5;
  while (count >= 1) {
    std::cout << count;
    count--;
  }
  std::cout << std::endl;

  return 0;
}