#include <iostream>

/*
- pre-increment: value stored in the variable is incremented before returning the new value.
- post-increment: copy of the value is made first, then the value is incremented and the
                  copy is used for assignment.
- same logic holds good for decrement (--)
*/

int main() {
    // pre-increment example
    int x = 5;
    std::cout << "x before pre-increment: " << x << std::endl;

    int y = ++x;
    std::cout << "x after pre-increment: " << x << std::endl;
    std::cout << "y after pre-increment: " << y << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~" << std::endl;

    // post-increment example
    int a = 5;
    std::cout << "a before post-increment: " << a << std::endl;

    int b = a++;
    std::cout << "a after post-increment: " << a << std::endl;
    std::cout << "b after post-increment: " << b << std::endl;
    std::cout << "~~~~~~~~~~~~~~~~" << std::endl;


    return 0;
}