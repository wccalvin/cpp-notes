#include <iostream>
#include <string>

int main() {
  // int
  int num = 4;
  std::cout << "type: int; value: " << num << std::endl;

  // double
  double price = 1.99;
  std::cout << "type: double; value: " << price << std::endl;

  // char
  char letter = 'a';
  std::cout << "type: char; value: " << letter << std::endl;

  // string
  std::string name = "john doe";
  std::cout << "type: string; value: " << name << std::endl;

  // boolean
  bool is_exist = true;
  is_exist = false;
  std::cout << "type: bool; value: " << is_exist << std::endl;

  // type conversion double to int
  double value = 33.55;
  int converted_value = (int)value;

  std::cout << value << " converted to " << converted_value << std::endl;

  return 0;
}