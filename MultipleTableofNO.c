//wap to print the multiplication table given by user and ask him in which order he want reverse ot normal
#include<stdio.h>

int main(){
    int no,choice;
    printf("Enter the number : ");
    scanf("%d",&no);
    printf("\nPress\n1:for Mutiplication Table\n2:for Reverse Multiplication Table\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        for(int i=1;i<11;i++){
            printf("\n%d * %d = %d",no,i,no*i);
        }
        break;
    case 2:
        for(int i=10;i>0;i--){
            printf("\n%d * %d = %d",no,i,no*i);
        }
    
    default:
        printf("Invalid Input!");
        break;
    }

    return 0;
}