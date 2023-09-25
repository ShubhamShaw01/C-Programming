/*wap to implement pascal triangle
    1
  1   1
1   2   1
*/
#include <stdio.h>

int main()
{
    printf("Enter how many rows you want : ");
    int rows;
    scanf("%d", &rows);

    int flag = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }

        int ver = flag;
        while (ver > 0)
        {
            int rem = ver % 10;
            printf("%d ", rem);
            ver /= 10;
        }

        flag *= 11;
        printf("\n");
    }

    return 0;
}
