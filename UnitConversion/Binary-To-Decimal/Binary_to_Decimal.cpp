#include<iostream>
#include<math.h>
using namespace std;

// Declaring a function which converts Binary to Decimal
int toDecimal(int n);

int main()
{
    // Asking user to enter a Binary number
    int n;
    cout << endl << "Enter a Binary number: ";
    cin >> n;
    cout << endl;

    // Using function to convert binary number to decimal numaber
    int DecimalNumber = toDecimal(n);

    // Printing the Decimal number
    cout << "Binary Number: " << n << endl
        << "Decimal Number: " << DecimalNumber << endl;

    cout << endl;
}

// Body of toDecimal function
int toDecimal(int n)
{
    int i = 0, ans = 0;
    while (n != 0)
    {
        int digits = n % 10;
        if(digits == 1) {
            ans = ans + pow(2, i); 
        }
        n = n / 10;
        i++;
    }
    return ans;
}