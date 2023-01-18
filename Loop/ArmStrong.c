#include<stdio.h>
main()
{
	int n,p,d,f=0;
    printf("Enter a 3 digit number :\n");
    scanf("%d",&n);
    d=n;
    
    for(;d>0;)
    {
        p=d%10;
        f=f+(p*p*p);
        d/=10;
    }
    if(f==n)
    printf("Armstrong Number");
    else
    printf("Not a Armstrong Number");
}