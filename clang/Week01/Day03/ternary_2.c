#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int a = 6;
    int b = 10;
    int c = 15;

    printf("%d\n", a > b ? (a > c ? a : c) : (b > c ? b : c));

    return 0;
}