#include <iostream>
#include <string>

int main() {
  // basic example of class definitions
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

  // example of access control
  class Fruit {
   private:
    std::string name;

   public:
    double price = 6.79;

    std::string getName() {
      return name;
    }

    void setName(std::string str) {
      name = str;
    }
  };

  // create an object
  Dog caylie;
  caylie.breed = "cavapoo";
  caylie.age = 8;
  caylie.name = "Caylie";
  caylie.bark();
  caylie.info();

  // create multiple objects (another object from the same class)
  Dog lily;
  lily.breed = "havanese";
  lily.age = 8;
  lily.name = "Lily";
  lily.info();

  // object with access control
  Fruit fruit;
  fruit.setName("Apple");
  std::string fruit_name = fruit.getName();
  std::cout << "Fruit: " << fruit_name << std::endl;
  std::cout << "Price: " << fruit.price << std::endl;

  return 0;
}