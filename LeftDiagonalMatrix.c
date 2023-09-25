// write a program in c to find the sum of the left diagonals of a matrix
#include <stdio.h>
int main()
{
    int a[20][20], i, j, n, sum = 0;
    printf("Input the size of the square matrix : ");
    scanf("%d", &n);
    printf("Input element in the first matrix : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("element- [%d],[%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is : \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d\t", a[i][j]);
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        sum += a[i][i];
    }
    printf("Addition of the left Diagonal is : %d", sum);
}