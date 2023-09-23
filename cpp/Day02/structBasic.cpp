#include <iostream>
#include <string>
using namespace std;

// Define a struct Student with id, name, dateOfBirth, address
struct Student
{
    int id;
    string name;
    string dateOfBirth;
    string address;
};

int main(int argc, char const *argv[])
{
    // Create a student and initialize
    Student cong = {1, "Cong", "01/01/1990", "Ha Noi"};

    // Print the student
    cout << "Student: " << endl;    
    cout << "ID: " << cong.id << endl;
    cout << "Name: " << cong.name << endl;
    cout << "Date of birth: " << cong.dateOfBirth << endl;
    cout << "Address: " << cong.address << endl;

    // Create a pointer to student
    Student *studentPointer = &cong;

    // Print the student using pointer
    cout << "Student using pointer: " << endl;
    cout << "ID: " << studentPointer->id << endl;
    cout << "Name: " << studentPointer->name << endl;
    cout << "Date of birth: " << studentPointer->dateOfBirth << endl;
    cout << "Address: " << studentPointer->address << endl;
}