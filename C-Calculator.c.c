#include<stdio.h>
int main()
{
    float a,b,result;
    char r;
    while(1)
    {
        printf("\n----------------MENU----------------\n");
        printf("A: Addition\n");
        printf("B: Subtraction\n");
        printf("C: Multiplication\n");
        printf("D: Division\n");
        printf("E: Exit\n");
        printf("What do you want to perform \nChoose from above options: ");
        scanf(" %c",&r);
        if(r=='E' || r=='e')
        {
            printf("Exiting Calculator\n Thank you for using it\n");
            break;
        }

        printf("Enter your first number and second number\n");
        scanf("%f%f",&a,&b);

        switch(r)
        {
            case 'A':
            case 'a':
            {
            result=a+b;
            printf("%.2f + %.2f = %.2f\n",a,b,result);
            printf("-------------------------------------------------------------------------\n");
            break;
            
            }
            case 'B':
            case 'b':
            {
                result =a-b;
                printf("%.2f - %.2f = %.2f\n",a,b,result);
                 printf("-------------------------------------------------------------------------\n");
                break;
            }
            case 'C':
            case 'c':
            {
                result =a*b;
                printf("%.2f * %.2f = %.2f\n",a,b,result);
                 printf("-------------------------------------------------------------------------\n");
                break;
            }
            case 'D':
            case 'd':
            {
                if(b!=0)
                {
                    result=a/b;
                    printf("%.2f / %.2f = %.2f\n",a,b,result);
                     printf("-------------------------------------------------------------------------\n");
                }
                else 
                {
                    printf("\nCannot divide by zero!\n");
                     printf("-------------------------------------------------------------------------\n");
                }
                break;
            }
            default:
            printf("\nINVALID CHOICE\n please enter A, B, C, D or E\n");
             printf("-------------------------------------------------------------------------\n");

        }

    }                                                                                                                                                                                                                                                                                                           
    return 0;
}