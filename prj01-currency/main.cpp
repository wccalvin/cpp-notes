#include <iostream>

int main() {
  double pesos, reais, soles;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  // Pesos conversion rate: 0.00023
  // Reais conversion rate: 0.18
  // Soles conversion rate: 0.26

  double dollars = (0.00023 * pesos) + (0.18 * reais) + (0.26 * soles);

  std::cout << "Total USD = $" << dollars << std::endl;
}