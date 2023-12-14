#include<iostream>
using namespace std;

// Decalring a function which find sum of all elements of array
int Sum(int array[], int size);

int main()
{
    // Asking user to enter the size of array
    int n;
    cout << endl << "Enter the size of array: ";
    cin >> n;
    cout << endl;

    // Declaring an array of size n
    int array[n];

    // Asking user to enter the array elements
    cout << "Enter " << n << " elements: " << endl;
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

    // Printing all the elements of array
    cout << endl << "Array Elements: ";
    for(int i=0; i<n; i++)
    {
        if(i != (n-1))
            cout << array[i] << ", ";
        else
            cout << array[i] << endl;
    }

    // Printing the sum of all elements of array
    cout << endl << "SUM of all elements: " << Sum(array, n) << endl;

    cout << endl;
}

// Creating Body of Sum function
int Sum(int array[], int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        sum += array[i];
    }
    return sum;
}