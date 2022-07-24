#include <iostream>
#include <string>

// function with no return values
void hello() {
  std::cout << "Hello, from function.\n";
}

// function with return values
int luckNumber() {
  int num = 7;
  return num;
}

// function with parameter
double celsiusTofahrenheit(int celsius) {
  return (celsius * 9 / 5) + 32;
}

// function with multiple parameters
std::string greeting(std::string name, std::string message) {
  std::string greet = message + ", " + name + "!";
  return greet;
}

// function with multiple parameters and default value
std::string favCode(std::string name, std::string language = "C++") {
  std::string msg = "Hello, I'm " + name + ". I like to code in " + language + ".";
  return msg;
}

// function with reference as argument values
void swap(int &a, int &b) {
  int x = b;
  b = a;
  a = x;
}

// function overloading
int add(int a, int b) {
  return a + b;
}

double add(double a, double b) {
  return a + b;
}

int add(int a, int b, int c) {
  return a + b + c;
}

int main() {
  // function call with no return values
  hello();

  // function call with return values
  int num = luckNumber();
  std::cout << num << std::endl;

  // function call with parameters
  int temperature_in_celsius = 41;
  double temperature_in_fahrenheit = celsiusTofahrenheit(temperature_in_celsius);

  // function call with no parameters
  std::cout << "Celsius: " << temperature_in_celsius << std::endl;
  std::cout << "Fahrenheit: " << temperature_in_fahrenheit << std::endl;

  // function call with multiple parameters
  std::string msg = greeting("Clayton", "Hello");
  std::cout << msg << std::endl;

  // function call with multiple parameters and default value
  std::string msg_default = favCode("Clayton");
  std::string msg_python = favCode("Clayton", "Python");

  std::cout << msg_default << std::endl;
  std::cout << msg_python << std::endl;

  // function call with arguments as reference
  int i = 6;
  int j = 9;

  std::cout << "Before swap.\n";
  std::cout << "value of i: " << i << std::endl;
  std::cout << "value of j: " << j << std::endl;

  swap(i, j);

  std::cout << "After swap.\n";
  std::cout << "value of i: " << i << std::endl;
  std::cout << "value of j: " << j << std::endl;

  // function call for overloaded functions
  int a = 5;
  int b = 10;
  int c = 15;
  double d = 12.5;
  double e = 18.25;

  int add_two_int = add(a, b);
  double add_two_double = add(d, e);
  int add_three_int = add(a, b, c);

  std::cout << a << " + " << b << " = " << add_two_int << std::endl;
  std::cout << d << " + " << e << " = " << add_two_double << std::endl;
  std::cout << a << " + " << b << " + " << c << " = " << add_three_int << std::endl;

  return 0;
}