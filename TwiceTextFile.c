// //wap to read a text file characters by characters and write a content twice in a separate file
#include <stdio.h>

int main()
{
    FILE *ptr;
    FILE *ptr1;
    char c;

    ptr = fopen("text.txt", "r");
    ptr1 = fopen("text1.txt", "w");

    while (fscanf(ptr, "%c", &c) != -1)
    {
        fprintf(ptr1, "%c", c);
        fprintf(ptr1, "%c", c);
    }

    fclose(ptr);
    fclose(ptr1);

    return 0;
}