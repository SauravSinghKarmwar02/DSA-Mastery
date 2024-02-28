#include <iostream>
using namespace std;

class Complex
{
private:
    double real;
    double img;

public:
    // Constructor
    Complex(double r = 0.0, double i = 0.0) : real(r), img(i) {}

    // Overload `+` operator
    Complex operator+(const Complex &other)
    {
        return Complex(real + other.real, img + other.img);
    }

    // Overload `-` operator
    Complex operator-(const Complex &other)
    {
        return Complex(real - other.real, img - other.img);
    }

    // Overload `<<` operator (stream insertion)
    friend ostream &operator<<(ostream &out, const Complex &c)
    {
        out << "(" << c.real << " + " << c.img << "i)";
        return out;
    }
};

int main()
{
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);

    // Using overloaded '+' operator
    Complex sum = c1 + c2;
    cout << "Sum: " << sum << endl;

    // Using overloaded '-' operator
    Complex diff = c1 - c2;
    cout << "Difference: " << diff << endl;

    return 0;
}