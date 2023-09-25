// wap in which find the user given input is lowercase or uppercase
#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    int is_lowercase = 1;
    int is_uppercase = 1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (!islower(str[i]))
        {
            is_lowercase = 0;
        }
        if (!isupper(str[i]))
        {
            is_uppercase = 0;
        }
    }

    if (is_lowercase)
    {
        printf("Lowercase\n");
    }
    else if (is_uppercase)
    {
        printf("Uppercase\n");
    }
    else
    {
        printf("Mixed case\n");
    }

    return 0;
}
