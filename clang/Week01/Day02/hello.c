#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hello, My Friend!\n");
    int a = 3297233;
    int b = 4439348;
    int c = a + b;

    int d = 25;
    int e = 7;

    int f = d % e;
    printf("The remainder of %d divided by %d is %d\n", d, e, f);
    printf("The sum of %d and %d is %d\n", a, b, c);
    return 0;
}
