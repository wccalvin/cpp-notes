#include "Account.h"
#include <iostream>
#include <string>

bool Account::set_name(std::string str)
{
  name = str;
  return true;
}

std::string Account::get_name()
{
  return name;
}

double Account::show_balance()
{
  return balance;
}

bool Account::deposit(double amount)
{
  balance += amount;
  return true;
}

bool Account::withdraw(double amount)
{
  double difference = balance - amount;
  if (difference >= 0)
  {
    balance -= amount;
    return true;
  }
  else
  {
    return false;
  }
}

bool Account::set_balance(double amount)
{
  balance = amount;
  return true;
}
