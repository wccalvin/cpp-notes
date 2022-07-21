#include <iostream>

// function with no return values
void hello() {
  std::cout << "Hello, from function.\n";
}

// function with return values
int luckNumber() {
  int num = 7;
  return num;
}

int main() {
  hello();

  int num = luckNumber();
  std::cout << num << std::endl;

  return 0;
}