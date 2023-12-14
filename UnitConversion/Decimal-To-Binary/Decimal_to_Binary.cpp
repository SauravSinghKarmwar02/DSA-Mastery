#include<iostream>
#include<math.h>
using namespace std;

// Declaring function which converts decimal to binary
int toBinary(int n);

int main()
{
    // Asking user to enter a number
    int n;
    cout << endl << "Enter a number: ";
    cin >> n;
    cout << endl; 

    // Using function to get binary representation of n
    int BinaryNumber = toBinary(n);

    // Checking if number is positive or not
    string DecimalRepresentation;
    if(n > 0){
        DecimalRepresentation = "Decimal Representation: " + to_string(n) + ".00";
    }else{
        DecimalRepresentation = "Decimal Representation: " + to_string(n);
    }

    // Printing the Binary Number
    cout << "Number: " << n << endl
        << DecimalRepresentation << endl
        << "Binary Representation: " << BinaryNumber << endl;

    cout << endl;
}

// Body of function
int toBinary(int n)
{
    if (n == 0){
        return 0;
    }

    int ans = 0, base = 1;

    while (n != 0)
    {
        int bit = n % 2;
        ans += bit * base;

        n = n / 2;
        base *= 10;
    }
    return ans;
}