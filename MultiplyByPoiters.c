// Write a program in C to change the value of a variable to 10 times of its current value write a function and pass the value of reference
#include <stdio.h>

int tenTimes(int *x)
{
    *x *= 10;
}
int main()
{
    int no;
    printf("Enter the value of no to find its 10 multiple : ");
    scanf("%d", &no);
    int flag = no;
    tenTimes(&no);
    printf("10 multiple of %d : %d", flag, no);

    return 0;
}