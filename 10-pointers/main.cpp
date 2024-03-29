#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
Pointers:
 - pointer: variable that stores memory address as value
 - pointer variables are declared with * between data type and variable name
 - pointer variables must be declared with the same data type of the variable
 - pointer variable is usually assigned with the memory address obtained by &
 - when pointer values change, the value of the original variable change as well

 Dereference:
 - when * is not used in declaration it dereferences the pointer

 nullptr:
 - pointer should always be initialized. If unsure, point to nullptr;
 - nullptr provides a type safe pointer representing the empty pointer
 */

int main()
{
    cout << "--- uninitialized ---\n";
    int *uninit;            // uninitialized
    cout << uninit << endl; // pointer will contain garbage data
    cout << "size of uninit: " << sizeof uninit << endl;
    cout << "address of uninit: " << &uninit << endl;

    cout << "--- initialized with {} ---\n";
    int *init{};          // initialized
    cout << init << endl; // pointer will 0
    cout << "size of init: " << sizeof init << endl;
    cout << "address of init: " << &init << endl;

    cout << "--- initialized with nullptr ---\n";
    int *null_init = nullptr; // initalize with nullptr
    cout << null_init << endl;
    cout << "size of null_init: " << sizeof null_init << endl;
    cout << "address of null_init: " << &null_init << endl;

    cout << "=============\n";
    cout << "--- different types of pointers ---\n";
    // all representing 8 bytes in this case
    int *i{nullptr};
    double *d{nullptr};
    unsigned long long *ull{nullptr};
    vector<string> *v{nullptr};
    string *s{nullptr};
    cout << "size of int: " << sizeof i << endl;
    cout << "size of double: " << sizeof d << endl;
    cout << "size of unsigned long long: " << sizeof ull << endl;
    cout << "size of vector: " << sizeof v << endl;
    cout << "size of string: " << sizeof s << endl;

    cout << "=============\n";
    cout << "--- dereferencing a pointer example - 1 ---\n";
    string fruit = "apple";
    string *fruit_address = &fruit; // declare a pointer

    cout << "name of the fruit: " << fruit << endl;
    cout << "pointer to the fruit variable: " << fruit_address << endl;

    *fruit_address = "oranges"; // reassign pointer

    cout << "name of the fruit after reassignment: " << fruit << endl;
    cout << "address of the fruit after reassignment: " << fruit_address << endl;
    cout << "dereference pointer to the fruit variable: " << *fruit_address << endl;

    cout << "--- dereferencing a pointer example - 2 ---\n";
    int high = 100;
    int low = 10;
    int *high_ptr = &high; // assigning values to pointer

    cout << "high_ptr: " << high_ptr << endl;
    cout << "high_ptr value: " << *high_ptr << endl; // dereferencing a pointer

    high_ptr = &low; // reassigning pointer reference

    cout << "- after reassignment of pointers -\n";
    cout << "high_ptr: " << high_ptr << endl;
    cout << "high_ptr value: " << *high_ptr << endl; // dereferencing a pointer

    cout << "--- dereferencing a pointer example - 3 ---\n";
    vector<char> alpha{'a', 'b', 'c'};
    vector<char> *alpha_ptr = &alpha;

    cout << "second element of the vector using pointer: " << (*alpha_ptr).at(1) << endl;
    cout << "contents of alpha using pointer: " << endl;
    for (auto i : *alpha_ptr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}