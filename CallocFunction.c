// function using calloc() function
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    int *ptr;
    ptr = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the %d element : ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("\nthe array is : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", ptr[i]);
    }
    free(ptr);
    return 0;
}