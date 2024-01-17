#include <iostream>
using namespace std;

// ! Function to find power using recursion
int power(int a, int b)
{
    // * Base case
    if (b == 0)
        return 1;

    if (b == 1)
        return a;

    // * Recursive case
    int ans = power(a, b / 2);

    if (b % 2 == 0)
    {
        return ans * ans; // ? if exponent is even
    }
    else
    {
        return a * ans * ans; // ? if exponent is odd
    }
}

int main()
{
    int a, b;

    cout << endl
         << "Enter a number and exponent: ";
    cin >> a >> b;

    int ans = power(a, b);

    cout << endl
         << "Result: " << ans << endl;

    cout << endl;
    return 0;
}