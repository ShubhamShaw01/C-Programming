// wap to implement floyd washall algo
#include <stdio.h>
void floyd(int a[20][20], int n)
{
    int i, j, k;
    for (k = 1; k <= n; k++)
    {
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (a[i][k] + a[k][j] < a[i][j])
                    a[i][j] = a[i][k] + a[k][j];
            }
        }
    }
    printf("\nThe New Matrix is : \n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int a[20][20], u, v, w, e, n, i, j;
    printf("\nEnter the number of vertices: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == j)
                a[i][j] = 0;
            else
                a[i][j] = 9999;
        }
    }
    printf("\nEnter the number of edges: ");
    scanf("%d", &e);
    printf("\nEnter initial vertex, destination vertex, and corresponding weight: \n");
    for (i = 1; i <= e; i++)
    {
        printf("edge%d : ", i);
        scanf("%d %d %d", &u, &v, &w);
        a[u][v] = w;
    }
    floyd(a, n);
    return 0;
}