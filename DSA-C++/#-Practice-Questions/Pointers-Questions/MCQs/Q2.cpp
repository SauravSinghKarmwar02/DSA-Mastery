#include <iostream>
using namespace std;

int main()
{
    int first = 6;
    int *p = &first;
    int *q = p;
    (*q)++;

    cout << endl
         << first << endl
         << endl;

    return 0;
}