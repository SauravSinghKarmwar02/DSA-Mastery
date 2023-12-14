#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "Enter a number: ";
    cin >> n;
    cout << endl;

    int row = 1, col, space;

    while (row <= n)
    {
        space = n - row;
        while (space)
        {
            cout << "   ";
            space -= 1;
        }
        
        col = 1;
        while (col <= row)
        {
        cout << " * ";
        col += 1;
        }
        cout << endl;
        row += 1;
    }
    cout << endl;
    return 0;
}