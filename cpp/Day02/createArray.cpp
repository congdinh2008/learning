#include <iostream>
using namespace std;

void printArray(string names[], int size);

string *createArray(int size);

int main(int argc, char const *argv[])
{
    // 1. Allow user enter number of array
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    // 2. Create an array of string with the size
    string *names = createArray(size);

    // 4. Print all elements of the array
    printArray(names, size);
    return 0;
}

// Implement function to print all elements of the array
void printArray(string *names, int size)
{
    cout << "All elements of the array: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(names + i) << endl;
    }
}

// Implement function to create an array of string with the size
string *createArray(int size)
{
    // 1. Create an array of string with the size
    string *names = new string[size];

    // 2. Allow user enter all elements of the array
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element " << i + 1 << ": ";
        cin >> *(names + i);
    }

    // 3. Return the array
    return names;
}