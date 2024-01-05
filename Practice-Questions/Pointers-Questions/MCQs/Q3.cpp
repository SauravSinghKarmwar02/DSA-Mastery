#include <iostream>
using namespace std;

int main()
{
    int first = 8;
    int *p = &first;

    cout << endl
         << (*p)++ << " ";
    cout << first << endl
         << endl;

    return 0;
}