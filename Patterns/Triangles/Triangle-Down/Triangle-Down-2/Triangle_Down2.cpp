#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "Enter a number: ";
    cin >> n;
    cout << endl;

    int i = n, j, space;

    while (i >= 1)
    {
        space = n - i;
        while (space)
        {
            cout << "   ";
            space -= 1;
        }
        j = 1;
        while (j <= i)
        {
            cout << " * ";
            j += 1;
        }
        cout << endl;
        i -= 1;
    }
    cout << endl;
    return 0;
}