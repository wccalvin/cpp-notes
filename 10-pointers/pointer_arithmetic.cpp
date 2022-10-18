#include <iostream>
#include <string>

using namespace std;

int main() {
    int numbers[]{10, 20, 30, 40, 50};

    cout << "--- loop through array using pointers ---\n";
    // loop through array using pointers
    int *num_ptr = numbers;   // assign array pointer
    while (*num_ptr != 40) {  // dereference array pointer to compare values
        cout << *num_ptr << endl;
        num_ptr++;  // increment array pointer
        // can also be written as *num_ptr++ to achieve the same behavior
    }

    cout << "--- pointer comparison examples ---\n";
    // pointer comparison
    string s1{"foo"};
    string s2{"foo"};
    string s3{"bar"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout << "p1 == p2: " << (p1 == p2) << endl;  // false
    cout << "p1 == p3: " << (p1 == p3) << endl;  // true

    cout << "comparing dereferenced values - *p1 == *p2: " << (*p1 == *p2) << endl;  // true

    p3 = &s3;
    cout << "p1 == p3: " << (p1 == p3) << endl;  // false after reassignment

    return 0;
}