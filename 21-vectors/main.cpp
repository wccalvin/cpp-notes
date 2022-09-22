#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // declare vector
    vector<char> alpha;

    // add values to vector
    alpha.push_back('a');
    alpha.push_back('x');
    alpha.push_back('c');

    // change value of x to b
    alpha[1] = 'b';

    // looping through the vector using size method
    for (int i = 0; i < alpha.size(); i++) {
        cout << alpha[i];  // abc
    }
    cout << std::endl;

    // first value
    cout << alpha.front() << endl;  // a

    // last value
    cout << alpha.back() << endl;  // c

    // delete values
    alpha.pop_back();
    cout << alpha.back() << endl;  // b
    alpha.pop_back();              // no return value

    // check if vector is empty
    cout << alpha.empty() << endl;  // 0 - false (not empty)
    alpha.pop_back();
    cout << alpha.empty() << endl;  // 1 - true (is empty)

    // access elements using index
    vector<int> scores{37, 45, 56, 78, 29, 10};
    cout << "Accessing third element value using at method: " << scores.at(2) << endl;
    cout << "Accessing fifth element value using index: " << scores[4] << endl;

    // two dimensional vectors
    vector<vector<int>> food_ratings{{10, 8, 8}, {7, 8, 6}, {9, 7, 8}};

    // looping through two dimensional vectors
    for (int i = 0; i < food_ratings.size(); i++) {
        for (int j = 0; j < food_ratings[i].size(); j++) {
            cout << "Rating by person " << i + 1 << " on " << j + 1 << " food is: "
                 << food_ratings.at(i).at(j) << endl;
        }
    }

    // declaring, initializing, changing values
    vector<int> vec{10, 20, 30, 40, 50};
    vec[vec.size() - 1] = 1000;

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}