#include <stdio.h>
#include <stdlib.h>
int main()
{
    int option, n1, n2;
    float result;
    char ch;
    while(1)
    {
        printf("Select any one operation");
        printf("to perform the calculation");
        printf("in C Calculator:");
        printf("\n1.Addition\n2.Subtraction");
        printf("\n3.Multiplication\n4.Division");
        printf("\5.Exit");
        printf("Choose one option:");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            printf("For Addition");
            printf("\n Enter First Number:");
            scanf("%d",&n1);
            printf("\n Enter Second Number:");
            scanf("%d",&n2);
            result = n1 + n2;
            printf(" Addition= %.0f",result);
            break;
            case 2:
            printf("For Subtraction");
            printf("\n Enter First Number:");
            scanf("%d",&n1);
            printf("\n Enter Second Number:");
            scanf("%d",&n2);
            result = n1 - n2;
            printf(" Subtraction= %.0f",result);
            break;
            case 3:
            printf("For Multiplication");
            printf("\n Enter First Number:");
            scanf("%d",&n1);
            printf("\n Enter Second Number:");
            scanf("%d",&n2);
            result = n1 * n2;
            printf(" Multiplication= %.0f",result);
            break;
            case 4:
            printf("For Division");
            printf("\n Enter First Number:");
            scanf("%d",&n1);
            printf("\n Enter Second Number:");
            scanf("%d",&n2);
            if (n2 == 0)
            {
                printf("\nDivisor cannot be zero.")
                printf("Enter another value: ");
                scanf("%d",&n2)
            }
            result = n1 / n2;
            printf(" Quotient= %.0f",result);
            break;
            case 5:
            printf:("Exited");
            exit(0);
            break;
            default:
            printf("Invalid Option !");
            printf("\n\n*****************************\n");
            }
    }
    return 0;
}