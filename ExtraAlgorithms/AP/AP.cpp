#include<iostream>
using namespace std;

// Declaring a function to caluclate AP
int AP(int num);

int main()
{
    // Asking user to enter a number of which AP he/she wants to find
    int n;
    cout << endl << "Enter a number: ";
    cin >> n;
    cout << endl;

    // Using function to find AP of the number
    int ans = AP(n);
    // Printing the AP of n
    cout << "AP of " << n << ": " << ans << endl;
    cout << endl;

    // Printing the AP of all numbers upto n
    for (int i = 1; i < n; i++)
    {
        cout << "AP of " << i << ": " << AP(i) << endl;
    }
    

    cout << endl;
}

int AP(int a)
{
    return (3 * a + 7);
}