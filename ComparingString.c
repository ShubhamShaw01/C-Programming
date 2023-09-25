//Write a program to take string as an input from the user using %s and %c and find the input or equal or not
#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20],c;
    int i=0;
    printf("Enter the whole string as input : ");
    scanf("%s",str1);
    printf("enter the character of the string one by one :");
    while(c!='\n')
    {
        fflush(stdin);
        scanf("%c",&c);
        str2[i]=c;
        i++;
    }
    str2[i-1]='\0';
    puts(str1);
    puts(str2);
    if(strcmp(str1,str2)==0)
        printf("\nStrings are equal\n");
    else
        printf("\nStrings aren't equal \n");

    return 0;
}