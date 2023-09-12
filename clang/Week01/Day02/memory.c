#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int number1 = 3;
    printf("Value of number1 = %d\n", number1);
    printf("Memory address of number1 = %x\n", &number1); // memory address of number1 is hexadecimal number => %x de hien thi
    printf("Size of data type int = %d\n", sizeof(number1));

    int number2 = 4;
    printf("Value of number2 = %d\n", number2);
    printf("Memory address of number2 = %x\n", &number2);
    printf("Size of data type int = %d\n", sizeof(number2));

    double pi = 3.14;
    printf("Value of pi = %lf\n", pi);
    printf("Memory address of pi = %x\n", &pi);
    printf("Size of data type int = %d\n", sizeof(pi));


    char character = 'a';
    printf("Value of character = %c\n", character);
    printf("Memory address of character = %x\n", &character);
    printf("Size of data type int = %d\n", sizeof(character));

    bool isTrue = true;
    printf("Value of isTrue = %d\n", isTrue);
    printf("Memory address of isTrue = %x\n", &isTrue);
    printf("Size of data type int = %d\n", sizeof(isTrue));
    return 0;
}
