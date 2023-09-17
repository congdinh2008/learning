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

    // Logic print out days of month
    // If month in (1,3,5,7,8,10,12) print out 31 days
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        printf("%d of %d has %d days\n", month, year, 31);
    }
    // If month in (4,6,9,11) print out 30 days
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        printf("%d of %d has %d days\n", month, year, 30);
    }
    // If month is 2, print out 28,29 days depend on year is leap or not
    else if (month == 2)
    {
        // If year is leap year(%4==0 && %100!=0 || %400==0), month has 29 days
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            printf("%d of %d has %d days\n", month, year, 29);
        }
        else
        {
            printf("%d of %d has %d days\n", month, year, 28);
        }
    }
    // Print out invalid month
    else
    {
        printf("Your input is invalid.");
    }

    return 0;
}
