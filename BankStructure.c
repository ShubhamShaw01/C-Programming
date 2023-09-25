// Write a program create a structure representing a Bank of a customer and write a function to compare
#include <stdio.h>
#include <string.h>

typedef struct bankAccount
{
    int accno;
    char cname[20];
    int balance;
} ba;
void display(ba *b, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n the %d customer accno : %d ", i + 1, b[i].accno);
        printf("the %d customer name : %s", i + 1, b[i].cname);
        printf("\nThe %d customer balance : %d", i + 1, b[i].balance);
    }
}
void compare(ba *b, int n)
{
    int max = b[0].balance;
    char name[20];
    strcpy(name, b[0].cname);
    for (int i = 0; i < n; i++)
    {
        if (b[i].balance > max)
        {
            max = b[i].balance;
            strcpy(name, b[i].cname);
        }
    }
    printf("\nThe Richest holder is %s with %d rupees\n", name, max);
}
int main()
{
    ba b[20];
    int n, i;
    printf("\nEnter how many accounts input you want : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter %d customer accno : ", i + 1);
        scanf("%d", &b[i].accno);
        printf("\nEnter %d customer name : ", i + 1);
        scanf("%s", b[i].cname);
        printf("\nEnter %d customer balance : ", i + 1);
        scanf("%d", &b[i].balance);
    }
    display(b, n);
    compare(b, n);
    return 0;
}