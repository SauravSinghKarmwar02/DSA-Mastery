#include<iostream>
using namespace std;

int main()
{
    cout << endl << "Solution 1: " << endl;
    // Problem 1
    {
        int a, b = 1;
        a = 10;
        if(++a)
            cout << b;
        else
            cout << ++b;
    }
    cout << endl;
    // Problem 2
    cout << endl << "Solution 2: " << endl;
    {
        int a = 1;
        int b = 2;

        if(a-- > 0 && ++b > 2)
        {
            cout << "Stage1 - Inside If ";
        }
        else
        {
            cout << "Stage2 - Inside else ";
        }
        cout << endl << "a: " << a << "  b: " << b << endl;
    }
    // Problem 3
    cout << endl << "Solution3: " << endl;
    {
        int number = 3;
        cout << (25 * (++number)) << endl;
    }
    // Problem 4
    cout << endl << "Solution4: " << endl;
    {
        int a = 1;
        int b = a++;
        int c = ++a;
        cout << b << endl;
        cout << c << endl;
    }
    cout << endl;
}