#include<stdio.h>
int gcd(int p,int q)
{
    int r;
    if(p<q)
    gcd(q,p);
    
    if(p%q==0)
    return(q);
    else
    {
        r=p%q;
        gcd(q,r);
    }
}
main()
{
    int p,q;
    printf("Enter Two Numbers :\n");
    scanf("%d%d",&p,&q);
    printf("The GCD : %d",gcd(p,q));
}