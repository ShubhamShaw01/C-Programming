// wap to implement pattern this pattern
/*          1
          2   3
        4   5   6
          7   8
            9
 */
#include <stdio.h>

int main()
{
    printf("Enter the rows: ");
    int rows;
    scanf("%d", &rows);
    int no=0;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d ",++no);
        }
        printf("\n");
    }
    for (int i = rows - 1; i > 0; i--)
    {
        for (int j = rows - i; j > 0; j--)
        {
            printf(" ");
        }
        for (int k = i; k > 0; k--)
        {
            printf("%d ",++no);
        }
        printf("\n");
    }

    return 0;
}
