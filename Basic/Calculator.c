#include<stdio.h>
main()
{
    int n;
    printf("Enter\n'1' for Addition\n'2' for Subtration\n'3' for Multiplication\n'4' for Division\n");
    scanf("%d",&n);
    
    switch(n)
    {
    case 1:
        {
        int a, b, c;
        printf("Enter Two Numbers :\n");
        scanf("%d%d",&a,&b);
        c=a+b;
        printf("The Sum : %d",c);
    break;
        }
    case 2:
        {
        int a, b, c;
        printf("Enter Two Numbers :\n");
        scanf("%d%d",&a,&b);
        c=a-b;
        printf("The Difference : %d",c);
    break;
        }
    case 3:
        {
        int a, b, c;
        printf("Enter Two Numbers :\n");
        scanf("%d%d",&a,&b);
        c=a*b;
        printf("The Multiplication : %d",c);
    break;    
        }
    case 4:
        {
        int a, b, c, d;
        printf("Enter Two Numbers :\n");
        scanf("%d%d",&a,&b);
        c=a/b;
        d=a%b;
        printf("The Quotient and Remainder : %d & %d",c,d);
    break;
        }
    default:
    printf("Invalid Input");
    }
}