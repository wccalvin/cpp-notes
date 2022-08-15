#include <iostream>

/*
    using ASCII table - convert lower case letter to uppder case letter
    https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html
*/

// ASCII value of A is 65
const int ascii_A = 65;

int main() {
  char lowercase_letter, uppercase_letter;

  // get lowercase letter from user
  std::cout << "Enter a lowercase letter: ";
  std::cin >> lowercase_letter;

  // find the difference of given lowercase letter to lower'a'
  int difference = (int)(lowercase_letter - 'a');
  // now add the difference with 65
  uppercase_letter = (char)(ascii_A + difference);

  std::cout << "The uppercase of " << lowercase_letter << " is " << uppercase_letter
            << std::endl;

  return 0;
}
