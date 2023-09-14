#include <stdio.h>

int main(int argc, char const *argv[])
{
    int number1 = 3;
    int number2 = 4;

    // number1++  => sau lenh nay thi number1 moi tang 1 don vi => post-increment
    // ++number1  => Ngay trong lenh nay thi number1 tang 1 don vi roi moi cong vao number2 - pre-increment
    printf("%d + %d = %d\n", number1, number2, ++number1 + number2);
    printf("%d\n", number1);

    int number3 = 10;
    int number4 = 20 + --number3;
    printf("%d\n", number4);
    printf("%d\n", number3);

    return 0;
}
