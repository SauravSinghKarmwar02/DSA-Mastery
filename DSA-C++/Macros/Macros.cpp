#include <iostream> // Preprocess directive
using namespace std;

#define Pi 3.14 // Creating a macro

int main()
{
    int r = 5;
    double area = Pi * r * r;

    cout << endl
         << "Area: " << area << endl
         << endl;

    return 0;
}

// Macro is a piece of program that is replaced by value of macro