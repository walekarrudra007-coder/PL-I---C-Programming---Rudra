/*program(13)=write a program using the switch-case statement to create a menu-driven calculator that repeatedly performs arithmetic operations until the user exits the program.
*/

#include<stdio.h>
int main()
{
    int choice;
    float num1,num2,result;

    do
        {
            printf("\n====menu driven calculator====\n");
            printf("1. addition\n");
            printf("2. substraction\n");
            printf("3. multiplication\n");
            printf("4. division\n");
            printf("5.exit\n");
            printf("enter your choice:");
            scanf("%d",&choice);
            switch(choice)
                {
                    case 1:
                    printf("enter two numbers:");
                    scanf("%f%f",&num1,&num2);
                    result=num1+num2;
                    printf("result=%.2f\n",result);
                    break;

                    case 2:
                    printf("enter two numbers:");
                    scanf("%f%f",&num1,&num2);
                    result=num1-num2;
                    printf("result=%.2f\n",result);
                    break;

                    case 3:
                    printf("enter two numbers:");
                    scanf("%f%f",&num1,&num2);
                    result=num1*num2;
                    printf("result=%.2f\n",result);
                    break;

                    case 4:
                    printf("enter two numbers:");
                    scanf("%f%f",&num1,&num2);
                    if(num2!=0)
                        printf("result=%2f\n",num1/num2);
                    else
                        printf("error!division by zero is not allowed\n");
                    break;

                    case 5:
                    printf("exiting calculator...\n");
                    break;

                    default:
                    printf("invalide choice!please try again.\n");
                                       
                }
        } while(choice!=5);

    return 0;
    
}
