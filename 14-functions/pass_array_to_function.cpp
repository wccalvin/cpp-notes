#include <iostream>

using namespace std;

/*
- pass through size of the array as well to iterate through array
- use const when declaring array parameter to protect the array from modification
*/
void iterate_through_array(const int arr[], size_t arr_size);

int main() {
    int scores[5] = {98, 100, 99, 79, 68};
    iterate_through_array(scores, 5);
    return 0;
}

void iterate_through_array(const int my_array[], size_t my_array_size) {
    for (int i = 0; i < my_array_size; i++)
        cout << my_array[i] << endl;
}