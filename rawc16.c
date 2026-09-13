/*program(16)=write a program to generate the multiplication table of any number using while loop,do while loop and for loop.
solution(3)=using for loop*/

#include<stdio.h>
int main()
{
    int num,i;

    printf("enter a number:");
    scanf("%d",&num);

    printf("\n multiplication table of %d\n",num);

    for(i=1;i<=10;i++)
        {
        printf("%dx%d=%d\n",num,i,num*i);
        
        }
    return 0;
}
