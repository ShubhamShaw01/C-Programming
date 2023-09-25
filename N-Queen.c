// wap to do n queen problem
#include <stdio.h>
#include <math.h>
int a[100];
int c = 0;
void nqueen(int, int);
int place(int, int);
void print(int);
void nqueen(int k, int n)
{
    int i;
    for (i = 0; i <= n; i++)
    {
        if (place(k, i))
        {
            a[k] = i;
            if (k == n)
            {
                print(n);
                c++;
            }
            else
                nqueen(k + 1, n);
        }
    }
}
int place(int k, int i)
{
    int j;
    for (j = 0; j < k; j++)
    {
        if ((a[j] == i) || (abs(j - k) == abs(a[j] - i)))
            return 0;
    }
    return 1;
}
void print(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (a[i] == j)
                printf("Q");
            else
                printf("_");
        }
        printf("\n");
    }
    printf("\n\n");
}
int main()
{
    int n;
    printf("enter how many queen you want to arrange: ");
    scanf("%d", &n);
    nqueen(1, n);
    printf("\nTotal solution=%d", c);
    return 0;
}