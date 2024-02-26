#include <iostream>
using namespace std;

class MyClass
{
private:
    int *dynamicVariable; // Dynamic variable declaration

public:
    MyClass(int val)
    {
        dynamicVariable = new int(val); // Dynamic memory allocation
    }

    ~MyClass()
    {
        delete dynamicVariable; // Destructor to free dynamically allocated memory
    }

    void display()
    {
        cout << "Dynamic Variable: " << *dynamicVariable << endl;
    }
};

int main()
{
    MyClass *obj1 = new MyClass(100); // Object 1 dynamically created
    MyClass *obj2 = new MyClass(200); // Object 2 dynamically created

    // Displaying the values of dynamic variable for both objects
    cout << "Object 1: " << endl;
    obj1->display();

    cout << "\nObject 2: " << endl;
    obj2->display();

    // Modifying dynamic variable using one object
    *obj1 = MyClass(50);

    // Displaying the values of dynamic variable for both objects after modification
    cout << "\nAfter modifying dynamic variable using Object 1: " << endl;
    cout << "Object 1: " << endl;
    obj1->display();

    cout << "\nObject 2: " << endl;
    obj2->display();

    delete obj1; // Freeing memory allocated for object 1
    delete obj2; // Freeing memory allocated for object 2

    return 0;
}