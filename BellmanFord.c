// write a c program to implement bellman ford
#include <stdio.h>
#define max 10
#define inf 9999

int graph[max][max], edge[max][2], d[max];
int n, e, source;

void bellmanFord();

int main()
{
    int i, j, u, v, w;

    printf("Enter the number of vertices: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            graph[i][j] = 0;
        }
    }

    printf("Enter the number of edges: ");
    scanf("%d", &e);

    printf("Enter the source, destination vertex, and the weight of the edges:\n");
    for (i = 1; i <= e; i++)
    {
        scanf("%d %d %d", &u, &v, &w);
        graph[u][v] = w;
        edge[i][0] = u;
        edge[i][1] = v;
    }

    printf("Enter the source vertex: ");
    scanf("%d", &source);

    bellmanFord();

    return 0;
}

void bellmanFord()
{
    int i, j, k, u, v;
    int flag = 0;

    for (i = 1; i <= n; i++)
    {
        d[i] = inf;
    }

    d[source] = 0;

    for (i = 1; i < n; i++)
    {
        for (k = 1; k <= e; k++)
        {
            u = edge[k][0];
            v = edge[k][1];

            if (d[u] + graph[u][v] < d[v])
            {
                d[v] = d[u] + graph[u][v];
            }
        }
    }

    for (k = 1; k <= e; k++)
    {
        u = edge[k][0];
        v = edge[k][1];

        if (d[u] + graph[u][v] < d[v])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("\nNegative cost cycle exists!");
    }
    else
    {
        printf("\nSingle-source shortest path problem done successfully!\n");
        for (i = 1; i <= n; i++)
        {
            printf("%d ", d[i]);
        }
    }
}