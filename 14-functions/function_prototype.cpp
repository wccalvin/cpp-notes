#include <iostream>

using namespace std;

int addTwoValues(int, int);  // function prototype to avoid undeclared identifier error

int main() {
    cout << "10 + 5 = " << addTwoValues(10, 5) << endl;
    return 0;
}

int addTwoValues(int a, int b) {
    return a + b;
}