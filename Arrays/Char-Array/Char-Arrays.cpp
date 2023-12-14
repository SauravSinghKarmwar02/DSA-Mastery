#include<iostream>

using namespace std;


int main()
{
    // Creating an integer and a char arrays
    int arr[5] = {1, 2, 3, 4, 5};
    char ch[6] = "ABCDE";

// Cout function is differently implemented for int and char arrays
    cout << endl << arr << endl;
    cout << endl << ch << endl;

    // Creating a char pointer
    char *c = &ch[0];

    // Printing the value of pointer (prints entire string)
    cout << endl << c << endl;

    char temp = 'z';
    char *p = &temp; 
    cout << endl << p << endl;

    cout << endl;
    return 0;
}