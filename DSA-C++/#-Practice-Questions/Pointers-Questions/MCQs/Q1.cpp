#include <iostream>
using namespace std;

int main()
{
    int first = 8;
    int second = 18;
    int *ptr = &second;

    *ptr = 9;

    cout << endl
         << first << " " << second << endl
         << endl;

    return 0;
}