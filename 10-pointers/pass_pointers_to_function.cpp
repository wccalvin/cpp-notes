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

  return 0;
}
