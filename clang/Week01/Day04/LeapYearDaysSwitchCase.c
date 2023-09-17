#include <stdio.h>

int main(int argc, char const *argv[])
{
    // Allow user input month and year from keyboard
    int month, year;

    // Allow user input a month
    printf("Please enter a month: ");
    scanf("%d", &month);

    // Allow user input a year
    printf("Please enter a year: ");
    scanf("%d", &year);

    // Print out user's year & month
    printf("Your month: %d\n", month);
    printf("Your year: %d\n", year);

    if (month > 12 || month < 1 || year < 0)
    {
        printf("Invalid month or year value!");
    }
    else
    {
        switch (month)
        {
            case 4:
            case 6:
            case 9:
            case 11:
                printf("Month = %d => %d days", month, 30);
                break;
            case 2:
                // If year is leap year(%4==0 && %100!=0 || %400==0), month has 29 days
                if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
                {
                    printf("%d of %d has %d days\n", month, year, 29);
                }
                else
                {
                    printf("%d of %d has %d days\n", month, year, 28);
                }
                break;
            default:
                printf("Month = %d => %d days", month, 31);
                break;
        }
    }

    return 0;
}
