// Static memory is allocated in Stack
// Dynamic memory is allocated in Heap

#include <iostream>
using namespace std;

// Function to  find sum of all element of the array
int getSum(int *arr, int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    // Ask user for the size of array
    int i;
    cout << endl
         << "Enter the size of array: ";
    cin >> i;

    // Dynamic memory Allocation
    int *arr = new int[i];

    // Ask user to enter the elements of the array
    cout << endl
         << endl
         << "Enter the elements of the array: " << endl;
    for (int j = 0; j < i; j++)
    {
        cin >> arr[j];
    }

    // Find sum of the array
    int ans = getSum(arr, i);

    // Print the sum of the array
    cout << endl
         << "sum of array: " << ans << endl
         << endl;

    return 0;
}