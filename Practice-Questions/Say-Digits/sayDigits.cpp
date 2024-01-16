#include <iostream>
#include <vector>
using namespace std;

// Function to convert number into words
void sayDigits(int num)
{
    vector<string> words = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "invalid digit"};

    vector<string> result;

    while (num > 0)
    {
        // Break the number into digits
        int digit = num % 10;

        // Check the whether the digit is in range
        if (digit < 0 || digit > 9)
        {
            cout << "Invalid digit, out of range (0-9)" << endl;
        }
        else
        {
            result.push_back(words[digit]);
        }
        num /= 10;
    }

    // Print the result
    for (int i = result.size() - 1; i >= 0; i--)
    {
        cout << result[i] << " ";
    }
    cout << endl;
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

    cout << endl;
    return 0;
}