#include <iostream>
using namespace std;

// Function to find fibonacci number
int Fibonacci(int n)
{
    // Base case
    if (n <= 1)
        return n;


    // Recursive case
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

// Function to print fibonacci result
void printFibonacci(int n)
{
    // Print the result
    cout << endl
         << n << "th Fibonacci Number = " << Fibonacci(n) << endl;

    // Print the fibonacci series
    cout << endl
         << "Fibonacci Series: ";

    for (int i = 0; i <= n; i++)
    {
        if (i == n)
        {
            cout << Fibonacci(i) << endl;
        }
        else
        {
            cout << Fibonacci(i) << ", ";
        }
    }

    cout << endl;
}

int main()
{
    int n;

    // Take user input
    cout << endl
         << "Enter a number: ";
    cin >> n;

    // Print Fibonacci number using functions
    printFibonacci(n);

    return 0;
}