// wap to implement GP
#include <stdio.h>
#include <math.h>

int main()
{
    double size, firstTerm, no;
    double sum = 0;
    printf("Enter the size of the series : ");
    scanf("%lf", &size);
    printf("Enter the first term of GP : ");
    scanf("%lf", &firstTerm);
    printf("Enter the no in which power applied : ");
    scanf("%lf", &no);
    for (double i = 0; i < size; i++)
    {
        double temp = firstTerm * pow(no, i);
        sum += temp;
        printf("%g\t", temp);
    }
    printf("\nsum of the series : %g\n", sum);
    return 0;
}
