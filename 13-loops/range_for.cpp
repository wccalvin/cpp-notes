#include <iostream>

using namespace std;

int main()
{
    // auto keyword to let C++ deduce the type
    cout << "\nArray:\n======" << endl;
    int numbers[5] = {7, 6, 5, 4, 3, 2, 1};
    for (auto num : numbers)
    {
        cout << num;
    }

    cout << "\nString:\n=======" << endl;
    for (auto alpha : "Clayton")
    {
        cout << alpha << endl;
    }

    return 0;
}