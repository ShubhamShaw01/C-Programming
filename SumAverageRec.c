//Write a program using functions which calculate the sum average of two numbers using pointer and print the value of sum and average in main()
#include<stdio.h>

int callByRef(int a,int b,int *sum,float *avg){
    *sum=a+b;
    *avg=(float)*sum/2;
}
int main(){
    int a,b,sum;
    float average;
    printf("Enter the value of first no : ");
    scanf("%d",&a);
    printf("\nEnter the value of second no : ");
    scanf("%d",&b);
    callByRef(a,b,&sum,&average);
    printf("The sum id %d the average is %g",sum,average);
    return 0;
}