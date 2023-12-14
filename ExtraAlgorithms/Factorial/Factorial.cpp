#include<iostream>
using namespace std;

// Function to find factorial
int Factorial(int n);

int main()
{
    // Declareing required variables
    int n, result;

    // Asking user the number to find factorial
    cout << endl << "Enter a number: ";
    cin >> n;

    // Finding factorial using a function
    result = Factorial(n);

    // Printing the result
    cout << endl << "Factorial of " << n << " = ";
    for(n; n>=1; --n)
    {
        if(n > 1)
        {
            cout << n << " x ";
        }
        else
        {
            cout << n;
        }
        
    }
    cout << " = " << result << endl;

    cout << endl;
    return 0;
}

// Body of Factorial function
int Factorial(int n)
{
    int factorial = 1;

    for(n; n>=1; --n)
    {
        factorial *= n;
    }
    return factorial;
}