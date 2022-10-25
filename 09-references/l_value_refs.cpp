#include <iostream>

using namespace std;

/*
 * l-values:
 * on the left hand side of the assignment
 * values that have names and are addressable
 * mutable if they are not constants
 * r-values:
 * on the right hand side of the assignment
 * literal
 */

int main()
{
  cout << "-- l-value examples --\n";
  // x and y below are l-values
  // 'h' and 5 below are r-values
  char x = 'h';
  int y = 5;

  // a is not a l-value
  int a{};
  // 10 = a;  // error: lvalue required as left operand of assignment

  // l-value references
  int b{100};
  int &bref{b}; // valid as b is a l-value

  // int &ref{10}; // not allowed, since 10 is r-value

  return 0;
}