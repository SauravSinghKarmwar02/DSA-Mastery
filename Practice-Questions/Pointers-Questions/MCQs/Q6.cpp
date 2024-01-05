#include <iostream>
using namespace std;

int main()
{
    float f = 12.5;
    float p = 21.5;
    float *ptr = &f;

    (*ptr)++;

    *ptr = p;

    cout << endl
         << *ptr << " " << f << " " << p << endl
         << endl;

    return 0;
}