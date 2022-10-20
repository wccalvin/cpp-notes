#include <iostream>

using namespace std;

int main()
{
    int numbers[]{10, 20, 30, 40, 50};

    cout << "--- address stored in array variable ---\n";
    cout << "numbers: " << numbers << endl; // the array variable stores the address of the first element
    cout << "address of first element of numbers: " << &numbers[0] << endl;

    cout << "--- create an array pointer and show values ---\n";
    int *num_ptr = numbers;
    cout << num_ptr[0] << endl;
    cout << num_ptr[1] << endl;
    cout << num_ptr[3] << endl;

    cout << "--- use an array pointer to show values using pointer arithmetic ---\n";
    cout << *num_ptr << endl;       // represents index 0
    cout << *(num_ptr + 1) << endl; // represents index 1
    cout << *(num_ptr + 3) << endl; // represents index 3

    cout << "--- another way to use array pointer to show values using pointer arithmetic ---\n";
    cout << *numbers << endl;       // represents index 0
    cout << *(numbers + 1) << endl; // represents index 1
    cout << *(numbers + 3) << endl; // represents index 3

    return 0;
}