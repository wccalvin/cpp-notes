#include <iostream>
using namespace std;

int sum_of_odd_nums(int limit = 15)
{
    int sum = 0;
    for (int i = 1; i <= limit; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main()
{
    cout << "Sum of odd numbers from 1 to 15: " << sum_of_odd_nums() << endl;
    cout << "Sum of odd numbers from 1 to 100: " << sum_of_odd_nums(100) << endl;
    return 0;
}