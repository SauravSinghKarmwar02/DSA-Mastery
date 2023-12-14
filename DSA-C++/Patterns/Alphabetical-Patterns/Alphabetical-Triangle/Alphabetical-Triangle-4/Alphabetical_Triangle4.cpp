#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "Enter a number: ";
    cin >> n;
    cout << endl;

    int i = 1, j;
    char chr;

    while (i <= n)
    {
        j = 1;
        chr = ('A' +n - i);
        while (j <= i)
        {
            cout << chr << " ";
            chr += 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    cout << endl;
    return 0;
}