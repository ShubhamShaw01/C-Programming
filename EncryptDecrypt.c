// wap to encrypt a string 1 to the ascii value of its character and decryot it too
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void decrypt(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
    printf("\nDecrypted string is : %s", str);
}

void encrypt(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
    printf("\nEncrypted string is : %s", str);
}

int main()
{
    char str[20];
    int choice;

    while (1)
    {
        printf("\nPress\n1: For Encrypt\n2: For Decrypt\n3: To Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            fflush(stdin);
            printf("\nEnter the string to encrypt: ");
            scanf("%s", str);
            encrypt(str);
            break;
        case 2:
            fflush(stdin);
            printf("\nEnter the string to decrypt: ");
            scanf("%s", str);
            decrypt(str);
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Wrong input");
            break;
        }
    }

    return 0;
}
