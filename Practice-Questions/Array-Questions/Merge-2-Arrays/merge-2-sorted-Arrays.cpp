#include<iostream>
#include<vector>

using namespace std;

void printArray(int arr[], int n);
void Merge(int arr1[], int m, int arr2[], int n, int arr3[]);

int main() 
{
    int arr1[5] = {1,3,5,7,9};
    cout << endl << "Array1 = ";
    printArray(arr1, 5);
    cout << endl;

    int arr2[4] = {2,4,6,8};
    cout << endl << "Array2 = ";
    printArray(arr2, 4);
    cout << endl;

    int arr3[9] = {0};

    Merge(arr1, 5, arr2, 4, arr3);

    cout << endl << "Merged Array = ";
    printArray(arr3, 9);
    cout << endl;

    cout << endl;
    return 0;
}

// printArray function
void printArray(int arr[], int n) 
{
    for(int i=0; i<n; i++) 
    {
        (i == (n - 1)) ? cout << arr[i] : cout << arr[i] << ", ";
    }
}

// Merge function
void Merge(int arr1[], int m, int arr2[], int n, int arr3[]) 
{
    int i=0, j=0, k=0;

    while (i<m && j<n)
    {
        if(arr1[i] < arr2[j])
        {
            arr3[k++] = arr1[i++];
        }
        else 
        {
            arr3[k++] = arr2[j++];
        }
    }
    // copy first array element 
    while (i<m)
    {
        arr3[k++] = arr1[i++];
    }
    // Second array element 
    while (j<n)
    {
        arr3[k++] = arr2[j++];
    }
    
}