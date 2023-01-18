#include<stdio.h>
main()
{
    int i,n,a[100],sum=0,mean;
    printf("Enter Array Limit : ");
    scanf("%d",&n);
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    mean=sum/n;
    
    printf("The Sum : %d\n",sum);
    printf("The Mean : %d",mean);
    
}