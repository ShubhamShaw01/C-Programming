// wap to prim's algo
#include <stdio.h>

#define INF 9999

int c[10][10];
int vi[10] = {0};

void prim_algo(int n)
{
    int k = 1, cost = 0, i, j, u, v, min;
    vi[1] = 1;

    while (k < n)
    {
        min = INF;
        for (i = 1; i <= n; i++)
        {
            if (vi[i] == 1)
            {
                for (j = 1; j <= n; j++)
                {
                    if (c[i][j] < min && vi[j] == 0)
                    {
                        u = i;
                        v = j;
                        min = c[i][j];
                    }
                }
            }
        }

        if (vi[v] == 0)
        {
            printf("\n%d:\t%d:\t%d", u, v, min);
            vi[v] = 1;
            cost += min;
        }
        c[u][v] = c[v][u] = INF;

        k++;
    }

    printf("\nTotal cost: %d", cost);
}

int main()
{
    int n;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    printf("Enter the cost adjacency matrix:\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            scanf("%d", &c[i][j]);
        }
    }

    prim_algo(n);

    return 0;
}
