#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Constant member function to get the radius (does not modify object state)
    double getRadius() const { return radius; }

    // Constant member function to calculate the area (does not modify object state)
    double area() const { return 3.14159 * radius * radius; }

    // Non-constant member function to set the radius (modifies object state)
    void setRadius(double r) { radius = r; }
};

int main()
{
    const Circle circle1(5.0); // Constant object

    // Accessing constant member function to get the radius
    cout << "Radius of circle1: " << circle1.getRadius() << endl;

    // Accessing constant member function to calculate the area
    cout << "Area of circle1: " << circle1.area() << endl;

    Circle circle2(3.0); // Non-constant object

    // Accessing non-constant member function to set the radius
    circle2.setRadius(7.0);

    // Accessing constant member function to get the radius
    cout << "Radius of circle2: " << circle2.getRadius() << endl;

    return 0;
}