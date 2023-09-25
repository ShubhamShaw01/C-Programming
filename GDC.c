//wap to print GDC among given 2 user no
#include<stdio.h>

int gdc(int no1,int no2){
    if(no2==0)
        return no1;
    else{
        return gdc(no2,no1%no2);
    }
}
int main()
{
    int no1,no2;
    printf("Enter the first no to find its GDC : ");
    scanf("%d",&no1);
    printf("Enter the second no to find its GDC : ");
    scanf("%d", &no2);
    int result = gdc(no1,no2);
    printf("GDC of this two no %d and %d is %d", no1,no2, result);

    return 0;
}