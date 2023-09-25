// wap in c to implement graph coloring algo
#include <stdio.h>
#include <stdlib.h>
#define max 20
int a[max][max], count = 0, m, n, x[max];
void nextvalue(int k)
{
    int i;
    while (1)
    {
        x[k] = (x[k] + 1) % (m + 1);
        if (x[k] == 0)
            return;
        for (i = 1; i <= n; i++)
        {
            if ((a[k][i] != 9999) && (x[k] == x[i]))
                break;
        }
        if (i == (n + 1))
            return;
    }
}
void gcoloring(int k)
{
    int j;
    while (1)
    {
        nextvalue(k);
        if (x[k] == 0)
            return;
        else if (k == n)
        {
            for (j = 1; j <= k; j++)
            {
                printf("%d", x[j]);
            }
            printf("\n");
            count++;
        }
        else
        {
            gcoloring(k + 1);
        }
    }
}
int main()
{
    int v, e, i, j, u;
    printf("enter the no of vertex : ");
    scanf("%d", &n);
    printf("\nenter the no of edge : ");
    scanf("%d", &e);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
            a[i][j] = 9999;
    }
    printf("\nenter the initial followed by destination vertex of the graph:\n");
    for (i = 1; i <= e; i++)
    {
        scanf("%d%d", &u, &v);
        a[u][v] = a[v][u] = 1;
    }
    printf("\nenter the no of colors : ");
    scanf("%d", &m);
    gcoloring(1);
    printf("\n No.of combination possible : %d", count);
    return 0;
}