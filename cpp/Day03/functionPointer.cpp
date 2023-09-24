#include <iostream>
using namespace std;

// Declare a function
int add(int a, int b)
{
    return a + b;
}

int multiply(int a, int b)
{
    return a * b;
}

// Create a function to pass function pointer as parameter
// Print out all prime number between start and end
void printPrimeNumberBetweenStartEnd(bool (*isPrimePtr)(int), int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (isPrimePtr(i))
        {
            cout << i << endl;
        }
    }
}

// Create a function to check if a number is prime
bool isPrime(int number)
{
    if (number < 2)
    {
        return false;
    }

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main(int argc, char const *argv[])
{
    // Declare a function pointer
    int (*ptr)(int, int);

    // Assign address of add to ptr
    ptr = add;

    // Call add function using function pointer
    cout << "Addition: " << ptr(10, 20) << endl;

    // Assign address of multiply to ptr
    ptr = multiply;

    // Call multiply function using function pointer
    cout << "Multiplication: " << ptr(10, 20) << endl;

    // Declare a function pointer
    bool (*isPrimePtr)(int);

    int start = 0;
    int end = 100;

    isPrimePtr = isPrime;

    cout << "Prime numbers between " << start << " and " << end << endl;
    printPrimeNumberBetweenStartEnd(isPrimePtr, start, end);

    /* code */
    return 0;
}
