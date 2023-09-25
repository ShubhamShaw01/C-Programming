//check whether the user given no is armstrong or not
#include<stdio.h>

int main(){
    int no;
    printf("Enter the no to check : ");
    scanf("%d",&no);
    int check=0;
    int flag=no;
    while(flag>0){
        int rem =flag%10;
        check=check+(rem*rem*rem);
        flag/=10;
    }
    if(no==check)
        printf("%d is a Armstrong no",no);
    else
        printf("%d is not a armstrong no instead its sumof digits cubes is %d",no,check);

    return 0;
}