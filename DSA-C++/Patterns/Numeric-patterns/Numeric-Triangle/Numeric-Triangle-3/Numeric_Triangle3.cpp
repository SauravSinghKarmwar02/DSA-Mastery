#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "Enter a number: ";
    cin >> n;
    cout << endl;

    int i = 1, j;

    while (i <= n)
    {
        j = 1;
        while (j <= i)
        {
            cout << (i + j - 1) << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    cout << endl;
    return 0;
}