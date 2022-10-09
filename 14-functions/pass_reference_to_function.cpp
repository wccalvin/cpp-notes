#include <iostream>

using namespace std;

/*
Notes on function parameters: http://www.fredosaurus.com/notes-cpp/functions/params.html
- when you pass values by reference, the actual variable address is passed and not the
copy of values
*/

void swap_values(int, int);
void swap_refs(int& a, int& b);

int main() {
    int a = 0;
    int b = 100;

    // swap using values
    cout << "---- original ----\n";
    cout << "a: " << a << "\nb: " << b << endl;
    cout << "---- swap values ----\n";
    swap_values(a, b);
    cout << "a: " << a << "\nb: " << b << endl;
    cout << "------------------\n";

    // swap using references
    cout << "---- original ----\n";
    cout << "a: " << a << "\nb: " << b << endl;
    swap_refs(a, b);
    cout << "---- swap using references ----\n";
    cout << "a: " << a << "\nb: " << b << endl;
    cout << "------------------\n";

    return 0;
}

void swap_values(int a, int b) {
    int temp = b;
    b = a;
    a = temp;
}

void swap_refs(int& a, int& b) {
    int temp = b;
    b = a;
    a = temp;
}
