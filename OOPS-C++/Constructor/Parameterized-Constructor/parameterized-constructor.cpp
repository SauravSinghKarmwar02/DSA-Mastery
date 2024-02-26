#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    // Constructor with parameters
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    // Method to calculate area
    int calculateArea()
    {
        return length * width;
    }

    // Method to display dimensions
    void display()
    {
        cout << "\tLength: " << length << endl;
        cout << "\tWidth: " << width << endl;
    }
};

int main()
{
    // Creating objects of Rectangle class using constructor
    Rectangle rect1(5, 4);
    Rectangle rect2(7, 3);

    // Displaying dimensions and area of both rectangles
    cout << "Rectangle 1: " << endl;
    rect1.display();
    cout << "\tArea: " << rect1.calculateArea() << endl;

    cout << "\nRectangle 2: " << endl;
    rect2.display();
    cout << "\tArea: " << rect2.calculateArea() << endl;

    return 0;
}