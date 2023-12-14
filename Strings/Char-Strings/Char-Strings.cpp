#include<iostream>

using namespace std;

bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n-1;

    while (s<=e)
    {
        if(a[s] != a[e]) {
            return 0;
        }
    }
    return 1;
}

void Reverse(char name[], int n) {
    int s = 0;
    int e = n-1;

    while (s<=e)
    {
        swap(name[s++], name[e--]);
    }
    
}

int getLength(char name[]) {
    int count = 0, i = 0;
    while (name[i] != '\0')
    {
        count++;
        i++;
    }
    return count;
}

int main() {
    // Declaring a char datatype that stores name
    char name[10];

    // Taking user input 
    cout << endl << "Enter your first name: ";
    cin >> name;
    cout << endl;

    // Finding the size of array
    int n = sizeof(name) / sizeof(name[0]);

    // Printing the name array
    cout << "Name: ";
    for(int i=0; i<n; i++) {
        name[i] = toupper(name[i]);
        cout << name[i] << " ";
    } 
    cout << endl;

    // Printing the length of the array
    cout << endl << "Length of the array: " << getLength(name) << endl;

    // Reverse of name
    Reverse(name, n);
    cout << endl << "Reverse of name: ";
    for(int i=0; i<n; i++) {
        cout << name[i] << " ";
    } 
    cout << endl;

    // Check Palindrome
    cout << endl << "Palindrome or not: " << checkPalindrome(name, n) << endl;

    cout << endl;
    return 0;
}