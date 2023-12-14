#include<iostream>
using namespace std;

int LinearSearch(int arr[], int target, int size);

int main()
{
    // Declareing required variables
    int n, i, target, size, result;

    // Asking user to enter number of elements for array
    cout<<endl<<"Enter the number of elements for array: ";
    cin>> n;

    // Declaring an array
    int arr[n];

    // Asking user to enter the elements of the array
    cout<<endl<<"Enter the elements: "<<endl;

    // Taking elements of array as input using loop
    for(i=0; i<n; i++){
        cin>> arr[i];
    }

    // Printing the array
    cout<<endl<<"array items = ";
    for(i=0; i<n; i++)  // Using for loop to print array elements
    {
        if(i==(n-1))
        {
            cout<<arr[i]<<endl;
        }
        else
        {
            cout<<arr[i]<<", ";
        }
        
    }

    // Asking user for target element which he/she wants to find in array
    cout<<endl<<"Enter the target number: ";
    cin>>target;

    // Using function to perform Linear Search
    result = LinearSearch(arr, target, n);

    // Printing the result
    if(result != -1)
    {
        cout<<endl<<"Element found at index: "<<result<<endl<<endl;
    }
    else
    {
        cout<<endl<<"Element not found."<<endl<<endl;
    }
    

    return 0;
}

int LinearSearch(int arr[], int target, int size){
    for(int i = 0; i<size; ++i){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}