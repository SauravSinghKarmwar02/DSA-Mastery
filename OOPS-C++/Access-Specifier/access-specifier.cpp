#include <iostream>
using namespace std;

// Define a class named 'Example'
class Example
{
    // Public access specifier
public:
    int publicVar;

    // Private access specifier
private:
    int privateVar;

    // Protected access specifier
protected:
    int protectedVar;

public:
    // Public member function to set private variable
    void setPrivateVar(int value)
    {
        privateVar = value;
    }

    // Public member function to get private variable
    int getPrivateVar()
    {
        return privateVar;
    }
};

int main()
{
    Example obj;

    // Accessing and modifying public member variable
    obj.publicVar = 10;
    cout << "Public variable: " << obj.publicVar << endl;

    // Accessing private member variable through public member function
    obj.setPrivateVar(20);
    cout << "Private variable: " << obj.getPrivateVar() << endl;

    // Trying to access protected member variable from  main function will result in a compilation error. It can be accessed by derived classes.

    return 0;
}