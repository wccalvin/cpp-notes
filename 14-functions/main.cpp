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

double celsiusTofahrenheit(int celsius) {
  return (celsius * 9 / 5) + 32;
}

int main() {
  hello();

  int num = luckNumber();
  std::cout << num << std::endl;

  int temperature_in_celsius = 41;
  double temperature_in_fahrenheit = celsiusTofahrenheit(temperature_in_celsius);

  std::cout << "Celsius: " << temperature_in_celsius << std::endl;
  std::cout << "Fahrenheit: " << temperature_in_fahrenheit << std::endl;
  return 0;
}