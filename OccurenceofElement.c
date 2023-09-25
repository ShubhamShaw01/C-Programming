//wap to count the occurrence of a element
#include<stdio.h>
int occurrence(int *arr,int n,int element){
    int count=0;
    for(int i=0;i<n;i++){
        if (arr[i]==element)
            count++;
    }
    return count;
}
int main()
{
    int arr[20], n,element;
    printf("\nEnter the size of array : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nYour input array is \n");
    for (int i = 0; i < n; i++)
        printf("%d\t", arr[i]);
    printf("\nEnter the element to search : ");
    scanf("%d",&element);
    int count = occurrence(arr,n,element);
    printf("\nThe number of occurrence of element %d in the array is: %d\n",element, count);

    return 0;
}