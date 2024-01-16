#include <iostream>
using namespace std;

int main()
{
    // Taking the size of array
    int n, m;
    cout << endl
         << "Enter the no. of rows & columns: ";
    cin >> n >> m;

    // Allocating dynamic memory
    int **arr = new int *[n];

    // Allocating size of columns for each row
    for (int i = 0; i < m; i++)
    {
        arr[i] = new int[m];
    }

    // Taking Array Elements
    cout << endl
         << endl
         << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Printing the array
    cout << endl
         << endl
         << "Array = ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == arr[n - 1][m - 1])
            {
                cout << arr[i][j];
            }
            else
            {
                cout << arr[i][j] << ", ";
            }
        }
    }

    cout << endl
         << endl;

    // Releasing Allocated Dynamic Memory
    for (int i = 0; i < n; i++)
    {
        delete[] arr[i];
    }

    delete[] arr;

    return 0;
}
