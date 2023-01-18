#include<stdio.h>
main()
{
    int a[100],b[100],i,j=0,n,c=0;
    printf("Enter Limit : ");
    scanf("%d",&n);
    
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
        {
        b[j]=a[i];
        j++;
        c++;
        }
    }
    if(c==0)
    printf("No negative numbers present.");
    else
    {
        printf("The Negative Numbers are :\n");    
        for(i=0;i<j;i++)
        printf("%d\t",b[i]);
    }
}