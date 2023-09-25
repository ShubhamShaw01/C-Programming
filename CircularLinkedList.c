/*wap menu a driven c program to perform the following operation on a circular linked list
1.create a list
2.add a node in the begining
3.add a node in between
4.add a node at end
5.display the list
6.Delete from begining
7.Delete from middle
8.Delete from end
9.To count
10.To perform search
11.To reverse the linked list*/
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *start = NULL;

void create(int data)
{
    struct node *tmp, *q;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = NULL;
    if (start == NULL)
    {
        start = tmp;
        tmp->link = start;
    }
    else
    {
        q = start;
        while (q->link != start)
            q = q->link;
        q->link = tmp;
        tmp->link = start;
    }
}

void display()
{
    struct node *q;
    if (start == NULL)
        printf("List is empty\n");
    else
    {
        q = start;
        printf("Circular Linked List: ");
        do
        {
            printf("%d  ", q->info);
            q = q->link;
        } while (q != start);
        printf("\n");
    }
}

void add_beg(int data)
{
    struct node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = start;
    struct node *q = start;
    while (q->link != start)
        q = q->link;
    q->link = tmp;
    start = tmp;
}

void add_after(int data, int pos)
{
    int i;
    struct node *q, *tmp;
    q = start;
    for (i = 0; i < pos - 1; i++)
    {
        q = q->link;
        if (q == NULL)
        {
            printf("There are less than %d elements\n", pos);
            return;
        }
    }
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = q->link;
    q->link = tmp;
}

void add_end(int data)
{
    struct node *tmp, *q;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = NULL;
    if (start == NULL)
    {
        start = tmp;
        tmp->link = start;
    }
    else
    {
        q = start;
        while (q->link != start)
            q = q->link;
        q->link = tmp;
        tmp->link = start;
    }
}

void del_beg()
{
    if (start == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node *tmp = start;
    struct node *q = start;
    while (q->link != start)
        q = q->link;
    start = start->link;
    q->link = start;
    free(tmp);
}

void del_middle(int pos)
{
    if (start == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node *tmp = start;
    struct node *q = start;
    int i;
    for (i = 0; i < pos; i++)
    {
        if (i == 0 && pos == 1)
        {
            start = start->link;
            free(tmp);
            return;
        }
        else
        {
            if (i == pos - 1 && tmp)
            {
                q->link = tmp->link;
                free(tmp);
                return;
            }
            else
            {
                q = tmp;
                if (q == NULL)
                {
                    printf("Entered value is greater than the number of nodes in the list\n");
                    return;
                }
                tmp = tmp->link;
            }
        }
    }
}

void del_end()
{
    if (start == NULL)
    {
        printf("List is empty\n");
        return;
    }
    struct node *tmp = start;
    struct node *q = NULL;
    while (tmp->link != start)
    {
        q = tmp;
        tmp = tmp->link;
    }
    if (q == NULL)
    {
        free(start);
        start = NULL;
    }
    else
    {
        q->link = start;
        free(tmp);
    }
}

void count()
{
    struct node *q;
    q = start;
    int n = 0;
    if (start == NULL)
    {
        printf("List is empty\n");
        return;
    }
    do
    {
        q = q->link;
        n++;
    } while (q != start);
    printf("The current list contains %d nodes\n", n);
}

void search(int data)
{
    struct node *q;
    int p = 0, f = 0;
    q = start;
    if (start == NULL)
    {
        printf("List is empty\n");
        return;
    }
    do
    {
        if (q->info == data)
        {
            printf("Item %d is found in position %d\n", data, p);
            f = 1;
        }
        q = q->link;
        p++;
    } while (q != start);
    if (f == 0)
        printf("The entered %d item is not present in the list\n", data);
}
void reverse()
{
    struct node *prev, *current, *next;
    if (start == NULL)
    {
        printf("List is empty\n");
        return;
    }
    prev = NULL;
    current = start;
    do
    {
        next = current->link;
        current->link = prev;
        prev = current;
        current = next;
    } while (current != start);
    start->link = prev;
    start = prev;
}

int main()
{
    int n, i, m, ch;
    while (1)
    {
        printf("\n1.To create\n2.To add node in first\n3.To add in between\n4.To add in end\n5.To delete 1st element\n");
        printf("6.Delete from middle\n7.Delete from end\n8.Display\n9.To Count\n10.To search");
        printf("\n11.Reverse\n12.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter the number of nodes you want to insert: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
            {
                printf("Enter the %d element: ", i + 1);
                scanf("%d", &m);
                create(m);
            }
            break;
        case 2:
            printf("Enter the value you want to insert in the beginning: ");
            scanf("%d", &m);
            add_beg(m);
            break;
        case 3:
            printf("Enter the position you want to insert: ");
            scanf("%d", &n);
            printf("Enter the element you want to insert at that position: ");
            scanf("%d", &m);
            add_after(m, n);
            break;
        case 4:
            printf("Enter the element you want to add at the end: ");
            scanf("%d", &m);
            add_end(m);
            break;
        case 5:
            del_beg();
            break;
        case 6:
            printf("Enter the position of node to delete from list (indexing starting from 1): ");
            scanf("%d", &m);
            del_middle(m);
            break;
        case 7:
            del_end();
            break;
        case 8:
            display();
            break;
        case 9:
            count();
            break;
        case 10:
            printf("Enter the value to search: ");
            scanf("%d", &m);
            search(m);
            break;
        case 11:
            reverse();
            break;
        case 12:
            exit(0);
        default:
            printf("\nWrong input\n");
            break;
        }
    }
    return 0;
}
