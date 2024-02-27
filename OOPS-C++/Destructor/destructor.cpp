#include <iostream>
using namespace std;

class MyClass
{
private:
    int *data;

public:
    // Constructor
    MyClass(int value)
    {
        data = new int(value);
    }

    // Destructor
    ~MyClass()
    {
        delete data; // Release the dynamically allocated memory
        cout << "Destructor called" << endl;
    }

    int getData() const
    {
        return *data;
    }
};

int main()
{
    // Creating an object of MyClass
    MyClass obj(10);

    // Accessing data member
    cout << "Data: " << obj.getData() << endl;

    // The destructor will be automatically called when obj goes out of scope

    return 0;
}