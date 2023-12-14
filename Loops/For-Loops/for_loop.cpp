#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "Enter the vlaue of n: ";
    cin >> n;
    cout << endl;

    int i = 1;

    cout << "Printing number from 1 to n: " << endl;
    for(; ; )
    {
        if(i <= n)
            cout << i << endl;
        else
            break;
        i++;
    }
    cout << endl;
}