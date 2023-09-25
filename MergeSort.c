// wap to merge sort
#include <stdio.h>
#include <stdlib.h>

#define max 20

int a[max], b[max];
void merge(int l, int m, int u)
{
    int i, j, k;
    i = k = l;
    j = m + 1;
    while (i <= m && j <= u)
    {
        if (a[i] < a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    }
    if (i > m)
    {
        while (j <= u)
        {
            b[k++] = a[j++];
        }
    }
    else if (j > u)
    {
        while (i <= m)
            b[k++] = a[i++];
    }
    for (i = l; i <= u; i++)
        a[i] = b[i];
}
int mergesort(int l, int u)
{
    int m;
    if (l < u)
    {
        m = (l + u) / 2;
        mergesort(l, m);
        mergesort(m + 1, u);
        merge(l, m, u);
    }
}
int main()
{
    int i, n;
    printf("\nenter how many element you want to in array : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nelement %d : ", i);
        scanf("%d", &a[i]);
    }
    printf("\nyours enter array\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    mergesort(0, n - 1);
    printf("\nthe sorted array is :\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    return 0;
}
