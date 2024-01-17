#include <iostream>
using namespace std;

// Function to reverse the string using recursion
void reverseString(string &str, int i, int j)
{
     // Base case
     if (i > j)
          return;

     swap(str[i], str[j]);
     i++;
     j--;

     // Recursive case
     reverseString(str, i, j);
}

int main()
{
     // Variable to store string
     string str;

     // Asking user for input
     cout << endl
          << "Enter the string: ";

     // Storing the user input
     cin >> str;

     // Using the function to reverse the string
     reverseString(str, 0, str.length() - 1);

     // Printing the reversed string
     cout << endl
          << "Reversed String: " << str << endl;

     cout << endl;
     return 0;
}