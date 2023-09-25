//wap to implement selection sort
#include <stdio.h>

int main()
{
    int a[20], n, i, j, min, loc, swap;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n - 1; i++)
    {
        min = a[i];
        loc = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                loc = j;
            }
        }
        swap = a[i];
        a[i] = a[loc];
        a[loc] = swap;
    }

    printf("\nThe sorted list is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
