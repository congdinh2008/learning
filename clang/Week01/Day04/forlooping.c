#include <stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 1; i <= 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
    }

    for (int i = 100; i >= 0; i--)
    {
        if (i % 2 != 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
