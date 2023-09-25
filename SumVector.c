//write a Function some vector which returns the sum of two vector passed (vector is 2D)
#include<stdio.h>
typedef struct vector{
        int x;
        int y;
    }vec;
vec sumVector(struct vector v1, struct vector v2)
{
    vec result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
}
int main(){
    vec v1,v2,sum;
    printf("Enter the x dimension of vector 1 : ");
    scanf("%d",&v1.x);
    printf("\nEnter the y dimension  of vector 1: ");
    scanf("%d",&v1.y);
    printf("\n the vector 1  is %di + %dj",v1.x,v1.y);
    printf("\nEnter the x dimension vector 2: ");
    scanf("%d",&v2.x);
    printf("\nEnter the y dimension vector 2: ");
    scanf("%d",&v2.y);
    printf("\n the vector 2 is %di + %dj",v2.x,v2.y);
    sum=sumVector(v1,v2);
    printf("\nThe sum of two vectors are : %di + %dj",sum.x,sum.y);

    return 0;
}