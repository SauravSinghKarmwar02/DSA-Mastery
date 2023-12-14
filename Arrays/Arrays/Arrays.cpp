#include<iostream>
using namespace std;

// Function to find largest number
int Largest(int size, int array[]);

int main()
{
    // Asking user to enter the size of array
    int n;
    cout << endl << "Enter the size of array: ";
    cin >> n;
    cout << endl;

    // Declaring an array of int datatype
    int array[n];

    // Asking User to enter 'n' elements
    cout << "Enter " << n << " elements: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Printing the array items
    cout << endl << "Array Items: ";
    for(int i = 0; i < n; i++)
    {
        if(i == (n-1))
            cout << array[i];
        else
            cout << array[i] << ", ";
    }
    cout << endl;

    // Finding largest element 
    int LargestNumber = Largest(n, array);

    // Printing Largest number
    cout << endl << "Largest number in the array: " << LargestNumber << endl;

    cout << endl;
}

// Creating the body of function
int Largest(int size, int array[])
{
    for(int i=1 ; i<size; i++)
    {
        if(array[i] > array[0])
        {
            int temp = array[0];
            array[0] = array[i];
            array[i] = temp;
        }
    }
    int largest = array[0];
    return largest;
}