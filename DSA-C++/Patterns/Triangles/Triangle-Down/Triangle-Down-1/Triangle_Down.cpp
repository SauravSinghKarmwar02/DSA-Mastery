#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "Enter a number: ";
    cin >> n; 
    cout << endl;

    int i = 1, j, star;

    while (i <= n)
    {
        star = n - i;
        while (star)
        {
            cout << " * ";
            star -= 1;
        }
        while (j <= i)
        {
            cout << "   ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    cout << endl;
    return 0;
}