#include <iostream>
using namespace std;

int main()
{
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;

    cout << endl
         << first << " " << second << endl
         << endl;

    return 0;
}