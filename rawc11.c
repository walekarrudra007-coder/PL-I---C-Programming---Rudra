// progarm(11)=write a program to check whether a given number is even or odd.

#include<stdio.h>
int main()
{
    int num;
    printf("enter your number:");
    scanf("%d",&num);

    if(num%2==0)
    {
        printf("the number is true .");
        
    }   
    else
    {
        printf("the number is false.");
    }

    return 0;
}
