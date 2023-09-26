#include <iostream>
using namespace std;

// Create Employee class with Id, Name, Salary and 2 methods Work, Relax
class Employee
{
public:
    int id;
    string name;
    double salary;

public:
    void work();
    void relax();
};

// Implement the methods
void Employee::work()
{
    cout << "I am working" << endl;
}

void Employee::relax()
{
    cout << "I am relaxing" << endl;
}

int main(int argc, char const *argv[])
{
    Employee company[2];

    company[0] = Employee();
    company[0].id = 1;
    company[0].name = "Cong Dinh";
    company[0].salary = 1000;

    company[1] = Employee();
    company[1].id = 2;
    company[1].name = "Van Nguyen";
    company[1].salary = 2000;

    for (int i = 0; i < sizeof(company) / sizeof(company[0]); i++)
    {
        // Print out the information of van
        cout << company[i].id << endl;
        cout << company[i].name << endl;
        cout << company[i].salary << endl;
    }

    return 0;
}
