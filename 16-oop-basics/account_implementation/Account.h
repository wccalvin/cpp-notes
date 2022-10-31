#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>
#include <iostream>

class Account
{
public:
private:
  std::string name;
  double balance;

public:
  // method prototypes
  double show_balance();
  bool deposit(double);
  bool withdraw(double);
  bool set_name(std::string);
  bool set_balance(double);
  std::string get_name();
};

#endif // _ACCOUNT_H_
