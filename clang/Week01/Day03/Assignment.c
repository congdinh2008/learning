#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int a = 60;
    a += 10;
    printf("a = %d\n", a);
    a /= 2;
    printf("a = %d\n", a);

    double b = a / 2.0;
    printf("b = %lf\n", b);

    int d = 0;

    if (d != 0)
    {
        int c = a / d;
        printf("c = %d\n", c);
    }
    else
    {
        printf("d = 0 thi a khong chia duoc cho d\n");
    }

    return 0;
}