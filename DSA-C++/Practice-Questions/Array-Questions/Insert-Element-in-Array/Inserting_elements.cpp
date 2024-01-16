#include<iostream>
using namespace std;

// Function protypes
void PrintElements(int arr[], int n);
void InsertElement(int arr[], int n, int element, int index);

int main()
{
    // Declareing required variables
    int n, element, index;

    // Asking user for the size of array
    cout << endl << "Enter the size of array: ";
    cin >> n;

    // Declareing an array
    int* arr = new int[n];

    // Asking user to enter elements of array
    cout << endl << "Enter the elements: " << endl;
    for(int i=0; i<n; ++i)
    {
        cin >> arr[i];
    }

    // Printing the array
    cout << endl << "Array items = ";
    PrintElements(arr, n);

    // Asking User to enter element and index
    cout <<endl << endl << "Enter the element and index: " << endl;
    cin >> element >> index;

    // Using function to insert element at given index
    InsertElement(arr, n, element, index);

    // Printing new array
    cout << endl << "Updated Array = ";
    PrintElements(arr, n);

    // Printing the new element inserted
    cout << endl << endl << "New element " << element << " is inserted at Index " << index << endl;

    // Clean up allocated memory
    delete[] arr;

    cout << endl;
    return 0;
}

// Body of function "PrintElement"
void PrintElements(int arr[], int n)
{
    for(int i=0; i<n; ++i)
    {
        if(i == (n-1))
            cout << arr[i];
        else   
            cout << arr[i] << ", ";
    }

}

// Body of function "InsertElement"
void InsertElement(int arr[], int n, int element, int index)
{
    if (index >= 0 && index <= n)
    {
        // Shift elements to the right to make space for the new element
        for(int i = n -1; i > index; --i)
        {
            arr[i] = arr[i - 1];
        }
        // Inserting new element at specific index
        arr[index] = element;
    }
    else
    {
        cout << endl << "Index not found." << endl;
    }
}