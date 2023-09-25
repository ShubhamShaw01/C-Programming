//write a c program to print fibonacci series
#include<stdio.h>
int a=0, b=1,c,cursor=1;
int fibonacci(int n){
    if(n<=0){
        printf("There is no fibonacci series for this value");
    }
    else if(cursor==1){
        printf("fibonacci series is \n %d \t",a);
        cursor++;
    }
    else if(cursor==2){
        printf("%d\t",b);
        cursor++;
    }
    else{
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
        cursor++;
    }
    if(cursor<=n)
        fibonacci(n);
    else
        return 0;
}
int main(){
    int n;
    printf("\nEnter the length of the fibonacci series: ");
    scanf("%d",&n);
    fibonacci(n);

    return 0;
}