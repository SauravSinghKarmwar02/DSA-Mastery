#include<iostream>
using namespace std;

// Declaring a function to find factorial
int Factorial(int n);

// Declaring a function to find nCr
int nCr(int n, int r);

int main()
{
    // Asking user to enter the value of n and r
    int n, r;
    cout << endl << "Enter the value of n: ";
    cin >> n;
    cout << endl << "Enter the value of r: ";
    cin >> r;
    cout << endl;

    // Using function to find nCr
    int result = nCr(n, r);

    // Printing the nCr value
    cout << "nCr of ("<< n << ", " << r << "): " << result << endl;
    cout << endl;
}

// Body of Factorial function
int Factorial(int num)
{
    if(num <= 1){
        return 1;
    }
    return num * Factorial(num-1);
}

// Body of nCr function
int nCr(int n, int r)
{
    int result = Factorial(n) / (Factorial(r) * Factorial(n-r));
    return result;
}