#include <iostream>
using namespace std;

class Shape
{
public:
    // Overloaded functions to calculate area
    double area(double side)
    {
        cout << "Calculating area of square..." << endl;
        return side * side;
    }

    double area(double length, double width)
    {
        cout << "Calculating area of rectangle..." << endl;
        return length * width;
    }
};

int main()
{
    Shape shape;

    double side = 5.0;
    double length = 4.0;
    double width = 6.0;

    // Call the overloaded functions through the Shape object
    cout << "Area of square: " << shape.area(side) << endl;
    cout << "Area of rectangle: " << shape.area(length, width) << endl;

    return 0;
}