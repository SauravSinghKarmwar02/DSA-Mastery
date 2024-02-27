#include <iostream>
using namespace std;

class MyClass
{
public:
    static int count;
};

int MyClass::count = 0;

int main()
{
    MyClass obj1;
    MyClass obj2;

    obj1.count = 10;

    cout << "obj2.count: " << obj2.count << endl;

    return 0;
}