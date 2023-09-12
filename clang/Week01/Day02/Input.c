#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number;
    // Doan code dung de thong bao nguoi dung can lam gi
    printf("Enter a number: ");

    // Cho phep user input gia tri va gan vao bien number
    // &number la dia chi cua bien number
    scanf("%d", &number);

    // In ra gia tri cua bien number
    printf("You entered %d\n", number);

    double decimal;
    printf("Enter a decimal: ");
    scanf("%lf", &decimal);
    printf("You entered %lf\n", decimal);

    // Clear input buffer
    while (getchar() != '\n');

    char character;
    printf("Enter a character: ");
    scanf("%c", &character);
    printf("You entered %c\n", character);

    return 0;
}
