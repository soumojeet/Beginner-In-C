#include<stdio.h>
main()
{
	int i,n,p,d,f;
    printf("Enter Limit till 999: ");
    scanf("%d",&n);
    printf("The Armstrong Number between 1 - %d :\n",n);
    for(i=100;i<=n;i++)
    {
        d=i; 
        f=0;
    for(;d>0;)
    {
        p=d%10;
        f+=(p*p*p);
        d/=10;
    }
    if(f==i)
    printf("%d\n",i);
    }
}