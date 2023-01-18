#include<stdio.h>
main()
{
    int i,j,d,n;
    printf("Enter Limit :\n");
    scanf("%d",&n);
    printf("The Prime Numbers between 1 - %d :\n",n);
    for(i=1;i<=n;i++)
    {
    d=0;
    for(j=1;j<=i;j++)
      {
        if(i%j==0)
        d+=1;
      } 
        if(d==2) 
        printf("%d\n",i);
    }
}
    