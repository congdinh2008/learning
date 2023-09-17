#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number = 0;

    switch (number)
    {
    case 1:
        printf("number = 1\n");
        break;
    case 2:
        printf("number = 2\n");
        break;
    default:
        printf("Number is not 1 or 2\n");
        break;
    }

    // Tuong duong switch case o tren
    if (number == 1)
    {
        printf("number = 1\n");
    }
    else if (number == 2)
    {
        printf("number = 2\n");
    }
    else
    {
        printf("Number is not 1 or 2\n");
    }

    return 0;
}
