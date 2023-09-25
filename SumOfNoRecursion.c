//wap to print the sum of n natural no using recursion
#include<stdio.h>

int sum(int n){
    if(n>0)
        return n+sum(n-1);  
}
int main(){
    int n;
    printf("\nEnter the nth no : ");
    scanf("%d",&n);
    printf("\nTotal sum of %d is %d",n,sum(n));
    return 0;
}