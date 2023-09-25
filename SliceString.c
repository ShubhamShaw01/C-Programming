// write a function slice() to slice the string.It should change the original string such that it is now the slice string takes m and n as the starting and ending position of the string
#include <stdio.h>
#include <string.h>
void slice(char *str, int n, int m)
{
    char str1[30];
    int i;
    for (i = n; i < m; i++)
        str1[i - n] = str[i];
    str1[i - 1] = '\0';
    printf("the new sliced array is : ");
    puts(str1);
}
int main()
{
    char str[30];
    int m, n;
    printf("Enter the String : ");
    gets(str);
    printf("Enter the starting and ending position of the new string you want : ");
    scanf("%d%d", &n, &m);
    if ((m < strlen(str)) && (n < strlen(str)))
        slice(str, n, m);
    else
        printf("\nYou entered value is out of the range \n");

    return 0;
}