// Root of quadratic equation
#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,rr1,rr2,r1,r2,real,img;
    printf("Please enter the value of the quadratic equation = \n");
    scanf("%f %f %f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d>0){
        printf("Roots are real\n");
        rr1=(-b+sqrt(d))/2*a;
        rr2=(-b-sqrt(d))/2*a;
        printf("The value1 : %g\n",rr1);
        printf("The value2 : %g\n",rr2);
    }
    else if(d==0){
        printf("Roots are real and equal\n");
        r1=-b/(2*a);
        r2=r1;
        printf("The value: %g\n",r1);
    }
    else{
        printf("Roots are imaginary\n");
        real=-b/2*a;
        img=sqrt(-d)/2*a;
        printf("Imaginary value1 : %.2f+%.2fi\n",real,img);
        printf("Imaginary value2 : %.2f-%.2fi\n",real,img);

    }
}