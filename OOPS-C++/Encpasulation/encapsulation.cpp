#include <iostream>
#include <string>

using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a) {}

    // Getter method for name
    string getName() const { return name; }

    // Setter method for name
    void setName(const string &n) { name = n; }

    // Getter method for age
    int getAge() const { return age; }

    // Setter method for age
    void setAge(int a)
    {
        if (a >= 0)
        {
            age = a;
        }
        else
        {
            cerr << "Age cannot be negative" << endl;
        }
    }
};

int main()
{
    // Creating an object of the Person class
    Person person("Alice", 30);

    // Accessing data through getter methods
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    // Modifying data through setter methods
    person.setName("Bob");
    person.setAge(10);

    // Accessing data through getter methods
    cout << "Name: " << person.getName() << endl;
    cout << "Age: " << person.getAge() << endl;

    return 0;
}