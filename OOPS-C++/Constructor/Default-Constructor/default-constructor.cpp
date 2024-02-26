#include <iostream>
using namespace std;

class DefaultConstructor
{
public:
    int value;

    // Default constructor
    DefaultConstructor()
    {
        value = 0;
    }
};

int main()
{
    DefaultConstructor obj;
    cout << "Value initialized by default constructor: " << obj.value << endl;
    return 0;
}