// take name and salary of two employee as input from the user and write them to a text file in the following format
// name, salary
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("text1.txt", "w");
    int salary, n;
    char name[20];
    printf("enter how many input you want to put : ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nenter the name : ");
        scanf("%s", name);
        printf("\nEnter the salary of the person : ");
        scanf("%d", &salary);
        fprintf(ptr, "\n%s, %d", name, salary);
    }
    fclose(ptr);

    return 0;
}