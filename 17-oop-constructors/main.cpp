#include <iostream>
#include <string>

class Car {
 private:
  std::string make;
  std::string model;
  int horse_power;

 public:
  // Default constructor
  Car() {
    make = "Subaru";
    model = "WRX";
    horse_power = 258;
  }

  void summary() {
    std::cout << make + " " + model + " has " << horse_power << " hp." << std::endl;
  }
};

class Fruit {
 private:
  std::string name;
  std::string taste;

 public:
  // default constructor
  Fruit() {
    name = "Apple";
    taste = "Tart";
  }
  // constructor with parameters (method overloading)
  Fruit(std::string fruit, std::string fruit_taste) {
    name = fruit;
    taste = fruit_taste;
  }

  void summary() {
    std::cout << name << " tastes " << taste << ".\n";
  }
};

int main() {
  // object using default constructor
  Car wrx;
  wrx.summary();

  // object using default constructor
  Fruit apple;
  apple.summary();

  // object to pass arguments to constructor
  Fruit grapes("grapes", "sweet");
  grapes.summary();

  return 0;
}