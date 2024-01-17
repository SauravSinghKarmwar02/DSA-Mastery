// ? A palindrome is sequence of chars which remains unchanged when its characters are reversed

#include <iostream>
using namespace std;

// * Function to clean the string (remove non-alphanumeric characters and converts them to lowercase)
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

// * Function to reverse the string
string reverseString(string str)
{
    // Variable to store result
    string result;

    // Using for loop to pushBack element of last index at first index in result
    for (int j = str.length() - 1; j >= 0; j--)
    {
        result.push_back(str[j]);
    }

    // Returning the result
    return result;
}

// * Function to check palindrome
bool CheckPalindrome(string str)
{
    // Reverse the string using function
    string reversedString = reverseString(str);

    // Compare the cleaned string with its reverse
    return str == reversedString;
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

    // Printing the reversed string
    cout << endl
         << "Reversed String: " << reverseString(cleanedStr) << endl;

    // check Palindrome
    bool ans = CheckPalindrome(cleanedStr);

    // Print the result of palindrome
    cout << endl
         << "isPalindrome: " << (ans ? "true" : "false") << endl;

    cout << endl;
    return 0;
}