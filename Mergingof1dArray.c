// wap to merge two 1-d array
#include <stdio.h>

int main()
{
    int a1[10], a2[10], a3[20];
    int i, j, n, m, k;
    printf("Enter the number of elements in array1: ");
    scanf("%d", &n);
    printf("Enter elements in array a1...\n ");
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &a1[i]);
    }
    printf("Enter the number of elements in array2 : ");
    scanf("%d", &m);
    printf("Enter elements in array a2...\n ");
    for (i = 0; i < m; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &a2[i]);
    }
    i = j = k = 0;

    while (i < n && j < m)
    {
        if (a1[i] <= a2[j])
        {
            a3[k++] = a1[i++];
        }
        else
        {
            a3[k++] = a2[j++];
        }
    }

    while (i < n)
    {
        a3[k++] = a1[i++];
    }

    while (j < m)
    {
        a3[k++] = a2[j++];
    }

    printf("Merged array is: ");
    for (i = 0; i < n + m; i++)
        printf("%d\t", a3[i]);

    return 0;
}
