#include <iostream>
#include "Account.h"

using namespace std;

int main()
{
  Account account_a;
  bool name = account_a.set_name("Clayton");
  bool balance = account_a.set_balance(1000.0);

  if (name)
  {
    cout << "account name is set as " << account_a.get_name() << endl;
  }
  if (balance)
  {
    cout << "Initial balance in the account: " << account_a.show_balance() << endl;
  }

  bool deposit_status = account_a.deposit(58.99);
  if (deposit_status)
  {
    cout << "Account balance after deposit: " << account_a.show_balance() << endl;
  }

  bool withdraw_status = account_a.withdraw(82.68);
  if (withdraw_status)
  {
    cout << "Account balance after withdrawal: " << account_a.show_balance() << endl;
  }

  return 0;
}

// compile from command line by including cpp
// g++ -o main main.cpp Account.cpp
