/* program(14)=write a program to generate the multiplication table of any number using while loop,do while loop and for loop.
solution(1)=using while loop*/

#include<stdio.h>
int main()
{
    int num,i=1;

    printf("enter a number:");
    scanf("%d",&num);

    printf("\n multiplication table of %d \n",num);
    while(i<=10)
        {
            printf("%dx%d=%d\n",num,i,num*i);
            i++;
            
        }
    
    return 0;
}
