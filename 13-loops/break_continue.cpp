#include <iostream>

int main() {
  for (int i = 1; i < 10; i++) {
    if (i == 5) {
      break;  // breaks the loop when condition is satisfied
    }
    std::cout << i;
  }
  std::cout << std::endl;

  for (int i = 1; i < 10; i++) {
    if (i == 5) {
      continue;  // skips the iteration when condidtion is satisfied
    }
    std::cout << i;
  }
  std::cout << std::endl;

  return 0;
}
