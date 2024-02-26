#include <iostream>
using namespace std;

class OverloadedConstructor
{
public:
    int value;

    // Default constructor
    OverloadedConstructor()
    {
        value = 0;
    }

    // Parameterized constructor
    OverloadedConstructor(int i)
    {
        value = i;
    }
};

int main()
{
    OverloadedConstructor obj1;
    cout << "Value initialized by default constructor: " << obj1.value << endl;

    OverloadedConstructor obj2(10);
    cout << "Value initialized by parameterized constructor: " << obj2.value << endl;

    return 0;
}