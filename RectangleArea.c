// wap in c to calculate area of a rectangle user given inputs
#include <stdio.h>

int main()
{
    float length, breath;
    printf("Enter the length of the rectangle : ");
    scanf("%g", &length);
    printf("Enter the breath of the rectangle : ");
    scanf("%g", &breath);
    printf("Area of the rectangle = %g", length * breath);

    return 0;
}