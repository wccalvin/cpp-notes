#include <iostream>
#include <string>

using namespace std;

class Laptop
{
private:
  string brandName;
  bool isIntel;
  int rating;

public:
  // setter
  void setBrandName(string name)
  {
    brandName = name;
  }

  string getBrandName()
  {
    return brandName;
  }

  // default constructor
  Laptop()
  {
    setBrandName("xxx"); // placeholder for education purposes
    isIntel = false;
    rating = 100;
    cout << "no args constructor called.\n";
  }

  // overloaded constructor
  Laptop(string brand)
  {
    setBrandName(brand);
    cout << brand << " name is set.\n";
  }

  // destructor
  ~Laptop()
  {
    cout << "destructor called. \n";
  }
};

int main()
{
  cout << "-- default constructor called --\n";
  Laptop msi;
  msi.setBrandName("MSI");
  cout << "Laptop brand: " << msi.getBrandName() << endl;

  cout << "\n-- default constructor called for this instance --\n";
  Laptop *razer = new Laptop();
  razer->setBrandName("Razer");
  cout << "Laptop brand: " << razer->getBrandName() << endl;

  cout << "\n-- overloaded constructor called with this instance --\n";
  Laptop *alienware = new Laptop("Alienware");
  cout << "Laptop brand: " << alienware->getBrandName() << endl;

  cout << "\nNote: destructor will be called once everything is out of scope.\n";

  return 0;
}