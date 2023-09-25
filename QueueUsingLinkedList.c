// Queue using Linked List
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
} *front = NULL, *rear = NULL;

void insertion(int item)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = item;
    tmp->link = NULL;
    if (front == NULL)
        front = tmp;
    else
        rear->link = tmp;
    rear = tmp;
}

void deletion()
{
    struct node *tmp;
    if (front == NULL)
    {
        printf("Queue is Empty!!!\n");
    }
    else
    {
        tmp = front;
        printf("The deleted item is= %d\n", front->info);
        front = front->link;
        free(tmp);
    }
}

void display()
{
    struct node *tmp;
    tmp = front;
    if (front == NULL)
    {
        printf("Queue is Empty!!!\n");
    }
    else
    {
        printf("The Queue elements are: \n");
        while (tmp != NULL)
        {
            printf("%d\n", tmp->info);
            tmp = tmp->link;
        }
    }
}

int main()
{
    int choice, item;
    while (1)
    {
        printf("Press\n (1) for Insertion\n (2) for Deletion\n (3) for Display\n (4) for EXIT\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the item: ");
            scanf("%d", &item);
            insertion(item);
            break;
        case 2:
            deletion();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong Choice!!!\n");
        }
    }
    return 0;
}