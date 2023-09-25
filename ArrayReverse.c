//Write a program containing a function which reversed the array pass in it
#include<stdio.h>

void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void reverse(int *arr,int n)
{
    for(int i=0;i<n/2;i++)
        swap(&arr[i],&arr[n-i-1]);
}
int main(){
    int arr[20],n;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter the %d element : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nYour input array is \n");
    for(int i=0 ; i<n;i++)
        printf("%d\t",arr[i]);
    reverse(arr,n);
    printf("\nReversed  array is \n");
    for(int i=0 ; i<n;i++)
        printf("%d\t",arr[i]);
    return 0;
}