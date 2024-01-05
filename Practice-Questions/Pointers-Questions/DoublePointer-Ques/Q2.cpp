#include <iostream>
using namespace std;

int main()
{
    int first = 100;
    int *p = &first;
    int **q = &p;
    int second = ++(**q);
    int *r = *q;
    ++(*r);

    cout << endl
         << first << " " << second << endl
         << endl;

    return 0;
}