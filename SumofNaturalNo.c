//wap to sum of the natural no range given by user
#include<stdio.h>

int main(){
    int size, sum=0;
    printf("size of the series : ");
    scanf("%d",&size);
    for(int i=1;i<=size;i++){
        printf("%d\t",i);
        sum+=i;
    }
    printf("\nSum : %d",sum);
    return 0;
}