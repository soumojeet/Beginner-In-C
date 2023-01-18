#include<stdio.h>
main()
{
    int i,n,d=0;
    printf("Enter A Number : ");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        d+=i;
    }
    if(n==d)
    printf("Perfect Number");
    else
    printf("Not A Perfect Number");
}