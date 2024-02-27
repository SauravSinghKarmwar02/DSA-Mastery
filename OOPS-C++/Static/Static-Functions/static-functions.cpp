#include <iostream>

using namespace std;

class MyClass
{
public:
    static void staticFunction()
    {
        cout << "Static function called" << endl;
    }
};

int main()
{
    MyClass::staticFunction();
    return 0;
}