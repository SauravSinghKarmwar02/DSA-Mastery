#include <iostream>
using namespace std;

// Function to print array
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];

        if (i != n - 1)
        {
            cout << ", ";
        }
    }
}

// Function to perform partition for Quick sort
int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int cnt = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            cnt++;
        }
    }

    // Place pivot at right position
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // Manage left and right part
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

// Function to perform Quick sort
void recursiveQuickSort(int arr[], int s, int e)
{
    // Base case
    if (s > e)
        return;

    // Partition
    int p = partition(arr, s, e);

    // Recursive case

    // Sort left part
    recursiveQuickSort(arr, s, p - 1);

    // Sort right part
    recursiveQuickSort(arr, p + 1, e);
}

int main()
{
    // Ask user for the size of array
    int size;
    cout << endl
         << "Enter the size of Array: ";
    cin >> size;

    // Create an array using dynamic memory allocation
    int *arr = new int[size];

    // Fill the array with user input
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the element for [" << i << "] index: ";
        cin >> arr[i];
    }

    // Print the Array
    cout << endl
         << "Array: ";
    print(arr, size);

    // Call sorting function
    recursiveQuickSort(arr, 0, size - 1);

    // Print the Sorted Array
    cout << endl
         << endl
         << "Sorted Array: ";
    print(arr, size);

    cout << endl
         << endl;
    return 0;
}