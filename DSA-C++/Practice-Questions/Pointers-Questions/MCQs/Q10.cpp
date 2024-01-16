#include <iostream>
using namespace std;

void update(int *p)
{
    *p = (*p) * 2;
}

int main()
{
    int i = 10;

    update(&i);

    cout << endl
         << i << endl
         << endl;

    return 0;
}