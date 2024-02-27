#include <iostream>
using namespace std;

class MyClass
{
private:
    int m_value;

public:
    MyClass(int value) : m_value(value) {}

    void printValue()
    {
        // Using 'this' to access the member variable of the current object
        cout << "Value of this object: " << this->m_value << endl;
    }
};

int main()
{
    MyClass obj1(10);
    MyClass obj2(20);

    obj1.printValue();
    obj2.printValue();
}