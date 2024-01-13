#include <iostream>
using namespace std;

void sayDigits(int n)
{
    // Words
    string words[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    // Base Case
    if (n == 0)
        return;

    // Processing
    int digit = n % 10;
    n /= 10;

    // Recursive case
    sayDigits(n);

    // Print result
    cout << words[digit] << " ";
}

int main()
{
    int n;

    cout << endl
         << "Enter the number: ";
    cin >> n;

    cout << endl
         << endl
         << "Number in Words: ";

    // Call the function
    sayDigits(n);

    cout << endl
         << endl;
    return 0;
}