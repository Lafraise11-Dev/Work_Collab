#include <iostream>
#include <cmath>
using namespace std;

int tim_ga(int n)
{
    int so_ga = ((4 * 36) - 100) / 2;
    return so_ga;
}

int main()
{
    int n = 100;
    int ga = tim_ga(n);
    int cho = 36 - ga;
    cout << "Co " << cho << " con cho.";
    cout << "\nCo " << ga << " con ga.";
    return 0;
}

Co 14 con cho.
Co 22 con ga.
