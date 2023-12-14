#include<iostream>
using namespace std;

// Declaring function to find nth fibonacci number
int Fibonacci(int n);

int main()
{
    // Asking user to enter a number
    int n;
    cout << endl << "Enter a number: ";
    cin >> n;
    cout << endl;

    // Using function to find nth Fibonacci number
    int ans = Fibonacci(n);

    // Printing the nth fibonacci number
    cout << n << " number of Fibonacci Series: " << ans << endl;
    cout << endl;

    // Using loop to print Fibonacci number upto (n-1)th position in fibonacci series
    for(int i=0; i < n; i++)
    {
        cout << i << " number of Fibonacci Series: " << Fibonacci(i) << endl;
    }

    cout << endl;
}

// Creating Body of function
int Fibonacci(int a)
{
    if(a <= 1){
        return a;
    }
    return Fibonacci(a - 1) + Fibonacci(a - 2);
}