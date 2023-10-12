#include <iostream>

using namespace std;

class Employee
{
    // Fields/Attributes
private:
    int id;
    string name;
    string department;
    int salary;

    // Methods/Functions
public:
    void work();
    void takeBreak();
    void takeLeave();
    void resign();
    string getName();

    // Constructor
    // Default Constructor
    Employee()
    {
        // cout << "Employee is created in default constructor" << endl;
    }

    // Parameterized Constructor
    Employee(int id, string name, string department, int salary)
    {
        this->id = id;
        this->name = name;
        this->department = department;
        this->salary = salary;
        // cout << this->name << " is created in parameterized constructor" << endl;
    }
};

void Employee::work()
{
    cout << "Employee is working" << endl;
}

void Employee::takeBreak()
{
    cout << "Employee is taking a break" << endl;
}

void Employee::takeLeave()
{
    cout << "Employee is taking a leave" << endl;
}

void Employee::resign()
{
    cout << "Employee is resigning" << endl;
}

string Employee::getName()
{
    return this->name;
}

class Company
{
    // Fields/Attributes
private:
    string name;
    string address;
    int numberOfEmployees;
    Employee employees[100];

    // Methods/Functions
public:
    void hireEmployee(Employee employee);
    void fireEmployee(Employee employee);
    void listEmployees();
    // Constructor
    // Parameterized Constructor
    Company(string name, string address)
    {
        this->name = name;
        this->address = address;
        this->numberOfEmployees = 0;
        cout << this->name << " is created in parameterized constructor" << endl;
    }
};

void Company::hireEmployee(Employee employee)
{
    // Add the employee to the array of employees
    cout << employee.getName() << " is hired" << endl;
    this->numberOfEmployees++;
    this->employees[numberOfEmployees - 1] = employee;
}

void Company::fireEmployee(Employee employee)
{
    cout << employee.getName() << " is fired" << endl;
    // find the employee in the array of employees
    // remove the employee from the array of employees
    int needToDeleteIndex = -1;
    for (int i = 0; i < this->numberOfEmployees; i++)
    {
        if (this->employees[i].getName() == employee.getName())
        {
            needToDeleteIndex = i;
        }
    }
    this->employees[needToDeleteIndex] = this->employees[this->numberOfEmployees - 1];

    this->numberOfEmployees--;
}

void Company::listEmployees()
{
    cout << "List of employees" << endl;
    for (int i = 0; i < this->numberOfEmployees; i++)
    {
        cout << employees[i].getName() << endl;
    }
}

int main(int argc, char const *argv[])
{
    // Employee cong = Employee();
    // cong.work();

    // Employee van = Employee(1, "Van", "IT", 1000);
    // van.work();
    // van.takeBreak();

    // // Create an array of Employee objects
    // Employee employees[3] = {
    //     Employee(1, "Van", "IT", 1000),
    //     Employee(2, "Cong", "IT", 2000),
    //     Employee(3, "Huy", "IT", 3000)};

    // // Print the array of Employee objects
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << employees[i].getName() << endl;
    // }

    // Create a Company object
    Company vivustore = Company("VivuStore", "123 Nguyen Van Linh");

    // Create an employee object
    Employee van = Employee(1, "Van", "IT", 1000);
    // Hire the employee
    vivustore.hireEmployee(van);

    // List the employees
    vivustore.listEmployees();
}