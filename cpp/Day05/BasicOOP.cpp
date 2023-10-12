#include <iostream>

using namespace std;

class Dog
{
    // Fields/Attributes
private:
    int id;
    string name;
    string color;
    int age;
    int weight;

    // Methods/Functions
public:
    void eat();
    void sleep();
    void run();
    void bark();

    // Constructor
    // Default Constructor
    Dog()
    {
        cout << "Dog is created in default constructor" << endl;
    }
    // Parameterized Constructor
    Dog(int id, string name, string color, int age, int weight)
    {
        this->id = id;
        this->name = name;
        this->color = color;
        this->age = age;
        this->weight = weight;
        cout << this->name << " is created in parameterized constructor" << endl;
    }
};

void Dog::eat()
{
    cout << "Dog is eating" << endl;
}

void Dog::sleep()
{
    cout << "Dog is sleeping" << endl;
}

void Dog::run()
{
    cout << "Dog is running" << endl;
}

void Dog::bark()
{
    cout << "Dog is barking" << endl;
}

int main(int argc, char const *argv[])
{
    // Create a mit object from Dog class
    // Using default constructor
    Dog mit = Dog();
    mit.eat();
    mit.sleep();

    // Create a mat object from Dog class
    // Using parameterized constructor
    Dog mat = Dog(1, "Mat", "Brown", 2, 15);
    mat.run();
}