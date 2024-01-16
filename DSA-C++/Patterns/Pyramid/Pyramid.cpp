#include<iostream>
using namespace std;

int main()
{
    // Declareing the required variables
    int n, i, j;

    // Asking user for the size of pyramid he wants
    cout << endl << "Enter the size of Pyramid: ";
    cin >> n;

    cout << endl; // Giving some space before pyramid

    // Printing the Pattern(Pyramid)
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

    cout << endl;
    return 0;
}