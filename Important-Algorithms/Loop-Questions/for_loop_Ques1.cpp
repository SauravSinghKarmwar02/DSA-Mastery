#include<iostream>
using namespace std;

int main()
{
    cout << endl;
    // Problem 1
    cout << "Solution 1: ";
    for(int i = 0; i <= 5; i++)
    {
        cout << i << " ";
        i++;
    }
    cout << endl;
    // Problem 2
    cout << "Solution 2: ";
    for(int i = 0; i <= 5; i--)
    {
        cout << i << " ";
        if(i <= 0)
            break;
        else
            cout << i << " ";
        i++;
    }
    cout << endl;
    // Problem 3
    cout << "Solution 3: ";
    for(int i = 0; i <= 15; i += 2)
    {
        cout << i << " ";
        if(i&1)
            continue;
        i++;
    }
    cout << endl;
    // Problem 4
    cout << "Solution 4: " << endl;
    for(int i=0; i < 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            cout << i << " " << j << endl;
        }
    }
    cout << endl;
    // Problem 5
    cout << "Solution 5: ";
    for(int i = 0; i < 5; i++)
    {
        for(int j = i; j <= 5; j++)
        {
            if(i + j == 10)
                break;
            cout << i << " " << j << endl;
        }
    }
    cout << endl;
    cout << endl;
}