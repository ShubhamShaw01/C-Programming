//wap in c to print area and circumference of circle
#include<stdio.h>

int main(){
    float radius;
    printf("Enter the radius of the circle : ");
    scanf("%g",&radius);
    printf("Area of the circle = %g",3.14*radius*radius);
    printf("\nCircumference of the circle = %g",2*3.14*radius);

    return 0;
}