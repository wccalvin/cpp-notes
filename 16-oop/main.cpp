#include <iostream>
#include <string>

int main() {
  // define class name starting with caps
  class Dog {
    // public keyword is an access specifier. public allows the members of the class to
    // be accessed from outside of the class
   public:
    std::string breed;
    std::string name;
    int age;

    void bark() {
      std::cout << name << " says woof woof!\n";
    }

    void info() {
      std::cout << name << " is a " << breed << " and " << age << " weeks old."
                << std::endl;
    }
  };  // semi-colon is required

  // create an object
  Dog caylie;
  caylie.breed = "cavapoo";
  caylie.age = 8;
  caylie.name = "Caylie";
  caylie.bark();
  caylie.info();

  // create multiple objects
  Dog lily;
  lily.breed = "havanese";
  lily.age = 8;
  lily.name = "Lily";
  lily.info();

  return 0;
}