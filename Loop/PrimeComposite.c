#include<stdio.h>
main()
{
    int i,n,d=0;
    printf("Enter a Number :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            d+=1;
        }
    }
    if(n==1)
    printf("Nethier Prime Nor Composite.");
    else
    {
        if(d==2)
        printf("Prime.");
        else 
        printf("Composite.");
    }    
}