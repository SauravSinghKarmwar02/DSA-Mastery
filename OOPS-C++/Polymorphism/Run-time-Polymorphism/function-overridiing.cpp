#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void makeSound()
    {
        cout << "Animal make sound" << endl;
    }
};

class Dog : public Animal
{
public:
    void makeSound() override
    {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal
{
public:
    void makeSound() override
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    Animal *animal1 = new Dog();
    Animal *animal2 = new Cat();

    animal1->makeSound(); // Calls Dog's makeSound() dynamically
    animal2->makeSound(); // Calls Cat's makeSound() dynamically

    delete animal1;
    delete animal2;

    return 0;
}