#include<iostream>
using namespace std;

// Declaring a function to no. of set bits
int countSetBits(int n, int m);

int main()
{
    // Asking user to enter two numbers
    int a, b;
    cout << endl << "Enter two numbers: ";
    cin >> a >> b;
    cout << endl;

    // Using function to find number of setbits
    int ans = countSetBits(a, b);

    // Printing the answer
    cout << "Total number of set bits in (a & b): " << ans << endl;

    cout << endl;
}

// Creating the body of the function
int countSetBits(int n, int m)
{
    int count1 = 0;
    while (n > 0)
    {
        count1 += (n & 1);
        n >>= 1;
    }
    int count2 = 0;
    while (m > 0)
    {
        count2 += (m & 1);
        m >>= 1;
    }
    return count1 + count2;
}