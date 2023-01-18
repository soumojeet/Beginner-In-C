#include<stdio.h>
main()
{
    int i,j,n,d;
    printf("Enter Limit :\n");  
    scanf("%d",&n);
    printf("The Perfect Numbers between 1- %d :\n",n);
    for(i=1;i<=n;i++)
    {
        d=0;
        for(j=1;j<i;j++)
        {
            if(i%j==0)
            d+=j;
        }
        if(i==d)
        printf("%d\n",i);
    }
}