// wap to implement linear search
#include <stdio.h>

int search(int arr[], int size, int elementSearch)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elementSearch)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int elementSearch;
    printf("Enter the element to search: ");
    scanf("%d", &elementSearch);
    int result = search(arr, size, elementSearch);
    if (result == -1)
    {
        printf("%d not found\n", elementSearch);
    }
    else
    {
        printf("%d found in position %d\n", elementSearch, result);
    }
    return 0;
}
