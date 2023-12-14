#include<iostream>
using namespace std;

// Declaring a linear search function
int LinearSearch(int array[], int size, int target);

int main()
{
    // Asking user to enter the size of array
    int n;
    cout << endl << "Enter the size of array: ";
    cin >> n;
    cout << endl;

    // Declaring an array
    int array[n];

    // Asking user to enter the elements of array
    cout << "Enter " << n << " elements: " << endl;
    for(int i = 0; i < n; i++)
    { 
        cin >> array[i];
    }

    // Asking user to enter target element
    int target;
    cout << endl << "Enter the target element: ";
    cin >> target;
    cout << endl;

    // Performing Linear Search using function
    int result = LinearSearch(array, n, target);

    // Printing the result of Linear Search
    if(result != -1)
        cout << '"' << target  << '"' << " is found at index " << result << "." << endl;
    else
        cout << '"' << target << '"' << " is not present in array." << endl;

    // Printing the array
    cout << endl << "Array elements: ";
    for(int i = 0; i < n; i++)
    {
        if(i != (n-1))
            cout << array[i] << ", ";
        else 
            cout << array[i] << endl;
    }

    cout << endl;
}

// Creating Body of LinearSearch function
int LinearSearch(int array[], int size, int target)
{
    for(int i = 0; i < size; i++)
    {
        if(target == array[i])
            return i;
    }
    return -1;
}