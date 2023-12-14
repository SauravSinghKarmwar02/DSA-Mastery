#include<iostream>
using namespace std;

// Declaring a function which performs Binary Search
int BinarySearch(int arr[], int n, int target);

int main()
{
    // Declareing required variables
    int n, i, target, result;

    // Asking user to enter size of array
    cout << endl << "Enter the size of array: ";
    cin >> n;

    // Declareing an Array of size n
    int arr[n];

    // Asking user to enter the elements of array
    cout << endl << "Enter " << n << " elements: " << endl;

    // Taking user input using foor loop
    for(i=0; i<n; ++i)
    {
        cin >> arr[i];
    }

    // Printing the array
    cout << endl << "Array = ";

    // Using for loop to print array elements
    for(i=0; i<n; ++i)
    {
        if(i==(n-1)){
            cout << arr[i] << endl;
        }
        else
        {
            cout << arr[i] << ", ";
        }
    }

    // Printing Sorted Array
    cout << endl << "Sorted Array = ";

    // Performing Bubble Sort
    for(int i=0; i<n-1; ++i)
    {
        for(int j=0; j<n-i-1; ++j)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    // Using loop to print sorted array elements
    for(i=0; i<n; ++i)
    {
        if(i==(n-1))
        {
            cout << arr[i] << endl;
        }
        else 
        {
            cout << arr[i] << ", ";
        }
    }

    // Asking user for target element
    cout<< endl << "Enter the target element: ";
    cin >> target;

    // Performing Binary Search
    result = BinarySearch(arr, n, target);

    // Printing result
    if(result != -1)
    {
        cout << endl << "Element found at index: " << result << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }
    

    cout << endl;
    return 0;
}

int BinarySearch(int arr[], int n, int target)
{
    int high = n - 1;
    int low = 0;
    int mid;

    while (low <= high)
    {
        mid = (low + (high - low)) / 2;

        if(arr[mid] == target)
        {
            return mid;
        }
        else if(arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1; // Element not found
}