// wap to implement calculator basic operation
#include <stdio.h>
#include <string.h>

int main()
{
    char check[20];
    do
    {
        printf("Enter the first no: ");
        int no1;
        scanf("%d", &no1);
        printf("Enter the second no: ");
        int no2;
        scanf("%d", &no2);
        printf("Enter 1 for addition, 2 for subs, 3 for multiply, 4 for division: ");
        int operation;
        scanf("%d", &operation);

        switch (operation)
        {
        case 1:
            printf("The sum of %d and %d = %d\n", no1, no2, no1 + no2);
            break;
        case 2:
            printf("The substraction of %d and %d = %d\n", no1, no2, no1 - no2);
            break;
        case 3:
            printf("The product of %d and %d = %d\n", no1, no2, no1 * no2);
            break;
        case 4:
            if (no2 != 0)
            {
                double div = (double)no1 / no2;
                printf("The division of %d and %d = %.2lf\n", no1, no2, div);
            }
            else
            {
                printf("Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("You gave wrong input!\n");
            break;
        }
        printf("Enter 'y' or 'yes' to continue: ");
        scanf("%s", check);
    } while (strcmp(check, "y") == 0 || strcmp(check, "Y") == 0 || strcmp(check, "Yes") == 0 || strcmp(check, "yes") == 0);

    return 0;
}
