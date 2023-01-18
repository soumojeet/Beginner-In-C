#include<stdio.h>
main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    
    switch(n%2)
    {
        case 0:
        printf("Even Number");
        break;
        case 1:
        printf("Odd Number");
    }
}