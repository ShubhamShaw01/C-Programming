// wap to check the user given no is multiple of a no given by user at first
#include <stdio.h>
#include <stdbool.h>

bool multiple(int dividend, int divisor)
{
    if (dividend % divisor == 0)
        return true;
    else
        return false;
}
int main()
{
    printf("Enter the divisor : ");
    int divisor, dividend;
    scanf("%d", &divisor);
    printf("Enter the dividend : ");
    scanf("%d", &dividend);

    if (multiple(dividend, divisor))
    {
        printf("%d is multiple of %d.\n", dividend, divisor);
    }
    else
    {
        printf("%d is not a multiple of %d.\n", dividend, divisor);
    }

    return 0;
}
