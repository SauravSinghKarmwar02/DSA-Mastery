#include<iostream>

using namespace std;

void Print(int *p) 
{
    cout << *p << endl;
}

void update(int *p) 
{
    *p += 1;
}

int getSum(int arr[], int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int value = 5;
    int *p = &value;

    cout << endl << "Before: ";
    Print(p);

    update(p);

    cout << endl << "After: ";
    Print(p);

    int arr[5] = {2, 4, 6, 2, 8};

    cout << endl << "SUM : " << getSum(arr, 5) << endl;

    cout << endl;
    return 0;
}