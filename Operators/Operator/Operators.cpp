#include<iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    // Bitwise operators
    cout << "a&b = " << (a&b) << endl;
    cout << "a|b = " << (a|b) << endl;
    cout << "~a = " << (~a) << endl;
    cout << "a^b = " << (a^b) << endl;

    // Left shift and Right shift 
    cout << endl << (17>>1) << endl; 
    cout << (17>>2) << endl; 
    cout << (19<<1) << endl; 
    cout << (21<<2) << endl; 

    // Increment and Decrement 
    int i = 7;

    cout << endl << (++i) << endl;
    cout << (i++) << endl;
    cout << (i--) << endl;
    cout << (--i) << endl;
    return 0;
}