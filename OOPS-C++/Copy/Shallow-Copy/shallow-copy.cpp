#include <iostream>
using namespace std;

class ShallowCopy
{
private:
    int *data;

public:
    ShallowCopy(int d)
    {
        data = new int;
        *data = d;
    }

    // Shallow copy constructor
    ShallowCopy(const ShallowCopy &source) : data(source.data) {}

    int getData() const { return *data; }

    void setData(int d) { *data = d; }

    ~ShallowCopy()
    {
        delete data;
        cout << "Destructor called" << endl;
    }
};

int main()
{
    ShallowCopy obj1(10);
    ShallowCopy obj2(obj1); // Shallow copy

    cout << "obj1 data: " << obj1.getData() << endl;
    cout << "obj2 data: " << obj2.getData() << endl;

    obj2.setData(20); // Both obj1 and obj2 will be affected

    cout << "obj1 data: " << obj1.getData() << endl;
    cout << "obj2 data: " << obj2.getData() << endl;

    return 0;
}