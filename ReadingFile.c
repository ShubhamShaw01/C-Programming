// write a program to read three integers from a file
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("text.txt", "r");
    int num[3];
    for (int i = 0; i < 3; i++)
    {
        fscanf(ptr, "%d", &num[i]);
        printf("%d\t", num[i]);
    }

    return 0;
}