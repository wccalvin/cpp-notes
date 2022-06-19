#include <iostream>
#include <string>

int main() {
  // concatenation
  std::string first_name = "john";
  std::string last_name = "doe";
  std::string full_name = first_name + " " + last_name;

  std::cout << full_name << std::endl;

  // char access using index
  std::string msg = "hello, foo";
  char second = msg[1];
  int msg_length = msg.length();

  std::cout << second << std::endl;
  std::cout << msg_length << std::endl;

  return 0;
}