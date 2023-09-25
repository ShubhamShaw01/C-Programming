// wap a c to find the absolute value of the user given no
#include <stdio.h>

int main()
{
    float no;
    printf("Enter the no to find its absolute no : ");
    scanf("%f", &no);
    float originalValue = no;
    if (no < 0)
        no = no * (-1);
    printf("The absolute value of the no %g is %g", originalValue, no);

    return 0;
}