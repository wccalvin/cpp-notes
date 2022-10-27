#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player
{
public:
  // attributes
  string name{};
  int health{};
  int xp{};

  // methods
  void talk(string); // function prototypes
  bool is_dead();    // function prototypes
};

class Account
{
public:
  string name{};
  double balance{};

  bool deposit(double);
  bool withdraw(double);
};

int main()
{
  cout << "-- create objects in stack - players--\n";
  // objects on the stack
  Player player_a;

  // accessing class members to set values
  player_a.name = "clayton";
  player_a.health = 100;
  player_a.xp = 9;

  cout << "player_a.name: " << player_a.name << endl;
  cout << "player_a.health: " << player_a.health << endl;
  cout << "player_a.xp: " << player_a.xp << endl;

  // create user defined types using class objects
  Player player_array[]{player_a};

  vector<Player> player_vector{player_a};
  Player player_b;
  player_vector.push_back(player_b);

  // object on the heap
  cout << "\n-- create objects in heap --\n";
  Player *player_c{nullptr};
  player_c = new Player;
  player_c->name = "john";
  player_c->health = 98;
  player_c->xp = 7;

  cout << "player_c.name: " << player_c->name << endl;
  cout << "player_c.health: " << player_c->health << endl;
  cout << "player_c.xp: " << player_c->xp << endl;

  delete player_c;

  cout << "\n-- create objects in stack - accounts--\n";
  Account account_a;
  Account account_b;

  return 0;
}
