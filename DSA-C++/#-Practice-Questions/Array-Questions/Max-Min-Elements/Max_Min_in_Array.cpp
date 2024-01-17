#include<iostream>
using namespace std;

// Declaring a function to fill the array elements 
void fillArray(int array[], int size);

// Declaring a function to sort the array
void Sort(int array[], int size);

// Declaring a function to print array items
void PrintArray(int array[], int size);

// Decalring a function to find max/min in an array
int Max(int array[], int size);
int Min(int array[], int size);

int main()
{
    // Asking user to enter the size of an array
    int n;
    cout << endl << "Enter the size: ";
    cin >> n;
    cout << endl;

    // Creating an array
    int array[n];

    // Asking user to fill the array
    cout << "Enter " << n << " elements: " << endl;

    // Using function to take input 
    fillArray(array, n);
    cout << endl;

    // Using function to print array items
    cout << "Array Items: ";
    PrintArray(array, n);
    cout << endl;

    // Using function to print max/min of array
    cout << endl << "Highest Number in array: " << Max(array, n);
    cout << endl << "Lowest Number in array: " << Min(array, n) << endl;

    // Printing Sorted Array
    Sort(array, n);
    cout << endl << "Sorted Array Items: ";
    PrintArray(array, n);
    cout << endl;

    cout << endl;
}

// Creating Body of fillArray function
void fillArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    
}

// Creating Body of Sort Function
void Sort(int array[], int size)
{
    for(int i = 0; i < size-1; i++)
    {
        for(int j=0; j < size-i; j++)
        {
            if(array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

// Creating Body of PrintArray function
void PrintArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if(i != (size-1))
        {
            cout << array[i] << ", ";
        }
        else
        {
            cout << array[i];
        }
    }
}

// Creating Body of MaxMin function
int Max(int array[], int size)
{
    int max = array[0];
    for(int i=1; i<size; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }
    return max;
}

int Min(int array[], int size)
{
    int min = array[0];
    for(int i=1; i<size; i++)
    {
        if(array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}