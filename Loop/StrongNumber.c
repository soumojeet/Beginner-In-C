#include<stdio.h>
main()
{
    int n,a,i,d,f,s=0;
    printf("Enter A Number : ");
    scanf("%d",&n);
    a=n;
    while(a>0)
    {
        f=1;
        d=a%10;
        for(i=1;i<=d;i++)
        {
            f*=i;
        }
        s+=f;
        a/=10;
    }
    if(n==s)
    printf("Strong Number");
    else
    printf("Not A Strong Number");
}