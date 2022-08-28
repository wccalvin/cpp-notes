#include <iostream>
#include <string>

// simple example using public access specifier
// base class
class Animal {
 public:
  std::string group;
  std::string gender;
  int age;
};

// derived class
class Dog : public Animal {
 public:
  std::string breed;

  void sound() {
    std::cout << "Woof!\n";
  }
};

int main() {
  // simple example using public access specifier
  Dog bingo;
  bingo.group = "mammals";
  bingo.breed = "Jack Russell Terrier";

  std::cout << bingo.group << std::endl;
  std::cout << bingo.breed << std::endl;
  bingo.sound();

  return 0;
}