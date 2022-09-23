#include <iostream>
#include <string>

using namespace std;

int main() {
    // int
    int num = 4;
    cout << "type: int; value: " << num << endl;

    // unsigned int - only stores 0 and +ve integers
    unsigned int positive = 1;
    cout << "type: unsigned int; value: " << positive << endl;

    // unsigned long int
    unsigned long population_of_usa = 329500000;
    cout << "type: unsigned long int; value: " << population_of_usa << endl;

    // long long
    long long population_on_earth{7'600'000'000};  // C++ 14 feature - single quote for legibility
    cout << "type: long long int; value: " << population_on_earth << endl;

    // float
    float car_payment = 469.23;
    cout << "type: float; value: " << car_payment << endl;

    // double
    double pi = 3.141592653589;
    cout << "type: double; value: " << pi << endl;

    long double long_value = 1.5e10;
    cout << "type: long double; value: " << long_value << endl;

    // char
    char letter = 'a';
    cout << "type: char; value: " << letter << endl;

    // string
    string name = "john doe";
    cout << "type: string; value: " << name << endl;

    // boolean
    bool is_exist = true;
    bool is_not_exist = false;
    cout << "type: bool (true); value: " << is_exist << endl;
    cout << "type: bool (false); value: " << is_not_exist << endl;

    // type conversion double to int
    double value = 33.55;
    int converted_value = (int)value;

    cout << value << " converted to " << converted_value << endl;

    return 0;
}