#include <iostream>

int main() {
  int scores[4] = {28, 3, 10, 3};
  std::cout << scores << std::endl;  // memory address printed?

  // using loop to print values
  for (int i = 0; i < 4; i++) {
    std::cout << scores[i];
  }
  std::cout << std::endl;

  // initialize without length declaration
  char abc[] = {'A', 'B', 'C'};
  for (int i = 0; i < 3; i++) {
    std::cout << abc[i];
  }
  std::cout << std::endl;

  // reassign array values
  abc[0] = 'X';
  // abc[3] = 'Z';  // array bounds error
  abc[1] = 'Y';
  for (int i = 0; i < 3; i++) {
    std::cout << abc[i];
  }
  std::cout << std::endl;

  // two dimensional array (example of multi-dimensional array)
  int table_values[3][2] = {
      {2, 5},
      {3, 7},
      {8, 2}};

  // loop through two dimensional array
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      std::cout << table_values[i][j];
    }
    std::cout << std::endl;
  }
  return 0;
}