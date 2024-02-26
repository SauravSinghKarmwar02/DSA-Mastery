#include <iostream>
using namespace std;

class CopyConstructor
{
public:
    int value;

    // Default constructor
    CopyConstructor()
    {
        value = 0;
    }

    // Copy constructor
    CopyConstructor(const CopyConstructor &obj)
    {
        value = obj.value;
    }
};

int main()
{
    CopyConstructor obj1;
    obj1.value = 10;

    CopyConstructor obj2 = obj1;
    cout << "Value initialized by  copy constructor: " << obj2.value << endl;

    return 0;
}