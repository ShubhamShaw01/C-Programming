// Create an array of multiplication table of 7 upto 15(7*15=70) Use realloc to make in store 15(7*15)
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = 7 * (i + 1);
    }
    printf("\nthe array is : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("7 * %d = %d\n", i + 1, ptr[i]);
    }
    ptr = (int *)realloc(ptr, 15 * sizeof(int));
    for (int i = 10; i < 15; i++)
    {
        ptr[i] = 7 * (i + 1);
    }
    printf("\nthe new table is :(or new Allocation of memory) \n");
    for (int i = 0; i < 15; i++)
    {
        printf("7 * %d = %d\n", i + 1, ptr[i]);
    }
    free(ptr);
    return 0;
}