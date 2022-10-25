#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*
- reference is an alias to an existing variable.
- it is declared using &
- references must be initialized.
- references cannot be reassigned.
- think of reference as a constant pointer that is automatically dereferenced.
*/

// function prototype
void display_vector(vector<string>);

int main()
{
  cout << "-- intialize variable and reference --\n";
  int x{7};
  int &xref = x;
  cout << "x: " << x << endl;
  cout << "xref: " << xref << endl; // no dereferening needed

  // changing x will also change xref
  cout << "\n-- reassign values through variable --\n";
  x = 22;
  cout << "x after: " << x << endl;
  cout << "xref after: " << xref << endl;

  cout << "\n-- reassign values through reference --\n";
  xref = 9;
  cout << "x after: " << x << endl;
  cout << "xref after: " << xref << endl;

  // memory address of variables
  cout << "\n-- address of both x and xref --\n";
  cout << "x address: " << &x << endl;
  cout << "xref address: " << &xref << endl;

  cout << "\n-- using reference to change vector --\n";
  vector<string> colors{"red", "yellow", "blue", "white"};

  // replace white to black
  cout << "\nvector before reassignment using values: " << endl;
  display_vector(colors);

  for (auto str : colors) // values used
  {
    if (str == "white")
    {
      str = "black";
    }
  }

  cout << "\nvector after reassignment using values: " << endl;
  display_vector(colors);

  for (auto &str : colors) // references used
  {
    if (str == "white")
    {
      str = "black";
    }
  }

  cout << "\nvector after reassignment using references: " << endl;
  display_vector(colors);

  return 0;
}

void display_vector(vector<string> vec)
{
  for (auto str : vec)
  {
    cout << str << " ";
  }
  cout << endl;
}