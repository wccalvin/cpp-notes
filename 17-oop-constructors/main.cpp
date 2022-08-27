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

int main() {
  // object using default constructor
  Car wrx;
  wrx.summary();

  return 0;
}