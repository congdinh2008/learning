#include <iostream>
using namespace std;

// Pass by reference - Truyen dia chi o nho vao function
void swap(int &a, int &b);

int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 4;

    // print address of a and b
    cout << "a: " << &a << endl;
    cout << "b: " << &b << endl;

    // call swap function
    swap(a, b);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    return 0;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    // print address of a and b
    cout << "In Function Swap - a: " << &a << endl;
    cout << "In Function Swap - b: " << &b << endl;
}