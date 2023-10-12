#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numbers[] = {-5, 14, 23, 0, 4, 2};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    // -5, 14, 23, 0, 4, 2 => j = 0 & i = 0
    // -5, 14, 0, 23, 4, 2 => j = 1 & i = 0
    // -5, 14, 0, 4, 23, 2 => j = 2 & i = 0
    // -5, 14, 0, 4, 2, 23 => j = 3 & i = 0
    // -5, 0, 14, 4, 2, 23 => j = 0 & i = 1
    // -5, 0, 4, 14, 2, 23 => j = 1 & i = 1
    // -5, 0, 4, 2, 14, 23
    // -5, 0, 2, 4, 14, 23

    for (int i = 0; i < size; i++)
    {
        bool isSorted = false;
        for (int j = 0; j < size - (i + 1); j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
                isSorted = true;
            }
        }

        if (!isSorted)
        {
            break;
        }
    }

    // Print the sorted array
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
