//check whether the user given no is pallindrome or not
#include<stdio.h>

int main(){
    int no;
    printf("Enter the no to check : ");
    scanf("%d",&no);
    int check=0;
    int flag=no;
    while(flag>0){
        check=check*10+(flag%10);
        flag/=10;
    }
    if(no==check)
        printf("%d is pallindrome no ",no);
    else
        printf("%d is not a pallindrome no its reverse is %d",no,check);
    return 0;
}