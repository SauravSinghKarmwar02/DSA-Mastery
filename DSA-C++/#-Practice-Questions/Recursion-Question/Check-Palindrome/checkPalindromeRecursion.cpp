#include <iostream>
using namespace std;

// ! Function to clean the string (remove non-alphanumeric characters and converts them to lowercase)
string cleanString(string str)
{
    string cleanedStr;
    for (char ch : str)
    {
        if (isalnum(ch))
        {
            cleanedStr.push_back(tolower(ch));
        }
    }
    return cleanedStr;
}

// ! Function to check Palindrome
bool CheckPalindrome(string str, int i, int j)
{
    // * Base case
    if (i >= j)
        return true;

    if (str[i] != str[j])
    {
        return false;
    }
    else
    {
        // * Recursive case
        return CheckPalindrome(str, i + 1, j - 1);
    }
}

int main()
{
    // Variable to store user input
    string str;

    // Asking user for input
    cout << endl
         << "Enter an Input: ";

    // storing the input into variable
    getline(cin, str); // ? Using getline to include spaces in the input

    // Print a line
    cout << endl
         << "==============================" << endl;

    // Clean the string
    string cleanedStr = cleanString(str);

    // Print the cleaned String
    cout << endl
         << "String: " << cleanedStr << endl;

    // Check Palindrome using function
    bool ans = CheckPalindrome(cleanedStr, 0, cleanedStr.length() - 1);

    // Print the result of palindrome
    cout
        << endl
        << "isPalindrome: " << (ans ? "true" : "false") << endl;

    cout << endl;
    return 0;
}