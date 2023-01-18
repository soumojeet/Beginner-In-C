#include<stdio.h>
main()
{
    int n,d,sum=0;
    printf("Enter A Number : ");
    scanf("%d",&n);
    
    while(n>0)
    {
        d=n%10;
        sum+=d;
        n/=10;
    }
    printf("The Sum of Digits : %d",sum);
}