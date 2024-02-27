#include <iostream>
using namespace std;

// Base class 1
class Base1
{
public:
    void display1()
    {
        cout << "Base1 class display1 function" << endl;
    }
};

// Base class 2
class Base2
{
public:
    void display2()
    {
        cout << "Base2 class display2 function" << endl;
    }
};

// Derived class inheriting from both Base1 and Base2
class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "Derived class show function" << endl;
    }
};

int main()
{
    Derived obj;
    obj.display1(); // Accessing Base1 function
    obj.display2(); // Accessing Base2 function
    obj.show();     // Accessing Derived function

    return 0;
}