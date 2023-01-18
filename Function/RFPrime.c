#include<stdio.h>
int prime(int n,int i)
{
    static int f=0;
    if(i>n)
    return(f);
    else
    {
        if(n%i==0)
        f++;
        prime(n,++i);
    }
}
main()
{
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    
    if(prime(n,1)==2)
    printf("Prime Number");
    else
    printf("Composite Number");
}