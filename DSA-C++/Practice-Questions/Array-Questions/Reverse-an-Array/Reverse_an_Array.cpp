#include<iostream>
using namespace std;

// Declaring a function which reverses an array
void ReverseArray(int array[], int size);
// Declaring a function which prints array elements
void PrintArray(int array[], int size);

int main()
{
    // Asking user to enter the size of array he/she wants
    int size;
    cout << endl << "Enter the size of array: ";
    cin >> size;
    cout << endl;

    // Creating an array 
    int array[size];

    // Asking user to fill the elements of the array
    cout << "Enter " << size << " elements: " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << endl;

    // Printing the array
    cout << endl << "Array: ";
    PrintArray(array, size);
    cout << endl;

    // Creating new array which is reverse of previous array
    ReverseArray(array, size);

    // Printing reversed array
    cout << endl << "NewArray: ";
    PrintArray(array, size);
    cout << endl;

    cout << endl;
}

// Creating Body of ReverseArray function
void ReverseArray(int array[], int size)
{
    for(int i = 0; i < size/2; i++)
    {
        int temp = array[i];
        array[i] = array[size - i - 1];
        array[size - i - 1] = temp;
    }
}

// Creating Body of PrintArray function
void PrintArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if(i != (size - 1))
            cout << array[i] << ", ";
        else
            cout << array[i];
    }
}