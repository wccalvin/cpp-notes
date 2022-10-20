#include <iostream>

using namespace std;

/*
1. pointers to constant values
2. constant pointers
3. constant pointers to constants

Ref: https://www.learncpp.com/cpp-tutorial/pointers-and-const/
*/

int main()
{
  // non-const behavior
  cout << "-- non-const pointer behavior --\n";
  cout << "1. change the address of the pointer - allowed\n";

  int x{2};
  int *ptr{nullptr};
  cout << "pointer value before assignment: " << ptr << endl;
  ptr = &x;
  cout << "pointer value after address reassignment - " << ptr << ": " << *ptr << endl;

  cout << "2. change the value of the pointer - allowed\n";

  *ptr = 10;
  cout << "pointer value after address reassignment - " << ptr << ": " << *ptr << endl;

  // 1. pointers to constant values (constant pointers reassigned)
  cout << "\n-- pointers to constant value --\n";
  int y{5};
  int z{8};
  const int *ptr_y{&y};
  cout << "starting pointer address and value - " << ptr_y << ": " << *ptr_y << endl;

  ptr_y = &z;
  cout << "pointer address and value after reassignment - " << ptr_y << ": " << *ptr_y << endl;

  // *ptr_y = 10; // error: assignment of read-only location ‘* ptr_y’
  z = 10; // work-around to change value since reassignment of pointer to value is disallowed

  cout << "pointer address and value after reassignment (with work-around) - " << ptr_y << ": " << *ptr_y << endl;
}