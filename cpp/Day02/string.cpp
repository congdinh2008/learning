#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    // 1. Create a string with value "Cong"
    string name = "Cong";

    // 1. Create a string and not initialize
    string name2 = name;

    // Print address of name
    cout << "Address of name: " << &name << endl;

    // Print address of name2
    cout << "Address of name2: " << &name2 << endl;
    return 0;
}
