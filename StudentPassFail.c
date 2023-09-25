//Write a program to find out whether a student is passed or failed its required 40% and at least 33% in each subject to pass assumed 3 subject takes marks as input from the user
#include<stdio.h>

int main(){
    int sub1,sub2,sub3;
    float average;
    printf("Enter the marks obtain in Math in percentage : ");
    scanf("%d",&sub1);
    printf("Enter the marks obtain in English in percentage : ");
    scanf("%d",&sub2);
    printf("Enter the marks obtain in Science in percentage : ");
    scanf("%d",&sub3);
    average=(float)(sub1+sub2+sub3)/3;
    if(average>=40 && sub1>=33 && sub2>=33 && sub3>=33)
        printf("Student is pass");
    else
        printf("Student is fail");

    return 0;
}