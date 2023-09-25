//wap in c to insert element in any desired position of the array
#include <stdio.h>

int main()
{
    int arr[10], n, pos, item;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the position of the element to be inserted: ");
    scanf("%d", &pos);

    printf("Enter the element to be inserted: ");
    scanf("%d", &item);
    if (pos < 0 || pos >= n)
    {
        printf("Invalid position\n");
        return 1;
    }
    for (int i = n - 1; i >= pos; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos] = item;
    n++;
    printf("The updated array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
