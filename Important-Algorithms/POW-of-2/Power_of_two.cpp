#include<iostream>
#include<math.h>
using namespace std;

// Declaring functions 
bool PowOfTwo(int n);
int NoOfPow(int n);


int main()
{
    // Asking user to enter an integer
    int n;
    cout << endl << "Enter an Integer: ";
    cin >> n;
    cout << endl;

    // Checking & Printing if n is divisible by two using function
    if(PowOfTwo(n) != false)
    {
        cout << n << " is a power of 2." << endl;
    }
    else
    {
        cout << n << " is not a power of 2." << endl;
    }

    // Printing the power of two
    int result = NoOfPow(n);
    if(result != -1)
    {
        cout << endl << n << " = 2^" << result << endl;
    }

    cout << endl;
}

// Creating Body of PowOfTwo function
bool PowOfTwo(int n)
{
    int countSetBits = 0;
    while (n > 0)
    {
        if(n & 1)
        {
            countSetBits++;
            if(countSetBits > 1)
                return false;
        }
        n >>= 1;
    }
    return countSetBits == 1;
}

// Creating Body of NoOfPow function
int NoOfPow(int n)
{
    if(n % 2 == 0)
    {
        for (int i = 0; i <= 30; i++)
        {
        if(n == pow(2, i))
            return i;
        } 
    }
    return -1;
}