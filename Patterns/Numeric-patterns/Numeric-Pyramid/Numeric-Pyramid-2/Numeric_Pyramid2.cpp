#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << endl << "Enter a number: ";
    cin >> n;
    cout << endl;

    int i = n;
    while (i >= 1)
    {
        // NUM Triangle 1
        int j = 1;
        while (j <= i)
        {
            cout << j << " "; 
            j += 1;
        }
        // Star 1
        int star = n - i;
        while (star)
        {
            cout << "* " << "* ";
            star -= 1;
        }
        // Num Triangle 2
        int k = 1;
        int count = i;
        while (k <= i)
        {
            cout << count << " "; 
            count -= 1;
            k += 1;
        }
        cout << endl;
        i -= 1;
    }
    cout << endl;
    return 0;
}