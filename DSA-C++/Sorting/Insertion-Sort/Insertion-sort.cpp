#include<iostream>
using namespace std;

void PrintArray(int arr[], int size);
void InsertionSort(int arr[], int size);

int main()
{
    // Asking user to enter the size of array
    int size;
    cout << endl << "Enter the size of array: ";
    cin >> size;
    cout << endl;

    // Declaring an array
    int array[size];

    // Filling the array
    cout << "Enter " << size << " elements: " << endl;
    for(int i=0; i<size; i++) {
        cin >> array[i];
    }
    cout << endl;

    // Printing the array
    cout << "Array = ";
    PrintArray(array, size);
    cout << endl;

    // Sorting the array
    InsertionSort(array, size);

    // Printing the sorted array
    cout << endl << "Sorted Array = ";
    PrintArray(array, size);
    cout << endl;

    cout << endl;
    return 0;
}

// PrintArray function
void PrintArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        (i == (size - 1)) ? cout << arr[i] : cout << arr[i] << ", "; 
    }
}

void InsertionSort (int arr[], int size) {
    for (int i = 1; i < size; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        for (; j >= 0; j--)
        {
            if(arr[j] > temp) {
                arr[j+1] = arr[j]; 
            }
            else {
                break;
            }
        }
        
        arr[j+1] = temp;
    }
}
