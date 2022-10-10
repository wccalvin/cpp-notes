#include <iostream>

using namespace std;

int inc_by_one();

int main() {
    cout << inc_by_one() << endl;
    cout << inc_by_one() << endl;
    cout << "do something else ...." << endl;
    cout << inc_by_one() << endl;

    return 0;
}

int inc_by_one() {
    static int num{0};
    num += 1;
    return num;
}