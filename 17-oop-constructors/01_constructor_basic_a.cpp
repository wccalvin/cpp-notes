#include <iostream>
#include <string>

using namespace std;

class Car
{
private:
  string make;
  string model;
  int horse_power;

public:
  // Default constructor
  Car()
  {
    make = "Subaru";
    model = "WRX";
    horse_power = 258;
  }

  void summary()
  {
    cout << make + " " + model + " has " << horse_power << " hp." << endl;
  }
};

class Fruit
{
private:
  string name;
  string taste;

public:
  // default constructor
  Fruit()
  {
    name = "Apple";
    taste = "Tart";
  }
  // constructor with parameters (method overloading)
  Fruit(string fruit, string fruit_taste)
  {
    name = fruit;
    taste = fruit_taste;
  }

  void summary()
  {
    cout << name << " tastes " << taste << ".\n";
  }
};

class Television
{
private:
  string brand;
  int screen_size;

public:
  Television(string name = "Sony", int size = 75)
  {
    brand = name;
    screen_size = size;
  }

  void summary()
  {
    cout << brand << " " << screen_size << " inches.\n";
  }

  ~Television()
  {
    cout << "Sold " << brand << endl;
  }
};

int main()
{
  // using default constructor
  Car wrx;
  wrx.summary();

  // using default constructor
  Fruit apple;
  apple.summary();

  // pass arguments to constructor (overloaded constructor)
  Fruit grapes("grapes", "sweet");
  grapes.summary();

  // using default constructor
  Television sony;
  sony.summary();

  // object to pass arguments to constructor
  Television samsung("Samsung", 85);
  samsung.summary();

  return 0;
}