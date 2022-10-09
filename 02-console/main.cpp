#include <iostream>
#include <string>

/* one way to use namespace
using std::cin;
using std::cout;
using std::endl;
using std::string;
*/

using namespace std;  // another way to use namespace for quick programs

int main() {
    string first, last;
    cout << "Enter first and last name: ";
    cin >> first >> last;
    cout << "Hello, " << first << " " << last << "!" << endl;
}