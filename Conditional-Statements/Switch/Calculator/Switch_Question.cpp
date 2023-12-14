#include<iostream>
using namespace std;

// Declaring a function which perform calculation using switch statement
int Calculate(int a, int b, int oprt);

// Declaring a function which prints results
int Print (int a, int b, int oprt, int result);

int main()
{
    // Asking user to enter two numbers
    int a, b;
    cout << endl << "Enter two numbers: ";
    cin >> a >> b;
    cout << endl;

    // Asking user to enter an operator
    int oprt;
    cout << "Enter an Operator: ";
    cin >> oprt;
    cout << endl;

    // Using function to perform calculation
    int result = Calculate(a, b, oprt);

    // Printing the result
    Print(a, b, oprt, result);

    cout << endl;
}

// Createing body of function
int Calculate(int a, int b, int oprt)
{
    switch (oprt)
    {
    case '+':
        return a + b;
        break;
    case '-':
        return a - b;
        break;
    case '*':
        return a * b;
        break;
    case '/':
        return a / b;
        break;
    case '%':
        return a % b;
        break;
    }
}

// Createing body of Printing function
int Print(int a, int b, int oprt, int result)
{
    if(oprt == 1)
        cout << a << " + " << b << " = " << result << endl;
    else if(oprt == 2)
        cout << a << " - " << b << " = " << result << endl;
    else if(oprt == 3)
        cout << a << " x " << b << " = " << result << endl;
    else if(oprt == 4)
        cout << a << " / " << b << " = " << result << endl;
    else if(oprt == 5)
        cout << a << " % " << b << " = " << result << endl;
    else 
        cout << "Invalid Operator." << endl;

}