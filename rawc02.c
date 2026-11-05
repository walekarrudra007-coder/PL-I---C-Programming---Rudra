/*
program (2)= write a program to make use of basic I/O functions using different data types .
solution(2)= user define values
*/
#include<stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

    printf("\n enter student roll number:");
    scanf("%d",&rollnum);
    printf("\n enter student percentage:");
    scanf("%f",&per);
    printf("\n enter student grade:");
    scanf(" %c",& grade);

    printf("\n----student information----\n");
    printf("\n roll number is:%d",rollnum);
    printf("\n percentage is:%f",per);
    printf("\n grade:%c",grade);
    
    return 0;
}
