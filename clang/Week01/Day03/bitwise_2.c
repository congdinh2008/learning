#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 60;
    int b = 13;
    int c = a & b;
    printf("%d\n", c);

    int d = a | b;

    printf("%d\n", d);

    // Gap doi so a
    int e = a << 1;
    printf("%d\n", e);

    int f = b << 2;
    printf("%d\n", f);
    return 0;
}
