#include<stdio.h>
main()
{
    int n,d,a,c=0;
    printf("Enter A Number : ");
    scanf("%d",&n);
    a=n;
    while(a>0)
    {
        d=a%10;
        c=(c*10)+d;
        a/=10;
    }
    if(n==c)
    printf("Palindrome Number.");
    else
    printf("Not A Palindrome Number.");
}