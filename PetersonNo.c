//wap to find the given is peterson or no
#include<stdio.h>
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
void peterson(int no){
    int flag=no;
    int check=0;
    while(flag>0){
        int rem = factorial(flag%10);
        check+=rem;
        flag/=10;
    }
    if (check==no)
        printf("%d is a peterson no ",no);
    else
        printf("%d is not a peterson no its digits factorial addition is %d",no,check);
}
int main()
{
    int no;
    printf("Enter the no to find its Peterson no : ");
    scanf("%d", &no);
    peterson(no);

    return 0;
}