#include <iostream>
using namespace std;

// Create Student class with Id, Name, Email and 2 methods Study, Play
class Student
{
    // Access Specifier: Private, Public, Protected
    // Private: Only accessible inside the class
    // Public: Accessible everywhere
    // Protected: Accessible inside the class and its child classes
public:
    int id;
    string name;
    string email;

    // Create constructor
public:
    Student();
    Student(int id, string name, string email);
    void Study();
    void Play();
};

// Implement the methods
void Student::Study()
{
    cout << "I am studying" << endl;
}

void Student::Play()
{
    cout << "I am playing" << endl;
}

// Implement the constructor
Student::Student()
{
    cout << "I am a constructor" << endl;
}

Student::Student(int id, string name, string email)
{
    cout << "I am a constructor with parameters" << endl;
    this->id = id;
    this->name = name;
    this->email = email;
}

int main(int argc, char const *argv[])
{
    // Create an object of Student class

    Student an = Student();
    an.Study();

    cout << an.id << endl;
    cout << an.name << endl;
    cout << an.email << endl;

    Student cong = Student(1, "Cong Dinh", "cong@domain.com");
    cout << cong.id << endl;
    cout << cong.name << endl;
    cout << cong.email << endl;
    return 0;
}
