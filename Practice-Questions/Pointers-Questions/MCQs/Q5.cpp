#include <iostream>
using namespace std;

int main()
{
    int first = 8;
    int second = 11;

    int *third = &second;

    first = *third;
    *third = *third + 2;

    cout << endl
         << first << " " << second << endl
         << endl;

    return 0;
}