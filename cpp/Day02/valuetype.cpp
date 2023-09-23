#include <iostream>
#include <string>
using namespace std;

// Declare function to assign value to number
void assignValue(int x);

// Declare function to change name
void changeName(string &name);

int main(int argc, char const *argv[])
{
    int a = 10;

    cout << "Value of a before assignValue: " << a << endl;
    // Print address of a
    cout << "Address of a before assignValue: " << &a << endl;

    assignValue(a);

    cout << "Value of a after assignValue: " << a << endl;

    string name = "Cong Dinh";

    cout << "Value of name before change: " << name << endl;
    // Print address of name
    cout << "Address of name before change: " << &name << endl;

    changeName(name);

    cout << "Value of name after change: " << name << endl;
    cout << "Address of name after change: " << &name << endl;
    return 0;
}

// Implement function to assign value to number
void assignValue(int x)
{
    cout << "Address of a before assignValue in function: " << &x << endl;
    x = 20;
}

// Implement function to change name
void changeName(string &name)
{
    cout << "Value of name after change in function: " << name << endl;
    cout << "Address of name after change in function: " << &name << endl;

    name = "Van Nguyen";

    cout << "Value of name after change in function: " << name << endl;
    cout << "Address of name after change in function: " << &name << endl;
}