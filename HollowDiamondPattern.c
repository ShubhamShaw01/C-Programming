// wap to implement pattern this pattern
/*          *
          *   *
        *       *
          *   *
            *
 */
#include <stdio.h>

int main()
{
    printf("Enter the rows: ");
    int rows;
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            if(k==1 || k==i)
                printf("* ");
            else
                printf("  ");
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
            if(k==1 || k==i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
