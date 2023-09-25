// wap to generate muljtiplocation table of a given number in text format make sure the file is readeble and well format
#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("text.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    fclose(ptr);
    ptr = fopen("text.txt", "w");
    fprintf(ptr, "\nThe table of the the %d is as follows:\n", num);
    for (int i = 1; i < 11; i++)
    {
        fprintf(ptr, "%d x %d =%d \n", num, i, num * i);
    }
    fclose(ptr);
    return 0;
}