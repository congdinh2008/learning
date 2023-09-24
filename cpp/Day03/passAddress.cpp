#include <iostream>
using namespace std;

// Change all elements of an array. Add 10 to each element
void changeArray(int *arr, int size, int value = 10)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] += value;
    }
}

int main(int argc, char const *argv[])
{
    int numbers[5] = {1, 2, 3, 4, 5};
    changeArray(numbers, 5, 3);

    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << endl;
    }
    return 0;
}

