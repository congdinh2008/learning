#include <iostream>
using namespace std;

// Defined a function to add two numbers
int addNumbers(int x, int y);
// Define a function to divide two numbers
double divideNumbers(int x, int y);

// Define a function to check if a number is prime or not
bool isPrime(int x);

int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 4;
    double result = divideNumbers(a, b);
    cout << "Sum of " << a << " and " << b << " is " << result << endl;

    int x = 6;

    // Using ternary operator to print the result
    cout << x << " is " << (isPrime(x) ? "prime" : "not prime") << endl;

    return 0;
}

// Implement the addNumbers function
int addNumbers(int x, int y)
{
    int result = x + y;
    return result;
}

// Implement the divideNumbers function
double divideNumbers(int x, int y)
{
    return (double)x / y;
}

// Implement the isPrime function
bool isPrime(int x)
{
    bool result = true;
    // Lap di lap lai viec chi x cho cac so tu 2 den x-1
    for (int i = 2; i < x; i++)
    {
        // Neu x chia het cho bat ky so nao thi x khong phai la so nguyen to
        if (x % i == 0)
        {
            result = false;
            break;
        }
    }
    return result;
}