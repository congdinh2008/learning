#include <stdio.h>

int main()
{
    int number = 3;
    printf("%d\n", number);           // %d is a placeholder for an integer

    unsigned int negativeNumber = 34;
    printf("%u\n", negativeNumber);           // %u is a placeholder for an unsigned integer

    long longNumber = 9281234567890L;
    printf("%ld\n", longNumber);      // %ld is a placeholder for a long integer

    long long longlongNumber = 945678909281567890L;
    printf("%lld\n", longlongNumber); // %lld is a placeholder for a long long integer

    float pi = 3.14159285F;
    printf("%.8f\n", pi);             // %f is a placeholder for a float

    double e = 2.7182818284590452353602874713527;
    printf("%.18lf\n", e);            // %lf is a placeholder for a double
    return 0;
}