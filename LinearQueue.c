/*wap to make menu driven with linear queue*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 6
int queue[MAX],f=-1,r=-1;
void insertion(){
    int item;
    if(r==MAX-1)
        printf("\nQueue is full");
    else{
        printf("\nenter the element to insert :");
        scanf("%d",&item);
        if(f==-1)
            f=0;
        r=r+1;
        queue[r]=item;
    }
}
void deletion(){
    int item;
    if(f==-1||f>r)
        printf("\n Queue is already empty");
    else{
        item=queue[f];
        f++;
        printf("\n deleted iteam is %d",item);
    }
}
void display(){
    int i;
    if(f==-1||f>r)
        printf("\nQueue is empty");
    else{
        printf("the queue is:");
        for(i=f;i<=r;i++)
            printf("%d  ",queue[i]);
    }
}
void insertion();
void deletion();
void display();
int main()
{
    char m;
    int item,ch;
    do{
        printf("\n choose 1 for insertion\n 2 for deletion\n 3 for display\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            insertion();
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        default:
            printf("Wrong number");
            break;
        }
        printf("\n enter y to continue");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='Y'||ch=='y');
    return 0;
}