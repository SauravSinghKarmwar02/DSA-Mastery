#include <iostream>
using namespace std;

int main()
{
    // Creating 2D array
    int arr[3][3];

    cout << endl
        << "------------INPUT------------" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> arr[i][j];
        }
    }
    cout << endl;

    cout << endl
        << "------------OUTPUT------------" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "arr[" << i << "][" << j << "] = " << arr[i][j] << "\t";
        }
        cout << endl;
    }

    cout << endl;
}