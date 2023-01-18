#include<stdio.h>
int perfect(int n,int i)
{
    int j,s=0;
    for(j=i;j<n;j++)
    {
        if(n%j==0)
        s+=j;
    }
    if(s==n)
    return(n);
    else
    return(0);
   
}
main()
{
    int i,n,r;
    printf("Enter Limit : ");
    scanf("%d",&n);
    printf("The Perfect Number Between 1 to %d :\n",n);
    for(i=1;i<=n;i++)
    {
        if(perfect(i,1)!=0)
        printf("%d\t",perfect(i,1));
    }
}