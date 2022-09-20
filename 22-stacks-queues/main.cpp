#include <iostream>
#include <queue>
#include <stack>
#include <string>

int main() {
  std::stack<int> bowls;
  std::queue<std::string> dog_names;

  // adding elements
  std::cout << "Stacks:\n";
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

  std::cout << "-------" << std::endl;

  std::cout << "Queues:\n";

  // insert elements
  dog_names.push("Cece");
  dog_names.push("Zoey");
  dog_names.push("Britney");

  // front in the queue
  std::cout << "Front in the queue: " << dog_names.front() << std::endl;

  // back in the queue
  std::cout << "Back in the queue: " << dog_names.back() << std::endl;

  // size of the queue
  std::cout << "Size of the queue: " << dog_names.size() << std::endl;

  // remove first in the queue
  dog_names.pop();
  std::cout << "Front in the queue after pop: " << dog_names.front() << std::endl;

  std::cout << "Is empty: " << dog_names.empty() << std::endl;  // false

  return 0;
}