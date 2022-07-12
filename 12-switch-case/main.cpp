#include <iostream>

/*
- switch keyword should be followed by expression in the parenthesis
- case keyword is used to check if the expression matches the specified value
- switch performance is better than if/else
- break keyword is used for the compiler to move on from the case statement
- break keyword is important, if forgotten will evaluate the next case true allowing
  fall through bug.
- default is the code block to be run when none of the cases are true
*/

int main() {
  int grade = 10;
  switch (grade) {
    case 9:
      std::cout << "Freshman\n";
      break;
    case 10:
      std::cout << "Sophomore\n";
      break;
    case 11:
      std::cout << "Junior\n";
      break;
    case 12:
      std::cout << "Senior\n";
      break;
    default:
      std::cout << "Invalid\n";
      break;
  }
  return 0;
}