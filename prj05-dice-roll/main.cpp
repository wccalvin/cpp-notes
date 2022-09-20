#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
  // seed the random number generator
  std::srand(time(0));

  int dice_roll = (std::rand() % 6) + 1;

  std::cout << "You rolled: " << dice_roll << std::endl;
  return 0;
}