#include<iostream>
using namespace std;

// Createing function which checks prime number
bool isPrime(int n);

int main()
{
    // Declareing required variables
    int n, i=1, sum=0;

    // Asking user to enter a number
    cout << endl << "Enter a number: ";
    cin >> n;

    // Printing all Prime numbers upto n
    cout << endl << "Prime Numbers = ";
    while (i <= n)
    {
        if (isPrime(i))
        {
            if(i == n || i == (n - 1))
                cout << i;
            else
                cout << i << ", ";
            sum += i;
        }
        
        ++i;
    }
    

    cout << endl;   // Printing blank line

    // Printing the sum of all prime numbers upto n
    cout << endl << "SUM: " << sum << endl;

    cout << endl;
    return 0;
}

bool isPrime(int n)
{
    if(n <= 1)
        return false;

    if(n <= 3)
        return true;

    if(n % 2 == 0 || n % 3 == 0)
        return false;

    for(int i = 5; i * i <= n; i += 6)
    {
        if(n % i == 0 || n % (i+2) == 0)
            return false;
    }
    return true;
}