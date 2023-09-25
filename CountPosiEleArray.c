// wap containing function which count the no of positive in a array
#include <stdio.h>

int countPositiveIntegers(int *arr, int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
            count++;
    }
    return count;
}

int main()
{
    int arr[20], n;
    printf("\nEnter the size of array : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nYour input array is \n");
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);

    int count = countPositiveIntegers(arr, n);
    printf("\nThe number of positive integers in the array is: %d\n", count);

    return 0;
}
