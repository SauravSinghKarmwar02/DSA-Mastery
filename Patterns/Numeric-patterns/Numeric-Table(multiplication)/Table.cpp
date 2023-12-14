#include<iostream>

using namespace std;

int main()
{
    int num;

    cout << endl << "Enter the number of which multiple you want: ";
    cin >> num;
    cout << endl;

    for(int i=1; i<=10; i++)
    {
        cout << num << " x " << i << " = " << num*i << endl;
    }

    cout << endl;
}