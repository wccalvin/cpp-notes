#include <iostream>
#include <string>

/*
usage:
if (condition1) {
    ....
} else if (condition2) {
    ....
} else {
    ....
}

note:
- curly brackets can be omitted if there is only a single statement in if/else if/else block
- it is however considered as a bad practice

short-hand if/else:
variable = (condition) ? do_this_if_condition_is_true : do_this_if_condition_is_false
*/

int main() {
  int score = 14;
  if (score < 3) {
    std::cout << "Strong start...\n";
  } else if (score > 10 && score < 20) {
    std::cout << "Catching up to do...\n";
  } else {
    std::cout << "This is bad...\n";
  }

  // short-hand if/else
  int time = 10;
  std::string greeting = (time <= 12) ? "Good morning!" : "Good afternoon!";
  std::cout << "Time: " << time << " --> Hello, " << greeting << std::endl;

  time = 14;
  greeting = (time <= 12) ? "Good morning!" : "Good afternoon!";
  std::cout << "Time: " << time << " --> Hello, " << greeting << std::endl;

  return 0;
}