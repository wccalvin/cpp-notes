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

  std::cout << "string: " << msg << std::endl;
  std::cout << "second char of the string: " << second << std::endl;
  std::cout << "total chars of the string: " << msg_length << std::endl;

  return 0;
}