#include <iostream>
#include <vector>
using namespace std;

// ! Function to print array
void print(const vector<int> &arr)
{
    int size = arr.size();

    for (int i = 0; i < size; i++)
    {
        cout << arr[i];

        if (i != size - 1)
        {
            cout << ", ";
        }
    }
}

// ! Bubble sort using recursion
void recursiveBubbleSort(int *arr, int size)
{
    // * Base case
    if (size <= 1)
    {
        return;
    }

    // * case 1:
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    // * Recursive case
    recursiveBubbleSort(arr, size - 1);
}

int main()
{
    vector<int> arr;
    int size;

    // Getting the size of the array
    cout << endl
         << "Enter the size of the array: ";
    cin >> size;
    cout << endl;

    // Taking user input for array elements
    for (int i = 0; i < size; i++)
    {
        int el;

        cout << "index " << i << " element: ";
        cin >> el;

        arr.push_back(el);
    }

    // Print the array
    cout << endl
         << "Array: ";
    print(arr);

    // Calling the sorting function
    recursiveBubbleSort(&arr[0], size);

    // Print the sorted array
    cout << endl
         << endl
         << "Sorted Array: ";
    print(arr);

    cout << endl
         << endl;
    return 0;
}