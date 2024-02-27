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

// Derived class 1 inheriting from Base
class Derived1 : public Base
{
public:
    void show1()
    {
        cout << "Derived1 class show1 function" << endl;
    }
};

// Derived class 2 inheriting from Derived1
class Derived2 : public Derived1
{
public:
    void show2()
    {
        cout << "Derived2 class show2 function" << endl;
    }
};

int main()
{
    Derived2 obj;
    obj.display(); // Accessing Base function from Derived2
    obj.show1();   // Accessing Derived1 function from Derived2
    obj.show2();   // Accessing Derived2 function

    return 0;
}