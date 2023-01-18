#include<stdio.h>
main()
{
    int i,j,d,n,sum=0;
    printf("Enter Limit :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    d=0;
    for(j=1;j<=i;j++)
      {
        if(i%j==0)
        d+=1;
      } 
        if(d==2) 
        sum+=i;
    }
    printf("The Sum of Prime Numbers between 1 - %d : %d",n,sum);
}
    