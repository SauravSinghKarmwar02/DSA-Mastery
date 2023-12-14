#include<iostream>
using namespace std;

// Declaring required function 
void PrintArray(int arr[], int size);
void SelectionSort(int arr[], int size);

int main() {
    // Asking user to enter the size of array
    int size;
    cout << "Enter the size of array: ";
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
    SelectionSort(array, size);

    // Printing the sorted array
    cout << endl << "Sorted Array = ";
    PrintArray(array, size);
    cout << endl;

    cout << endl;
    return 0;
}

// Body of 'PrintArray' function
void PrintArray(int arr[], int size) {
    for(int i=0; i<size; i++) {
        if(i == size - 1) {
            cout << arr[i];
        } 
        else {
            cout << arr[i] << ", ";
        }
    }
}

// Body of 'SelectionSort' function
void SelectionSort(int arr[], int size) {

    for(int i = 0; i < (size - 1); i++) {

        int minIndex = i;

        for (int j = i+1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
}