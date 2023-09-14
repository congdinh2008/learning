#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 3;
    int b = 4;

    int sum = a + b;
    printf("%d + %d = %d\n", a, b, sum);

    int sub = a - b;
    printf("%d - %d = %d\n", a, b, sub);

    int mul = a * b;
    printf("%d * %d = %d\n", a, b, mul);

    double result = (double)a / b; // 2 so kieu int chia cho nhau thi tao ra so kieu int. Cho nen can convert ve so double
    printf("%d / %d = %lf\n", a, b, result);
    return 0;
}
