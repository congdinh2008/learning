#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    // 0011 1100
    int a = 60;
    // 0000 1101
    int b = 13;
    // 0000 1100
    int c = a & b;

    printf("a & b = %d\n", c);

    // 0011 1101 = 32+16+8+4+1 = 61
    int d = a | b;
    printf("a | b = %d\n", d);

    // 0011 0001 = 32+16+1 = 49
    int e = a ^ b;
    printf("a ^ b = %d\n", e);

    int f = a << 1; // Cho toc do xu ly nhanh hon a*2
    printf("a << 1 = %d\n", f);

    int g = a >> 1; // Cho toc do xu ly nhanh hon a/2
    printf("a >> 1 = %d\n", g);

    int h = a * 2;
    printf("a * 2 = %d\n", h);
    return 0;
}