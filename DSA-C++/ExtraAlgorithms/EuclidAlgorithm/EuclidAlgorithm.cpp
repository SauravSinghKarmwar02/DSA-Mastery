#include<iostream>

using namespace std;

int gcd(int a, int b)
{
    if(a == 0) {
        return b;
    }
    if(b == 0) {
        return a;
    }

    while (a != b)  
    {
        if(a > b) {
            a -= b;
        }
        else {
            b -= a;
        }
    }
    return a;
    
}

int main()
{
    int a, b;
    
    cout << endl << "Enter the values of a and b: ";
    cin >> a >> b;
    cout << endl;

    int ans = gcd(a, b);

    cout << endl << "The GCD of " << a << " & " << b << "is: " << ans << endl;

    cout << endl;
    return 0;
}