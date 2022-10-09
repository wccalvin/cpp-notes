#include <iostream>
#include <vector>

using namespace std;

void print_vector(vector<int>);

int main() {
    vector<int> vec{10, 20, 30, 40, 50};
    print_vector(vec);

    return 0;
}

void print_vector(vector<int> vec_name) {
    for (int i = 0; i < vec_name.size(); i++) {
        cout << vec_name[i] << endl;
    }
}
