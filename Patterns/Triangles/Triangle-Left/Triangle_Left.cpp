#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "Enter the size of Triangle: ";
    cin >> n;

    cout << endl;

    int row = 1;

    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << " *";
            col += 1;
        }
        cout << endl;
        row += 1;
    }
    cout << endl;
    return 0;
}