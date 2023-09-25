// wap to implement pattern this pattern
/*      *
        *   *
        *   *   *
 */
#include <stdio.h>

int main()
{
    printf("Enter the rows: ");
    int rows;
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }

    return 0;
}
