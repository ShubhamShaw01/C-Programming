//Wap in c to calculate simple interest
#include<stdio.h>

int main(){
    float principleAmount,rate,year;
    printf("Enter the Principle amount : ");
    scanf("%g",&principleAmount);
    printf("Enter the rate : ");
    scanf("%g",&rate);
    printf("Enter the time in years : ");
    scanf("%g",&year);
    printf("Simple Interest = %g",(principleAmount*rate*year)/100);

    return 0;
}