#include <iostream>
using namespace std;

class Student
{
public:
    int id;
    string name;
    string address;

public:
    Student(int id, string name, string address);
    ~Student();
};

// Constructor
Student::Student(int id, string name, string address)
{
    this->id = id;
    this->name = name;
    this->address = address;
}

// Destructor
Student::~Student()
{
}

int main(int argc, char const *argv[])
{
    int *pointerA = new int;

    // Print out the value of pointerA
    cout << "Value of pointerA: " << pointerA << endl;

    // Print out the value of the variable that pointerA points to
    cout << "Value of *pointerA: " << *pointerA << endl;

    bool *pointerB = new bool;

    // Print out the value of pointerB
    cout << "Value of pointerB: " << pointerB << endl;

    // Print out the value of the variable that pointerB points to
    cout << "Value of *pointerB: " << *pointerB << endl;

    string *pointerC = new string;
    // Print out the value of pointerC
    cout << "Value of pointerC: " << pointerC << endl;

    // Print out the value of the variable that pointerC points to
    cout << "Value of *pointerC: " << *pointerC << endl;

    // Create a new Student object
    Student *pointerD = new Student(1, "Cong Dinh", "Hanoi");

    // Print out the info of the Student object
    cout << "Info of the Student object: " << endl;
    cout << "ID: " << pointerD->id << endl;
    cout << "Name: " << pointerD->name << endl;
    cout << "Address: " << pointerD->address << endl;

    // Delete the Student object
    delete pointerD;
    return 0;
}
