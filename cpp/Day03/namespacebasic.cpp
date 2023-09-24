#include <iostream>
using namespace std;

// namespace Calculator
namespace Calculator
{
    int a;
    int b;

    int add(int a, int b)
    {
        return a + b;
    }

    int sub(int a, int b)
    {
        return a - b;
    }
}

int main(int argc, char const *argv[])
{
    using namespace Calculator;
    a = 10;
    b = 20;

    cout << "Addition: " << add(a, b) << endl;
    cout << "Subtraction: " << sub(a, b) << endl;
    return 0;
}
