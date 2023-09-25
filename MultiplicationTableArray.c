// create an array of size 3*10 containing multiplication of the no given by user
#include <stdio.h>

int main() {
    int array[3][10];
    int number;
    int flag=0;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            array[i][j] = number * (i * 10 + j + 1);
        }
    }
    printf("Multiplication Table for %d:\n", number);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d X %d = %d \n", number, ++flag ,array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
