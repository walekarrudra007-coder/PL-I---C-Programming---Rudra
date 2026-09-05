/*
program(8)=write a c program to swap two numbers using atemporary variable 
solution(2)=user define values
*/

#include<stdio.h>
int main()
{
    int a,b,temp;

    printf("\n enter first number:");
    scanf("%d",&b);
    printf("\n enter second number:");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;

    printf("\n after swpping:\n");
    printf("\n first number=%d\n",a);
    printf("\n second number=%d\n",b);

    return 0;
}
