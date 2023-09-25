// wap to count the occurrence of a given character in a string
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], c;
    int count = 0;
    printf("Enter the string : ");
    gets(str);
    printf("Enter the character to check : ");
    scanf("%c",&c);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
            count++;
    }
    printf("The occurrence of character %c is %d",c, count);
    return 0;
}