#include <iostream>
#include <stack>

int main() {
  std::stack<int> bowls;

  // adding elements
  bowls.push(7);
  bowls.push(4);
  bowls.push(9);

  std::cout << "Size: " << bowls.size() << std::endl;
  std::cout << "Is empty: " << bowls.empty() << std::endl;  // false
  std::cout << "Top element now: " << bowls.top() << std::endl;
  bowls.pop();
  std::cout << "Top element now: " << bowls.top() << std::endl;
  bowls.pop();
  std::cout << "Top element now: " << bowls.top() << std::endl;
  bowls.pop();
  std::cout << "Size after pop: " << bowls.size() << std::endl;
  std::cout << "Is empty: " << bowls.empty() << std::endl;  // true

  return 0;
}