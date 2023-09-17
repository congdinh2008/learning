#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 1;

    do
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }

        i++;
    } while (i <= 10);

    int j = 100;
    do
    {
        if (j % 2 != 0)
        {
            printf("%d\n", j);
        }

        j--;
    } while (j >= 0);
    return 0;
}
