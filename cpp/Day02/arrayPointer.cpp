#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // Initialize an array of 5 integers
    int numbers[] = {11, 23, 0, -4, 5};

    // Get size of the array ~ number of elements in array
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Print all elements of the array
    cout << "All elements of the array using for with index: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << endl;
    }

    // Create a pointer to the array
    int *pointerNumbers = numbers;

    // Print all elements of the array using pointer
    cout << "All elements of the array using pointer: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(pointerNumbers + i) << endl;
    }

    cout << "1st element = " << * pointerNumbers << endl;
    cout << "2nd element = " << * (++pointerNumbers) << endl;
    cout << "3rd element = " << * (++pointerNumbers) << endl;
    cout << "4th element = " << * (++pointerNumbers) << endl;
    cout << "5th element = " << * (++pointerNumbers) << endl;

    string names[] = {"John", "Mary", "Peter", "Jane", "Mark", "15"};
    return 0;
}
