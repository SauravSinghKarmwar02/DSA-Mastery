#include <iostream>
using namespace std;

// Using default argument
void print(int arr[], int n, int start = 0)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;

    print(arr, size);

    cout << endl;

    print(arr, size, 4);

    return 0;
}