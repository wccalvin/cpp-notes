#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
  // attributes
  string name;
  int health;
  int xp;

  // methods
  void talk(string); // function prototypes
  bool is_dead();    // function prototypes
};

class Account
{
  string name;
  double balance;

  bool deposit(double);
  bool withdraw(double);
};

int main()
{
  cout << "-- create objects in stack - players--\n";
  // objects on the stack
  Player player_a;
  Player player_b;

  // create user defined types using class objects
  Player player_array[]{player_a, player_b};

  vector<Player> player_vector{player_a};
  player_vector.push_back(player_b);

  // object on the heap
  cout << "\n-- create objects in heap --\n";
  Player *player_c{nullptr};
  player_c = new Player;
  delete player_c;

  cout << "-- create objects in stack - accounts--\n";
  Account account_a;
  Account account_b;

  return 0;
}
