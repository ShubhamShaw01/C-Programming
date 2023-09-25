// wap to print factorial of the user given no using recursive method
#include <stdio.h>

int factorial(int no)
{
    int fact = 1;
    if (no <= 1)
        return fact;
    else
    {
        return fact *= no * factorial(no - 1);
    }
}
int main()
{
    int no;
    printf("Enter the no to find its factorial : ");
    scanf("%d", &no);
    int result = factorial(no);
    printf("%d! = %d", no, result);

    return 0;
}