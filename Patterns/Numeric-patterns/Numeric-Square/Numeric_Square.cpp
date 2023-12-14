#include<iostream>
using namespace std;

int main()
{
    // Declare required variables
    int n, i=1, j, k=1;

    // Asking user to enter a number for side if square
    cout << endl << "Enter a number: ";
    cin >> n;

    cout << endl; // Createing a blank line

    // Printing the pattern
    while (i <= n)
    {
        for(j=1; j<=n; ++j)
        {
            cout << " " << j;
        }
        cout << endl;
        ++i;
    }

        cout << endl; // Creating a blank line

    while (k <= n)
    {
        // Printing the pattern in reverse numeric order
        for(j=n; j>=1; --j)
        {
            cout << " " << j;
        }
        cout << endl;
        ++k;
    }


    cout << endl;
    return 0;
}