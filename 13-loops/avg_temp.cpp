#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<double> temps{101.6, 97.2, 98.8, 102.6, 100.8};
    double avg_temps{}, total{};
    int temps_size = temps.size();

    for (auto temp : temps)
    {
        total += temp;
    }
    avg_temps = total / temps_size;

    cout << fixed << setprecision(2);
    cout << "Average temperature: " << avg_temps << endl;

    return 0;
}
