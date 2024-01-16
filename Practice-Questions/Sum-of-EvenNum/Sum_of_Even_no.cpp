#include<iostream>
using namespace std;

int main()
{
    // Declareing all required variables
    int n, sum=0, i=1, e;

    // Asking user to enter a number 
    cout << endl << "Enter a number: ";
    cin >> n;

    // Printing all the even numbers upto n
    cout << endl << "Even Numbers = ";
    for (e = 1; e <= n; e++)
    {
        if(e % 2 == 0)
        {
            if(e == (n-1) || e == n)
            {
                cout << e;
            }
            else
            {
                cout << e << ", ";
            }
        }
    }

    cout << endl;   // Blank line

    // Using  loop to find sum of all even numbers upto n
    while (i <= n)
    {
        if(i % 2 == 0)
        {
            sum += i;
        }
        ++i;
    }

    // Printing the final value of sum
    cout << endl << "SUM: " << sum << endl;

    cout << endl;
    return 0;
}