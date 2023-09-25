//wap to check whether no is prime no or not without using loop
#include<stdio.h>
#include<stdbool.h>
bool isPrime(int primeNo,int flag){
    if(primeNo<=1)
        return false;
    else if (flag<primeNo){
        if(primeNo%flag==0)
            return false;
        else
            return(primeNo,flag+1);
    }
    else
        return true;

}

int main(){
    int primeNo;
    printf("Enter the no to check : ");
    scanf("%d",&primeNo);
    if (isPrime(primeNo,2))
        printf("%d is prime no",primeNo);
    else
        printf("%d is not prime no",primeNo);

    return 0;
}