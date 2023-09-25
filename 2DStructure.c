//create a two dimensional vector using structure in c
#include<stdio.h>
typedef struct vector{
        int x;
        int y;
    }vec;
int main(){
    vec v1;
    printf("Enter the x dimension : ");
    scanf("%d",&v1.x);
    printf("Enter the y dimension : ");
    scanf("%d",&v1.y);
    printf("\n the vector is %di + %dj",v1.x,v1.y);

    return 0;
}