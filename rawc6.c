/*
program(6)=write a program to calculate the average of three number
solution(2)=user define values
*/

#include<stdio.h>
int main()
{
    int num1,num2,num3,total;
    float average;

    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number :");
    scanf("%d",&num2);
    printf("enter third number:");
    scanf("%d",&num3);

    total=(num1+num2+num3);
    average=total /3;
    printf("\n average =%f",average);

    return 0;
}
