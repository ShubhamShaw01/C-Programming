// write a c program to solve matrix i multiplication for the following chain of matrices
#include <stdio.h>
#define max 20
int m[max][max], s[max][max];
void optimal_paren(int i, int j)
{
    if (i == j)
        printf("A%d", i);
    else
    {
        printf("(");
        optimal_paren(i, s[i][j]);
        optimal_paren(s[i][j] + 1, j);
        printf(")");
    }
}
void matrix_chain(int p[], int n)
{
    int i, j, l, k, q;
    for (i = 1; i <= n; i++)
        m[i][i] = 0;
    for (l = 2; l <= n; l++)
    {
        for (i = 1; i <= n - l + 1; i++)
        {
            j = i + l - 1;
            m[i][j] = 99999;
            for (k = i; k < j; k++)
            {
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j])
                {
                    m[i][j] = q;
                    s[i][j] = k;
                }
            }
        }
    }
}
int main()
{
    int n, i, p[max];
    printf("\nEnter the no of matrixs : ");
    scanf("%d", &n);
    printf("enter the dimension in order of array : \n");
    for (i = 0; i <= n; i++)
        scanf("%d", &p[i]);
    matrix_chain(p, n);
    optimal_paren(1, n);
    printf("\nMinimum no of multiplication %d", m[1][n]);
    return 0;
}
