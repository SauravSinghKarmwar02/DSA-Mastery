// Reference Variable: Same memory but different names

#include <iostream>
using namespace std;

int main()
{
     int i = 5;

     // Create a Reference Variable
     int &j = i;

     cout << endl
          << i << endl;
     i++;
     cout << i << endl;
     j++;
     cout << i << endl
          << endl;

     return 0;
}