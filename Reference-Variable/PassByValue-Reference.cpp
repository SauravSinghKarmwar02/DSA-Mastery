// Pass By Value: New memory is created and a copy is stored
// Pass By Reference: Same memory is accessed with different name

#include <iostream>
using namespace std;

void passByValue(int n)
{
     n++;
}

void passByReference(int &n)
{
     n++;
}

int main()
{
     int a = 5;

     // Using pass by value method
     cout << endl
          << "Pass by Value: " << endl
          << "Before: " << a << endl;

     passByValue(a);

     cout << "After: " << a
          << endl;

     // Using pass by reference method
     cout << endl
          << "Pass by Reference: " << endl
          << "Before: " << a << endl;

     passByReference(a);

     cout << "After: " << a
          << endl
          << endl;

     return 0;
}