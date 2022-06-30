#include <iostream>
#include <string>

/*
Pointers:
 - pointer: variable that stores memory address as value
 - pointer variables are declared with * between data type and variable name
 - pointer variables must be declared with the same data type of the variable
 - pointer variable is usually assigned with the memory address obtained by &
 - when pointer values change, the value of the original variable change as well

 Dereference:
 - when * is not used in declaration it dereferences the pointer

 nullptr:
 - pointer should always be initialized. If unsure, point to nullptr;
 - nullptr provides a type safe pointer representing the empty pointer
 */

int main() {
  std::string fruit = "apple";
  std::string* fruit_address = &fruit;  // declare a pointer

  std::cout << "name of the fruit: " << fruit << std::endl;
  std::cout << "pointer to the fruit variable: " << fruit_address << std::endl;

  *fruit_address = "oranges";  // reassign pointer
  std::cout << "name of the fruit after reassignment: " << fruit << std::endl;
  std::cout << "address of the fruit after reassignment: " << fruit_address << std::endl;
  std::cout << "dereference pointer to the fruit variable: " << *fruit_address << std::endl;

  // null pointer example
  std::string* color = nullptr;
  std::cout << "pointer to the color variable: " << color << std::endl;

  return 0;
}