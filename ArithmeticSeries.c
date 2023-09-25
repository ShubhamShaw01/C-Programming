// wap to implement arithmetic series
#include <stdio.h>

int main()
{
    int firstTerm, diff, size;
    int sum = 0;

    printf("Enter the first term : ");
    scanf("%d", &firstTerm);
    printf("Enter the difference of the arithmetic series : ");
    scanf("%d", &diff);
    printf("Enter the size of the series : ");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        int temp = firstTerm + (diff * i);
        sum += temp;
        printf("%d\t", temp);
    }

    printf("\nSum of this series is : %d\n", sum);

    return 0;
}
