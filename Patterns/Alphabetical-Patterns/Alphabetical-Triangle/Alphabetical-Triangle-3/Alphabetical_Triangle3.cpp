#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "Enter a number: ";
    cin >> n;
    cout << endl;

    int i = 1, j;
    char chr = 'A';

    while (i <= n)
    {
        j = 1;
        char alphabet = chr;
        while (j <= i)
        {
            cout << alphabet << " ";
            alphabet += 1;
            j += 1;
        }
        cout << endl;
        i += 1;
        chr += 1;
    }
    cout << endl;
    return 0;
}