#include <iostream>
#include <vector>

using namespace std;

// passing pointers to a function
void twice_as_much(int *value)
{
  *value *= 2;
  // *value = *value * 2 // means the same thing
}

void list_vector(const vector<string> *vec) // use const for safety
{
  for (auto s : *vec)
  {
    cout << s << endl;
  }
}

// return a parameter
float *find_small(float *a, float *b)
{
  if (*a > *b)
  {
    return b;
  }
  else if (*a == *b)
  {
    return a;
  }
  else
  {
    return a;
  }
}

// return dynamically allocated memory
int *create_int_array(size_t array_size, int initial_value = 0)
{
  int *memory_location = new int[array_size];
  for (size_t i = 0; i < array_size; i++)
  {
    *(memory_location + i) = initial_value;
  }
  return memory_location;
}

int main()
{
  // pass-by-reference
  int num{10};
  cout << "-- pass by reference --\n";
  cout << "value of num before function call: " << num << endl;
  twice_as_much(&num); // pass reference of num
  cout << "value of num after function call: " << num << endl;

  // pass-by-pointer
  cout << "\n-- pass by pointer --\n";
  int *num_ptr{&num};
  cout << "value of num before function call: " << num << endl;
  twice_as_much(num_ptr); // pass reference of num
  cout << "value of num after function call: " << num << endl;

  // pass vector as reference
  cout << "\n-- pass vector by reference --\n";
  vector<string> colors{"red", "yellow", "blue"};
  list_vector(&colors);

  // return pointer parameter
  cout << "\n-- return pointer parameter --\n";
  float a{3.6};
  float b{5.9};
  cout << "pointer to a: " << &a << " = " << a << endl;
  cout << "pointer to b: " << &b << " = " << b << endl;
  float *smallest_ptr{nullptr};
  smallest_ptr = find_small(&a, &b);
  cout << "found " << *smallest_ptr << " to be the smallest, located at " << smallest_ptr << endl;

  // return pointer from the heap (free-store)
  cout << "\n-- return dynamically allocated memory --\n";
  int *new_array_pointer = create_int_array(10, 3); // allocates heap memory
  for (size_t i{0}; i < 10; i++)
  {
    cout << "index: " << i << "; pointer: " << new_array_pointer + i
         << "; value: " << *(new_array_pointer + i) << endl;
  }
  delete[] new_array_pointer; // releases heap memory to avoid memory leak

  return 0;
}
