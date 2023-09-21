#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Declare an array of 5 doubles
    // index 0 to 4
    // Luon luon phai co kich thuoc cua mang
    double arr[] = {1.2, 2.4, 3.14, 4.02, 5.5};

    // Print out address of array
    cout << "Address of array = " << &arr << endl;

    // Print out address of the 1st element
    cout << "Address of 1st element = " << arr[0] << " - " << &arr[0] << endl;

    // Declare a string variable
    string name = "Cong Dinh";

    // Print out value of name
    cout << "Value of name = " << name << endl;

    // Print out address of name
    cout << "Address of name = " << &name << endl;

    // Print out first character of name
    cout << "First character of name = " << name[0] << endl;

    // Print out address of first character of name
    cout << "Address of first character of name = " << &(name[0]) << endl;

    return 0;
}
