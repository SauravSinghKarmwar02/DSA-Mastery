#include<iostream>
using namespace std;

// Declaring Function to find Fibonacci Number 
int Fibonacci(int n);

int main()
{
    // Asking the user to enter a number
    int n;
    cout << endl << "Enter the value of n: ";
    cin >> n;
    cout << endl;

    // Using the function to find the Fibonacci number of the nth term
    int FibNum = Fibonacci(n);
    
    // Printing the Fibonacci number
    cout << n << "th term of Fibonacci series is " << FibNum << endl;

    // Printing Fibonacci Series
    cout << endl << "Fibonacci Series upto " << n << "th term: " << endl;
    for(int i = 0; i<=n; i++)
    {
        int result = Fibonacci(i);
        cout << result << " ";
    }
    cout << endl << endl;
}

// Creating the body of the function
int Fibonacci(int n)
{
    if(n <= 1)
    {
        return n;
    }
    return Fibonacci(n-1) + Fibonacci(n-2);
}
