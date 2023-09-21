#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string name = "Cong Dinh";

    // Print out value of name
    cout << "Value of name = " << name << endl;

    // Print out address of name
    cout << "Address of name = " << &name << endl;

    name = "Van Nguyen";

    // Print out value of name
    cout << "Value of name = " << name << endl;

    // Print out address of name
    cout << "Address of name = " << &name << endl;
    
    return 0;
}
