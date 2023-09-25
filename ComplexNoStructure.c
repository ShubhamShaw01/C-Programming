//wap array of 5 complex no created in structure and display them weith the help of display function
#include<stdio.h>

typedef struct complex{
    int real;
    int complex;
}clx;
void display(clx *c){
    for(int i=0;i<5;i++){
        printf("\n%d complex no %d + %di ",i+1,c[i].real,c[i].complex);
    }
}
int main(){
    clx c[5];
    for(int i=0;i<5;i++){
        printf("\nEnter the %d real no : ",i+1);
        scanf("%d",&c[i].real);
        printf("\nEnter the %d complex no : ",i+1);
        scanf("%d",&c[i].complex);
    }
    display(c);

    return 0;
}