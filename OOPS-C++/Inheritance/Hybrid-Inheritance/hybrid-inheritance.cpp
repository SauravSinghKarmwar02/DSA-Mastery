#include <iostream>
using namespace std;

// Base class
class Base
{
public:
    void display()
    {
        cout << "Base class display function" << endl;
    }
};

// Virtual base class
class VirtualBase
{
public:
    void show()
    {
        cout << "VirtualBase class show function" << endl;
    }
};

// Derived class 1 inheriting from base and VirtualBase
class Derived1 : public Base, virtual public VirtualBase
{
public:
    void show1()
    {
        cout << "Derived1 class show1 function" << endl;
    }
};

// Derived class 2 inheriting from base and VirtualBase
class Derived2 : public Base, virtual public VirtualBase
{
public:
    void show2()
    {
        cout << "Derived2 class show2 function" << endl;
    }
};

// Derived class 3 inheriting from Derived1 and Derived2
class Derived3 : public Derived1, public Derived2
{
public:
    void show3()
    {
        cout << "Derived3 class show3 function" << endl;
    }
};

int main()
{
    Derived3 obj;
    obj.show();  // Accessing VirtualBase function from Derived3
    obj.show1(); // Accessing Derived1 function from Derived3
    obj.show2(); // Accessing Derived2 function from Derived3
    obj.show3(); // Accessing Derived3 function

    return 0;
}