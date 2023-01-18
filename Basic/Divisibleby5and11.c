#include<stdio.h>
main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    
    if(n%11==0)
    {
        if(n%5==0)
        printf("%d is divisible by 11 & 5.",n);
        else
        printf("%d is only divisible by 11.",n);
    }
    else
    {
        if(n%5==0)
        printf("%d is only divisible by 5.",n);
        else
        printf("%d is not divisible by 11 & 5.",n);
    }
}