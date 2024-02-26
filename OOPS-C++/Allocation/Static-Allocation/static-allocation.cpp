#include <iostream>

using namespace std;

class MyClass
{
public:
    // Static variable declaration
    static int staticVariable;

    // Non-static variable declaration
    int normalVariable;

    MyClass(int val)
    {
        normalVariable = val;
    }

    void display()
    {
        cout << "Static variable: " << staticVariable << endl;
        cout << "Normal variable: " << normalVariable << endl;
    }
};

// Initialize the static variable outside the class definition
int MyClass::staticVariable = 0;

int main()
{
    MyClass obj1(100); // Object 1 created
    MyClass obj2(200); // Object 2 created

    // Displaying the values of variables for both objects
    cout << "Object 1: " << endl;
    obj1.display();

    cout << "\nObject 2: " << endl;
    obj2.display();

    // Modifying static variable using one object
    obj1.staticVariable = 50;

    // Displaying the values of variables for both objects after modification
    cout << "\nAfter modifying static variable using Object 1: " << endl;
    cout << "Object 1: " << endl;
    obj1.display();

    cout << "\nObject 2: " << endl;
    obj2.display();

    return 0;
}