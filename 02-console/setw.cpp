#include <iostream> // for cout, endl
#include <iomanip>  // for setw

using namespace std;

int main()
{
  int a = 77;
  float b = 1.234f;
  double c = 22.34;

  cout << "print with set width: 10\n";
  cout << "INT" << setw(10);
  cout << "FLOAT" << setw(10);
  cout << "DOUBLE" << endl;

  cout << a << setw(11);
  cout << b << setw(9);
  cout << c << endl;

  return 0;
}