#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    char *ptr = &ch;

    ch++;

    cout << endl
         << *ptr << endl
         << endl;

    char arr[] = "abcde";
    char *p = &arr[0];

    cout << p << endl
         << endl;

    p++;

    cout << p << endl
         << endl;

    return 0;
}