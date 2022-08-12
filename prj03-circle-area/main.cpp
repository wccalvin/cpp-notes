#include <cmath>
#include <iostream>

int main() {
  double radius, area;
  std::cout << "Enter the radius of the circle: ";
  std::cin >> radius;

  area = M_PI * (radius * radius);
  std::cout << "Area of the circle for a radius of " << radius << " is " << area
            << std::endl;
  return 0;
}