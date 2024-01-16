#include<iostream>
using namespace std;

// Declaring function to find Prime number
int isPrime(int n);

int main()
{
    // Asking user to enter a number
    int n;
    cout << endl << "Enter a number: ";
    cin >> n;
    cout << endl;

    // Checking if 'n' is prime or not
    int result = isPrime(n);
    if (result == true)
    {
        cout << n << " is a Prime Number." << endl;
    }
    else
    {
        cout << n << " is not a Prime Number." << endl;
    }

    // Counting how many prime numbers are there upto n
    int total = 0;
    for(int j=1; j<=n; j++)
    {
        if(isPrime(j) == true)
            total++;
        else
            continue;
    }
    // Printing total no. of prime numbers upto n
    cout << endl << "Total Prime Numbers upto " << n << " = " << total << endl;

    // Printing all Prime numbers upto n
    cout << endl << "All Prime number upto " << n << ": " << endl;
    for(int i=1; i<=n; i++)
    {
        if(isPrime(i) == true)
            cout << i << " ";
        else
            continue;
    }

    cout << endl << endl;
}

int isPrime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}