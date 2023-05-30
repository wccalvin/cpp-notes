#include <iostream>
#include <vector>
#include <string>

int main()
{
  std::vector<std::string> msg{"Hello", "from", "C++", "Program.",
                               "Looping", "through", "a", "vector."};

  for (const std::string &word : msg)
  {
    std::cout << word << " ";
  }
  std::cout << std::endl;
}