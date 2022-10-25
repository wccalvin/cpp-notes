#include <iostream>

using namespace std;

/*
 * 1. uninitialized pointers
 * 2. dangling pointers
 * 3. not checking if `new` failed. Dereferencing null pointer causes crash
 * 4. Leaking memory (losing the pointer allocated on the heap)
 */

int main()
{
  cout << "-- 1. uninitialized pointer --\n";
  int *uninit_ptr;
  cout << "uninitialized pointer (bad): " << uninit_ptr << endl;
  int *init_ptr{nullptr};
  cout << "initialized pointer (good): " << init_ptr << endl;

  cout << "\n-- 2. dangling pointer --\n";
  int *new_ptr = new int;
  *new_ptr = 55;
  cout << "pointer on the heap: " << new_ptr << "; value: "
       << *new_ptr << endl;
  int *copy_new_ptr = new_ptr;
  cout << "copy of pointer on the heap before releasing: " << copy_new_ptr << "; value: "
       << *copy_new_ptr << endl;
  delete new_ptr;
  cout << "copy of pointer on the heap after releasing (bad): " << copy_new_ptr << "; value: "
       << *copy_new_ptr << endl;

  return 0;
}