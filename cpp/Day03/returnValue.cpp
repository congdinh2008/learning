#include <iostream>
using namespace std;

// Global variable x
int x = 10;

int &changeX(int value)
{
    x += value;
    // print address of xhttps://www.learncpp.com/
    cout << "x: " << &x << endl;
    return x;
}

int main(int argc, char const *argv[])
{
    int a = changeX(20);
    // print address of a
    cout << "a: " << &a << endl;
    return 0;
}
