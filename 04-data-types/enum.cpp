#include <iostream>

using namespace std;

enum SWITCH
{
  ON,
  OFF
};

int main()
{
  SWITCH choice = ON;

  if (choice == 0)
  {
    cout << "Switch is ON.\n";
  }
  else if (choice == OFF)
  {
    cout << "Switch is OFF.\n";
  }
  else
  {
    cout << "Switch state is UNKNOWN";
  }

  return 0;
}