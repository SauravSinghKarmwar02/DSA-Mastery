#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "Enter a number: ";
    cin >> n;
    cout << endl;

    int i, j, count;

    i = 1;
    while (i <= n)
    {
        count = i;
        j = 1;
        while (j <= n)
        {
            if(j < i)
                cout << "  ";
            else 
                cout << count << " ";
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    cout << endl;
    return 0;
}