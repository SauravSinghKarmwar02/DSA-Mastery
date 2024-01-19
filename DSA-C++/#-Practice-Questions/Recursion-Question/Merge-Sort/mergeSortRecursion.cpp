#include <iostream>
using namespace std;

// ! Function to print array
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i != size - 1)
        {
            cout << ", ";
        }
    }
}

// ! Function to merge two arrays
void merge(int *arr, int s, int e)
{
    int mid = s + (e - s) / 2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copy values
    int mainArrayIndex = s;
    for (int i = 0; i < len1; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for (int i = 0; i < len2; i++)
    {
        second[i] = arr[mainArrayIndex++];
    }

    // merge two sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while (index1 < len1 && index2 < len2)
    {
        if (first[index1] < second[index2])
        {
            arr[mainArrayIndex++] = first[index1++];
        }
        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    while (index1 < len1)
    {
        arr[mainArrayIndex++] = first[index1++];
    }

    while (index2 < len2)
    {
        arr[mainArrayIndex++] = second[index2++];
    }

    delete[] first;
    delete[] second;
}

// ! Function to preform merge sort using recursion
void recursiveMergeSort(int *arr, int s, int e)
{
    // * Base case
    if (s >= e)
    {
        return;
    }

    int mid = s + (e - s) / 2;

    // ? sort left part
    recursiveMergeSort(arr, s, mid);

    // ? sort right part
    recursiveMergeSort(arr, mid + 1, e);

    // * Merge
    merge(arr, s, e);
}

int main()
{
    // Taking user input for the size of array
    int size;

    cout << endl
         << "Enter the size of array: ";
    cin >> size;

    // Print an empty line
    cout << endl;

    // Create an array using dynamic memory allocation
    int *arr = new int[size];

    // Ask user for the array elements
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i << " index element: ";
        cin >> arr[i];
    }

    // Print the array
    cout << endl
         << "Array = ";
    printArray(arr, size);

    // Sort the array
    recursiveMergeSort(arr, 0, size - 1);
    cout << endl
         << endl
         << "Sorted Array = ";
    printArray(arr, size);

    // Delete allocated memory
    delete[] arr;

    cout << endl
         << endl;
    return 0;
}