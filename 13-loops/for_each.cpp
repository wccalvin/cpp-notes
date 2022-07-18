#include <iostream>

int main() {
  // auto keyword to let C++ deduce the type
  int numbers[5] = {5, 4, 3, 2, 1};
  for (auto num : numbers) {
    std::cout << num;
  }
  std::cout << std::endl;

  return 0;
}