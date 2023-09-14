#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int a = 8;
    int b = 4;

    bool result = a > b;

    //  result == true ? "true" : "false" => ternary operator => bieu thuc 3 ngoi => condition ? true : false
    printf("%d > %d = %s\n", a, b, result == true ? "true" : "false");

    int d = 10;
    int e = 10;
    bool result2 = d != e;
    printf("%d != %d = %s\n", d, e, result2 == true ? "true" : "false");

    return 0;
}