#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 9;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
