#include <iostream>
using namespace std;

// Create Student with id, name, email. Student has a method to initialize data and a method to print data
class Student
{
public:
    int id;
    string name;
    string email;

public:
    Student(int id, string name, string email);
    Student();
    ~Student();
};

// Constructor
Student::Student(int id, string name, string email)
{
    this->id = id;
    this->name = name;
    this->email = email;
}

// Default constructor
Student::Student()
{
}

// Destructor
Student::~Student()
{
}

int main(int argc, char const *argv[])
{
    // Create an array of 5 Student objects
    Student students[2];

    // Initialize data for each Student object
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter info for student " << i + 1 << endl;
        cout << "ID: ";
        cin >> students[i].id;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "Email: ";
        cin >> students[i].email;
    }

    // Print out data for each Student object
    cout << "Info of all students: " << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "Info of student " << i + 1 << endl;
        cout << "ID: " << students[i].id << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Email: " << students[i].email << endl;
    }

    return 0;
}
