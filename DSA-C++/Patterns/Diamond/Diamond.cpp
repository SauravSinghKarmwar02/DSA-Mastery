#include<iostream>
using namespace std;

int main()
{
    // Declareing required variables
    int n, i, j;

    // Asking user for the length of diamond
    cout << endl << "Enter the length of Diamond: ";
    cin >> n;

    cout << endl;   // creating a blank line 

    // Printing the Pattern (Diamond)
        // First half of Diamond
    for(i=1; i<=n; ++i)
    {
        for(j=1; j<=n; ++j)
        {
            if((i+j)>=(n+1))
            {
                cout << " *";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
        // Second half of Diamond
    for(i=n; i>=1; --i)
    {
        for(j=n; j>=1; --j)
        {
            if((i-j)>=(1))
            {
                cout << " *";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}