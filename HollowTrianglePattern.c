// wap to implement pattern this pattern
/*          *
          *   *
        *       *
      *   *   *   *
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
            if(k==1 || k==i || i==rows)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
