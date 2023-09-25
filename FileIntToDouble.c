// write a program to mdify a file containing its a interger to its double
#include <stdio.h>

int main()
{
    FILE *ptr;
    FILE *ptr1;
    int c;

    ptr = fopen("text.txt", "r");
    ptr1 = fopen("text1.txt", "w");

    while (fscanf(ptr, "%d", &c) != -1)
    {
        fprintf(ptr1, "%d\t", c * 2);
    }

    fclose(ptr);
    fclose(ptr1);

    return 0;
}