#include <iostream>
using namespace std;

int main()
{
    int arr[] = {11, 21, 13, 14};

    cout << endl
         << *(arr) << " " << *(arr + 1) << endl;

    int arr2[6] = {11, 12, 31};

    cout << endl
         << arr2 << " " << &arr2 << endl;

    cout << endl
         << (arr2 + 1) << endl;

    int *p = arr2;

    cout << endl
         << p[2] << endl
         << endl;

    return 0;
}