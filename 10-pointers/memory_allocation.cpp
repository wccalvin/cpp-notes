#include <iostream>

using namespace std;

/*
- using `new` keyword to allocation storage using pointer
- note: if uninitialized, garbage data will be there on the heap
- note: the only way to access this memory heap is through pointer,
if the pointer is lost (because of reassignment or out of scope), it'll
lead to memory leak.
*/

int main()
{
    // allocate single element on the heap (free store)
    int *int_ptr{nullptr};

    int_ptr = new int;
    cout << "Integer pointer address: " << int_ptr << endl;

    // delete allocated space using pointer on the heap
    delete int_ptr;

    // allocate array on the heap
    size_t num_of_scores = 1000;
    double *score_ptr{nullptr};

    score_ptr = new double[num_of_scores];
    cout << "Array pointer address: " << score_ptr << endl;

    // delete allocated space using array pointer
    delete[] score_ptr;

    return 0;
}