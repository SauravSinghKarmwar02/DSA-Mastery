#include<iostream>

using namespace std;

int main()
{
    int num = 5;

    cout << endl << "value of num is " << num << endl;

    // address of Operator -&
    cout << "address of num is : " << &num << endl;

    // Creating a pointer to store num 
    int *ptr = &num;

    // Printing the value of pointer
    cout << endl << "Value of ptr is : " << *ptr << endl;
    cout << "address of ptr is : " << ptr << endl;

    // Printing the size of int and int pointer
    cout << endl << "size of integer is " << sizeof(num) << endl;
    cout << "size of int pointer is " << sizeof(ptr) << endl;

    // Creating a char pointer
    char c = 'S';
    char *cp = &c;

    // Printing the size of char and char pointer
    cout << endl << "size of char is " << sizeof(c) << endl;
    cout << "size of char pointer is " << sizeof(cp) << endl; 

// Creating a double pointer
    double d = 4.2;
    double *p2  = &d;

    // Printing the size of double and double pointer
    cout << endl << "size of double is " << sizeof(d) << endl;
    cout << "size of double pointer is " << sizeof(p2) << endl;

    // Copying a pointer to another pointer
    char *cpy = cp;

    // Printing the value of new copied pointer
    cout << endl << "Address: " << endl;
    cout << "cp : " << cp << endl << "cpy : " << cpy << endl;
    cout << endl << "Values: " << endl;
    cout << "cp : " << *cp << endl << "cpy: " << *cpy << endl;

    // Pointer arithmetic
    cout << endl << "ptr : " << *ptr << endl;
    *ptr += 1;
    cout << "New ptr : " << *ptr << endl;

    // THE END
    cout << endl;
    return 0;
}