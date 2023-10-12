#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int numbers[] = {-5, 14, 23, 0, 4, 2};

    int size = sizeof(numbers) / sizeof(numbers[0]);

    // -5, 14, 23, 0, 4, 2 => i = 0 & minIndex = i = 0
    // -5, 14, 23, 0, 4, 2 => i = 1 & minIndex = i = 1
    // -5, 0, 23, 14, 4, 2 => i = 2 & minIndex = i = 2
    // -5, 0, 2, 14, 4, 23 => i = 3 & minIndex = i = 5
    // -5, 0, 2, 4, 14, 23 => i = 4 & minIndex = i = 5

    for (int i = 0; i < size; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (numbers[j] < numbers[minIndex])
            {
                minIndex = j;
            }
        }

        if(minIndex != i)
        {
            int temp = numbers[i];
            numbers[i] = numbers[minIndex];
            numbers[minIndex] = temp;
        }
    }
    
    

    // Print the sorted array
    for (int i = 0; i < size; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}
