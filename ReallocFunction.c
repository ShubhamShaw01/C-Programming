// Create a array dynamically capable of storing string 5 integer now use realloc to make it store 10 integers
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter the %d element : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("\nthe array is : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", ptr[i]);
    }
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    for (int i = 5; i < 10; i++)
    {
        printf("\nEnter the %d element : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("\nthe new array is : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", ptr[i]);
    }
    free(ptr);
    return 0;
}