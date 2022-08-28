#include <iostream>

class Animal {
 public:
  void action() {
    std::cout << "Animal does something.\n";
  }
};

class Snake : public Animal {
 public:
  void action() {
    std::cout << "Snake hisses!\n";
  }
};

class Lion : public Animal {
 public:
  void action() {
    std::cout << "Lion roars!\n";
  }
};

int main() {
  Animal animal;
  animal.action();

  Snake python;
  python.action();

  Lion lion;
  lion.action();

  return 0;
}