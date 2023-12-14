#include<iostream>
using namespace std;

int main()
{
    // Declareing required variables
    int n, i, j;

    // Asking user to enter dimension for square
    cout << endl << "Enter the side of square: ";
    cin >> n;

    cout << endl;   // Creating a spaceline before pattern

    // Printing the pattern (square)
    for(i=1; i<=n; ++i) // This loop creates vertical dimension
    {
        for(j=1; j<=n; ++j) // This loop creates horizontal dimension
        {
            cout << " #";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}