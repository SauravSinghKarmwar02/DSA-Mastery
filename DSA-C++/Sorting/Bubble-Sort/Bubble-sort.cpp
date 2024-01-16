#include<iostream>
using namespace std;

void PrintArray(int arr[], int n);
void BubbleSort(int arr[], int n);

int main() 
{
    // Asking user to enter the size of array
    int size;
    cout << endl << "Enter the size of array: ";
    cin >> size;

    // Declaring an array of size "size"
    int arr[size];

    // Asking user to fill the array
    cout << endl << "Enter " << size << " elements: " << endl;
    for(int i=0; i<size; i++) 
    {
        cin >> arr[i];
    }

    // Printing the array
    cout << endl << "Array = ";
    PrintArray(arr, size);
    cout << endl;

    // Sorting the array
    BubbleSort(arr, size);

    // Printing the sorted array
    cout << endl << "Sorted Array = ";
    PrintArray(arr, size);
    cout << endl;

    cout << endl;
    return 0;
}

// 'PrintArray' function
void PrintArray(int arr[], int n) 
{
    for(int i=0; i<n; i++) 
    {
        if(i == (n - 1)) 
        {
            cout << arr[i];
        }
        else 
        {
            cout << arr[i] << ", ";
        }
    }
}

// 'BubbleSort' function
void BubbleSort(int arr[], int n) 
{
    for(int i=1; i<n; i++) 
    {
        for (int j=0; j<n-1; j++) 
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}