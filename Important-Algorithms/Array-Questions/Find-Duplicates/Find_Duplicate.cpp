#include<iostream>
using namespace std;

void PrintArray(int array[], int size);
void PrintDuplicate(int array[], int size);

int main()
{
    // Asking user to enter the size of array
    int n;
    cout << endl << "Enter the size of array: ";
    cin >> n;
    cout << endl;

    // Creating an array
    int array[n];

    // Asking user to enter the elements
    cout << "Enter " << n << " elements: " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> array[i];
    }
    cout << endl;

    // Printing the array
    cout << "Array: ";
    PrintArray(array, n);
    cout << endl;

    // Finding Duplicate elements
    cout << "Duplicate elements: ";
    PrintDuplicate(array, n);

    cout << endl;

}

// PrintArray function
void PrintArray(int array[], int size)
{
    for(int i=0; i<size; i++)
    {
        if(i != (size-1))
            cout << array[i] << ", ";
        else 
            cout << array[i] << endl;
    }
}

// Duplicate function
void PrintDuplicate(int array[], int size)
{
    bool hasDuplicate = false;

    for(int i=0; i<(size-1); i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(array[j] == array[i])
            {
                if(!hasDuplicate)
                {
                    hasDuplicate = true;
                    cout << array[i];
                }
                cout << ", " << array[j];
            }
        }
    }
    if(!hasDuplicate)
    {
        cout << "None";
    }
    cout << endl;
}