#include <iostream>
using namespace std;

class ExplicitConstructor
{
public:
    int value;

    // Explicit constructor
    explicit ExplicitConstructor(int val)
    {
        value = val;
    }
};

int main()
{
    ExplicitConstructor obj(20);
    cout << "Value initialized by explicit constructor: " << obj.value << endl;
    return 0;
}