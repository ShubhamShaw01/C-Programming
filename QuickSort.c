// wap to do quick sort
#include <stdio.h>
int a[50];
void swap(int *, int *);
void quicksort(int, int);
int partition(int, int);
int main()
{
    int n, i;
    printf("enter the length of the array : ");
    scanf("%d", &n);
    printf("\nPlease enter the elements\n");
    for (i = 0; i < n; i++)
    {
        printf("enter the %d position element: ", i);
        scanf("%d", &a[i]);
    }
    printf("\n yours input array is\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    quicksort(0, n - 1);
    printf("\nThe sorted array is\n");
    for (i = 0; i < n; i++)
        printf("%d\t", a[i]);
    return 0;
}
void quicksort(int l, int u)
{
    int t;
    if (l < u)
    {
        t = partition(l, u);
        quicksort(l, t - 1);
        quicksort(t + 1, u);
    }
}
int partition(int l, int u)
{
    int x, i, j;
    x = a[u];
    i = l - 1;
    for (j = l; j < u; j++)
    {
        if (a[j] < x)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[u]);
    return i + 1;
}
void swap(int *x, int *y)
{
    int z = *x;
    *x = *y;
    *y = z;
}