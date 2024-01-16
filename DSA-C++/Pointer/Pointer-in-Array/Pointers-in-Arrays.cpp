#include<iostream>

using namespace std;

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Printing the address of array items
    cout << endl << "address of first memory block is " << arr << endl;
    cout << endl << "address of first memory block is " << &arr[0] << endl;

    // Printing the value of array location
    cout << endl << "1st value: " << *arr << endl;
    cout << "2nd value: " << *(arr+1) << endl;
    cout << "3rd value: " << *(arr + 2) << endl;
    cout << "4th value: " << *(arr + 3) << endl;

    // Using for loop to print value of array using pointers
    cout << endl;
    for(int i=0; i<10; i++)
    {
        cout << "Value of index[" << i << "] = " << *(arr+i) << endl;
    }

    int *ptr = &arr[1];
    cout << endl << "ptr: " << *ptr << endl;

    ptr = ptr + 3;
    cout << endl << "ptr: " << *ptr << endl;

    cout << endl;
    return 0;
}