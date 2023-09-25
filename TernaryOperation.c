// wap in c to implement ternary operation to find bigger no amoung three no
#include <stdio.h>

int main()
{
    int no1, no2, no3;
    int biggest;
    printf("Enter all the three nos : ");
    scanf("%d%d%d", &no1, &no2, &no3);
    biggest = (no1 > no2) ? (no1 > no2 ? no1 : no2) : (no2 > no3 ? no2 : no3);
    printf("The biggest no is %d", biggest);
    return 0;
}