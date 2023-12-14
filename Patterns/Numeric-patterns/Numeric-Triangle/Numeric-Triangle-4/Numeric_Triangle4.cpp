#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "Enter a number: ";
    cin >> n;
    cout << endl;

    int i, j, k;

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; ++j)
        {
            cout << "  ";
        }
        for(k=1; k <= i; k++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}