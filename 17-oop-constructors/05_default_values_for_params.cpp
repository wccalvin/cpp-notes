#include <iostream>
#include <string>

using namespace std;

class Dog
{
private:
  string name;
  int age;

public:
  Dog(string n, int a);
  string getDogName();
  int getDogAge();
};

Dog::Dog(string n = "", int a = 0)
    : name{n}, age{a} {}

string Dog::getDogName() { return name; }
int Dog::getDogAge() { return age; }

int main()
{
  Dog dog_a;
  Dog dog_b("halo");
  Dog dog_c("rover", 2);

  cout << dog_a.getDogName() << " the dog is " << dog_a.getDogAge() << " years old.\n";
  cout << dog_b.getDogName() << " the dog is " << dog_b.getDogAge() << " years old.\n";
  cout << dog_c.getDogName() << " the dog is " << dog_c.getDogAge() << " years old.\n";
  return 0;
}
