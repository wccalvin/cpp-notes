#include <iostream>
#include <string>

using namespace std;

class Dog
{
private:
  string name;
  int age;

public:
  Dog();
  Dog(string n);
  Dog(string n, int a);
  string getDogName();
  int getDogAge();
};

// using constructor initialization instead of reassigning
Dog::Dog()
    : name{""}, age{0} {}

Dog::Dog(string n)
    : name{n}, age{0} {}

Dog::Dog(string n, int a)
    : name{n}, age{a} {}

string Dog::getDogName() { return name; }
int Dog::getDogAge() { return age; }

int main()
{
  Dog dog_a;
  Dog dog_b("halo");
  Dog dog_c("rover", 2);

  cout << dog_c.getDogName() << " the dog is " << dog_c.getDogAge() << " years old.\n";
  return 0;
}
