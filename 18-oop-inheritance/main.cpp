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

// base class
class Computer {
 private:
  std::string chip;
  int ram;

 public:
  Computer(std::string chip_name, int ram_value)
      : chip(chip_name), ram(ram_value) {}
};

class Laptop : public Computer {
 private:
  std::string chip;
  int ram;
  std::string brand;

 public:
  Laptop(std::string chip_name, int ram_value, std::string brand_name)
      : Computer(chip_name, ram_value), brand(brand_name), ram(ram_value), chip(chip_name) {}

  void summary() {
    std::cout << brand << " laptop has " << chip << " chip and " << ram << " GB RAM.\n";
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

  // constructor inheritance
  Laptop sony("AMD", 64, "Sony");
  sony.summary();

  return 0;
}