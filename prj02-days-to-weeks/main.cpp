#include <iostream>

const int DAYS_IN_A_WEEK = 7;
int main() {
  int total_days, weeks, days;

  std::cout << "How many days did you travel: ";
  std::cin >> total_days;

  weeks = total_days / DAYS_IN_A_WEEK;
  days = total_days % DAYS_IN_A_WEEK;

  std::cout << "You traveled: " << weeks << " weeks and " << days << " days."
            << std::endl;
  return 0;
}