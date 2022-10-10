#include <iostream>

using namespace std;

/*
Notes on function parameters: http://www.fredosaurus.com/notes-cpp/functions/params.html
- when you pass values by reference, the actual variable address is passed and not the
copy of values
*/

void swap_values(int, int);
void swap_refs(int& a, int& b);
void pass_refs(int&);

int main() {
    int a = 0;
    int b = 100;

    // implementation to pass references
    pass_refs(b);

    // swap using values (uses formal parameters - copy of values)
    cout << "---- original ----\n";
    cout << "a: " << a << "\nb: " << b << endl;
    cout << "---- swap values ----\n";
    swap_values(a, b);
    cout << "a: " << a << "\nb: " << b << endl;
    cout << "------------------\n";

    // swap using references (uses actual parameters)
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

void pass_refs(int& ref) {
    cout << ref << endl;
}
