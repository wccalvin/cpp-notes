#include <iostream>

int main() {
  int cost = 20;
  do {
    std::cout << "Too expensive.\n";
  } while (cost > 30);

  return 0;
}