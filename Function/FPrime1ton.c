#include<stdio.h>
int prime(int n,int i)
{
    int j,f=0;
    for(j=i;j<=n;j++)
    {
        if(n%j==0)
        f++;
    }
    if(f==2)
    return(n);
    else
    return(0);
   
}
main()
{
    int i,n;
    printf("Enter Limit : ");
    scanf("%d",&n);
    printf("The Prime Number Between 1 to %d :\n",n);
    for(i=1;i<=n;i++)
    {
        if(prime(i,1)!=0)
        printf("%d\t",prime(i,1));
    }
}