#include <iostream>
using namespace std;

class MyClass
{
private:
    int *data;

public:
    MyClass(int value)
    {
        data = new int[value];
    }

    // Copy constructor
    MyClass(const MyClass &source)
    {
        data = new int(*source.data);
    }

    // Assignment operator
    MyClass &operator=(const MyClass &source)
    {
        if (this != &source) // Check for self-assignment
        {
            delete data; // Deallocate existing data

            // Allocate new memory and copy the data
            data = new int(*source.data);
        }
        return *this; // Return a reference to the current object
    }

    int getData() const { return *data; }

    ~MyClass()
    {
        delete data;
        cout << "Destructor called" << endl;
    }
};

int main()
{
    MyClass obj1(10);
    MyClass obj2(20);

    // Using the assignment operator to assign obj2 to obj1
    obj1 = obj2;

    cout << "obj1 data: " << obj1.getData() << endl;
    cout << "obj2 data: " << obj2.getData() << endl;

    return 0;
}