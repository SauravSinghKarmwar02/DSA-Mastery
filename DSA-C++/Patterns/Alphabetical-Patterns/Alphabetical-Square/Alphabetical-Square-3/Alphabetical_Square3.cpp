#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "Enter a number: ";
    cin >> n;
    cout << endl;

    int i = 1, j;
    char Alphabet = 'A';

    while (i <= n)
    {
        j = 1;
        while (j <= n)
        {
            cout << Alphabet << " ";
            Alphabet += 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    cout << endl;
    return 0;
}