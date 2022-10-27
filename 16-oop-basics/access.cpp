#include <iostream>
#include <string>

using namespace std;

class AccessExample
{

public:
  // accessible everywhere
  string text;
  int number;

private:
  // accessible only by members or friends of class
  string greeting;
  int rank;

protected:
  // same as private; except allows inheritance
  string message;
};

int main()
{
  cout << "-- public access --\n";
  AccessExample publicAccess;
  publicAccess.text = "foo";
  cout << "text: " << publicAccess.text << endl;

  AccessExample *publicAccessPtr{nullptr};
  publicAccessPtr = new AccessExample;
  publicAccessPtr->number = 99;
  cout << "number: " << publicAccessPtr->number << endl;

  cout << "\n-- private access --\n";
  AccessExample privateAccess;
  // privateAccess.greeting = "foo";  // error: private within context

  return 0;
}
