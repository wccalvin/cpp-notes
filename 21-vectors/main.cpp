#include <iostream>
#include <string>
#include <vector>

int main() {
  // declare vector
  std::vector<char> alpha;

  // add values to vector
  alpha.push_back('a');
  alpha.push_back('x');
  alpha.push_back('c');

  // change value of x to b
  alpha[1] = 'b';

  for (int i = 0; i < alpha.size(); i++) {
    std::cout << alpha[i];  // abc
  }
  std::cout << std::endl;

  // first value
  std::cout << alpha.front() << std::endl;  // a

  // last value
  std::cout << alpha.back() << std::endl;  // c

  // delete values
  alpha.pop_back();
  std::cout << alpha.back() << std::endl;  // b
  alpha.pop_back();                        // no return value

  // check if vector is empty
  std::cout << alpha.empty() << std::endl;  // 0 - false (not empty)
  alpha.pop_back();
  std::cout << alpha.empty() << std::endl;  // 1 - true (is empty)

  return 0;
}