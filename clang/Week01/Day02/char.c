#include <stdio.h>

int main()
{
    char charA = 'A';
    printf("%c\n", charA); // %c is a placeholder for a character
    printf("%d\n", charA); // %d is a placeholder for a character

    char chara = 'a';
    printf("%c\n", chara); // %c is a placeholder for a character
    printf("%d\n", chara); // %d is a placeholder for a character

    char convert = 'B' + 32;
    printf("%c\n", convert); // %c is a placeholder for a character
    printf("%d\n", convert); // %d is a placeholder for a character

    char name[] = "Cong Dinh"; // A string is an array of characters

    printf("%s\n", name); // %s is a placeholder for a string

    // Convert name variable to lower case and print it out
    for (size_t i = 0; i < sizeof(name) / sizeof(name[0]); i++)
    {
        if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i] += 32;
        }
    }

    printf("%s\n", name); // %s is a placeholder for a string

    return 0;
}