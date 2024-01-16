// Recursion: When a function calls itself

#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 0 || n == 1)
        return n;

    return n * factorial(n - 1);
}

void count(int n)
{
    int num;
    if (n == 0)
        return;
    cout << n << " " << endl;

    count(n - 1);
}

int main()
{
    int n;
    cout << endl
         << "Enter a number: ";
    cin >> n;

    int result = factorial(n);

    cout << endl
         << "Factorial = " << result << endl
         << endl;

    count(n);

    return 0;
}
