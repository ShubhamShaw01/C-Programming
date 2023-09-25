// wap to print factorial of the user given no
#include <stdio.h>

void factorial(int no)
{
    int fact = 1;
    if (no <= 1)
        printf("%d! = %d", no, fact);
    else
    {
        for (int i = 2; i <= no; i++)
        {
            fact *= i;
        }
        printf("%d! = %d", no, fact);
    }
}
int main()
{
    int no;
    printf("Enter the no to find its factorial : ");
    scanf("%d", &no);
    factorial(no);

    return 0;
}