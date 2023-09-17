#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    // Tim tat ca so prime trong khoang 1 den 100

    int number = 2;
    while (number <= 100)
    {
        // Lam the nao de kiem tra number la nguyen to hay ko
        // Chia no cho tat ca cac so trong khoang 1 < chinh no => lap di lap lai
        // Neu no chia het cho bat ky so nao trong khoang tren
        //      Thi no ko phai so nguyen to
        // Nguoc lai
        //      No la so nguyen to

        bool isPrime = true;
        for (int i = 2; i < number; i++)
        {
            if (number % i == 0)
            {
                isPrime = false;
                break; // thoat khoi vong loop gan nhat
            }
        }

        if (isPrime)
        {
            printf("%d is prime number!\n", number);
        }

        number++;
    }

    return 0;
}
