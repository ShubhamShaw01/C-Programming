// wap to do knapsack problem
#include <stdio.h>

struct knap
{
    int p, w;
    float r, x;
} k[20], t;

int main()
{
    int n, m, i, j;
    float c = 0;
    printf("\nEnter the space you have in knapsack: ");
    scanf("%d", &m);
    printf("\nEnter how many products you want to enlist: ");
    scanf("%d", &n);
    printf("\nEnter the product cost followed by its weight:\n");
    for (i = 0; i < n; i++)
    {
        printf("Enter the %dth product details: ", i + 1);
        scanf("%d%d", &k[i].p, &k[i].w);
        k[i].r = (float)k[i].p / k[i].w;
        k[i].x = 0;
    }
    /*sorting based on ratio*/
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (k[i].r < k[j].r)
            {
                t = k[i];
                k[i] = k[j];
                k[j] = t;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (m > k[i].w)
        {
            k[i].x = 1;
            c += k[i].p;
            m -= k[i].w;
        }
        else
        {
            k[i].x = (float)m / k[i].w;
            c += k[i].p * k[i].x;
            m = 0;
            break;
        }
    }
    for (i = 0; i < n; i++)
        printf("%.2f\t", k[i].x);
    printf("\ntotal profit is : %.2f", c);
    return 0;
}