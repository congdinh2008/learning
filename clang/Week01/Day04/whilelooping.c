#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    int i = 1;
    while (i <= 10)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }

        i++;
    }

    int j = 100;
    while (j >= 0)
    {
        if (j % 2 != 0)
        {
            printf("%d\n", j);
        }

        j--;
    }
    return 0;
}
