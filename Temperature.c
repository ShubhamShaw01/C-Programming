//wap to convert celcius to fehrenheit and vice versa
#include<stdio.h>

int main(){
    int choice;
    float temp;
    printf("Choose\n1: For celcius to fehrenheit\n2: For fehrenheit to celcius");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        printf("Enter the temperature in Celcius : ");
        scanf("%f",&temp);
        printf("Fehrenheit = %g",(temp*9/5)+32);
        break;
    case 2:
        printf("Enter the temperature in Fehrenheit : ");
        scanf("%f",&temp);
        printf("Celcius = %g",(temp-32)*5/9);
        break;
    
    default:
        printf("Invalid input!");
        break;
    }

    return 0;
}