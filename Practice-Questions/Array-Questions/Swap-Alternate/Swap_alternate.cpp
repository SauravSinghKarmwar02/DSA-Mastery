#include<iostream>
using namespace std;

void SwapAlternate(int array[], int size);
void PrintArray(int array[], int size);

int main()
{
    // Asking user to enter size of array
    int n;
    cout << endl << "Enter the size of array: ";
    cin >> n;
    cout << endl;

    // Creating an array 
    int array[n];

    // Asking user to enter the elements of array
    cout << "Enter " << n << " elements: " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> array[i];
    }

    // Printing the array
    cout << endl << "Array: ";
    PrintArray(array, n);
    cout << endl;

    // Performing alternate swap in array
    SwapAlternate(array, n);

    // Printing new array
    cout << endl << "New Array: ";
    PrintArray(array, n);
    cout << endl;

    cout << endl;
}

// Creating body of SwapAlternate function
void SwapAlternate(int array[], int size)
{
    for(int i = 0; i<(size-1); i += 2)
    {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
    }
}

// Creating body of PrintArray function
void PrintArray(int array[], int size)
{
    for(int i=0; i<size; i++)
    {
        if(i != (size-1))
            cout << array[i] << ", ";
        else
            cout << array[i];
    }
}