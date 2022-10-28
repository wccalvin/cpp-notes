#include <iostream>
#include <string>

using namespace std;

int main()
{
  // basic example of class definitions
  class Dog
  {
    // public keyword is an access specifier. public allows the members of the class to
    // be accessed from outside of the class
  public:
    string breed;
    string name;
    int age;

    void bark()
    {
      cout << name << " says woof woof!\n";
    }

    void info()
    {
      cout << name << " is a " << breed << " and " << age << " weeks old."
           << endl;
    }
  }; // semi-colon is required

  // example of access control
  class Fruit
  {
  private:
    string name;

  public:
    double price = 6.79;

    string getName()
    {
      return name;
    }

    void setName(string str)
    {
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

  // create another object from the same class
  Dog lily;
  lily.breed = "havanese";
  lily.age = 8;
  lily.name = "Lily";
  lily.info();

  // object with access control
  Fruit fruit;
  fruit.setName("Apple");
  string fruit_name = fruit.getName();
  cout << "Fruit: " << fruit_name << endl;
  cout << "Price: " << fruit.price << endl;

  return 0;
}