#include <iostream>
using namespace std;

class Math
{
public:
    int add(int a, int b)
    {
        return a + b;
    }

    double add(double a, double b)
    {
        return a + b;
    }
};

int main()
{
    Math math;
    cout << math.add(1, 2) << endl;     // Calls int add(int , int)
    cout << math.add(1.0, 2.0) << endl; // Calls double add(double , double)

    return 0;
}