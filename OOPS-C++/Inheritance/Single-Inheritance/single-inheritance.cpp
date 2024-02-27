#include <iostream>
using namespace std;

// Base Class
class Base
{
public:
    void display()
    {
        cout << "Base class display function" << endl;
    }
};

// Derived Class inheriting from Base
class Derived : public Base
{
public:
    void show()
    {
        cout << "Derived class display function" << endl;
    }
};

int main()
{
    Derived obj;
    obj.display(); // Accessing base class function
    obj.show();    // Accessing derived class function

    return 0;
}