#include <iostream>
#include <string>

using namespace std;

/*
 * Implementing member methods is very similar to implementing functions.
 * Member methods have access to member attributes.
 * Implementation options:
 * 1. inside the class declaration - implicitly inline in the class
 * 2. outside the class declaration - ClassName::MethodName
 * 3. seperate specification - .h for declaration and .cpp for implementation
 */

class Account
{
private:
  string name;
  double balance{0};

public:
  // inline method declaration
  void deposit(double given_balance)
  {
    cout << "add " << given_balance << " to existing " << balance << " amount." << endl;
    balance += given_balance;
    cout << "current balance is at " << balance << endl;
  }

  double show_balance()
  {
    return balance;
  }

  // method prototypes
  void set_name(string);
  string get_name();
};

// implementing methods outside the class declaration
void Account::set_name(string str)
{
  cout << "name marked as " << str << endl;
  name = str;
}

string Account::get_name()
{
  return name;
}

int main()
{
  cout << "-- example of method inline class declaration --\n";
  Account clayton_account;
  clayton_account.set_name("Clayton");
  clayton_account.deposit(2000.34);
  cout << clayton_account.get_name() << " account has a balance of "
       << clayton_account.show_balance() << endl;
  clayton_account.deposit(55.99);
  cout << clayton_account.get_name() << " account has a balance of "
       << clayton_account.show_balance() << endl;
}
