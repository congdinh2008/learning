#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Declare a variable
    int a = 5;

    // Print out the value of a
    cout << "Value of a: " << a << endl;

    // Print out the address of a
    cout << "Address of a: " << &a << endl;

    // Declare a pointer variable
    int *pointerA = &a;

    // Print out the value of pointerA
    cout << "Value of pointerA: " << pointerA << endl;

    // Print out the address of pointerA
    cout << "Address of pointerA: " << &pointerA << endl;

    // Print out the value of the variable that pointerA points to
    cout << "Value of *pointerA: " << *pointerA << endl;

    int b = 10;

    pointerA = &b;

    cout << "Value of pointerA: " << pointerA << endl;

    // Declare a null pointer
    int *pointerB = NULL;

    // Print out the value of pointerB
    cout << "Value of pointerB: " << pointerB << endl;
    return 0;
}
