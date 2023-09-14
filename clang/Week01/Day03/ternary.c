#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int a = 6;
    int b = 10;
    bool c = a > b ? true : false;

    printf("%s\n", c == true ? "Dung" : "Sai");

    return 0;
}