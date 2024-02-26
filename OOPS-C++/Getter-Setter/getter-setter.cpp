#include <iostream>
#include <string>
using namespace std;

// Define a class named 'Person'
class Person
{
private:
    string name; // Private member variable

public:
    // Setter method to set name
    void setName(const string &newName)
    {
        name = newName;
    }

    // Getter method to get name
    string getName() const { return name; }
};

int main()
{
    Person person1;

    // Using the setter method to set the name
    person1.setName("S A U R A V");

    // Using the getter method to get the name
    cout << "Name: " << person1.getName() << endl;

    return 0;
}