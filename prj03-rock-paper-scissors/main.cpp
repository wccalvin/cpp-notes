#include <stdlib.h>

#include <iostream>

/*
Rock Paper Scissors Lizard Spock
(The Big Bang Theory)

The dialogue:
  Scissors cuts Paper.
  Paper covers Rock.
  Rock crushes Lizard.
  Lizard poisons Spock.
  Spock smashes Scissors.
  Scissors decapitate Lizard.
  Lizard eats Paper.
  Paper disproves Spock.
  Spock vaporizes Rock.
  (and as it always has) Rock crushes Scissors.

The logic:
  rock > scissors
  scissors > paper
  paper > rock
  lizard > spock
  spock > scissors
  scissors > lizard
  lizard > paper
  paper > spock
  spock > rock
  rock > lizard
*/

int main() {
  int user = 0;                   // initialize user
  srand(time(NULL));              // use current time as seed for random generator
  int computer = rand() % 5 + 1;  // pick random number from 1 to 5

  // display logic
  std::cout << "=================================\n";
  std::cout << "rock paper scissors lizard spock!\n";
  std::cout << "=================================\n";

  std::cout << "Pick from 1 to 5.\n";
  std::cout << "(1) rock\n";
  std::cout << "(2) paper\n";
  std::cout << "(3) scissors\n";
  std::cout << "(4) lizard\n";
  std::cout << "(5) spock\n";

  // get user input
  std::cout << "=================================\n"
            << "User selection: ";
  std::cin >> user;

  // init values
  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;

  std::cout << "Computer: " << computer << std::endl
            << "=================================\n";

  // add protection
  if (user > 5 || user < 1) {
    std::cout << "Pick a number between 1 and 5.\n";
  }
  // decision logic
  if (user == rock && computer == scissors) {
    std::cout << "You Win!\n";

  } else if (user == scissors && computer == paper) {
    std::cout << "You Win!\n";

  } else if (user == paper && computer == rock) {
    std::cout << "You Win!\n";

  } else if (user == lizard && computer == spock) {
    std::cout << "You Win!\n";

  } else if (user == spock && computer == scissors) {
    std::cout << "You Win!\n";

  } else if (user == scissors && computer == lizard) {
    std::cout << "You Win!\n";

  } else if (user == lizard && computer == paper) {
    std::cout << "You Win!\n";

  } else if (user == paper && computer == spock) {
    std::cout << "You Win!\n";

  } else if (user == spock && computer == rock) {
    std::cout << "You Win!\n";

  } else if (user == rock && computer == lizard) {
    std::cout << "You Win!\n";

  } else if (user == computer) {
    std::cout << "Tie!\n";

  } else {
    std::cout << "You Lose!\n";
  }

  return 0;
}