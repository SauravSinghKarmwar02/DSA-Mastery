#include <iostream>

using namespace std;

class DeepCopy
{
private:
    int *data;

public:
    DeepCopy(int d)
    {
        data = new int;
        *data = d;
    }

    // Deep copy constructor
    DeepCopy(const DeepCopy &source) : data(new int(*source.data)) {}

    int getData() const { return *data; }

    void setData(int d) { *data = d; }

    ~DeepCopy()
    {
        delete data;
        cout << "Destructor called" << endl;
    }
};

int main()
{
    DeepCopy obj1(10);
    DeepCopy obj2 = obj1; // Deep copy

    cout << "obj1 data: " << obj1.getData() << endl;
    cout << "obj2 data: " << obj2.getData() << endl;

    obj2.setData(20); // Only obj2 is affected

    cout << "obj1 data: " << obj1.getData() << endl;
    cout << "obj2 data: " << obj2.getData() << endl;

    return 0;
}