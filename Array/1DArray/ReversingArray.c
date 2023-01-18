#include<stdio.h>
main()
{
    int a[100],b[100],i,n,s;
    printf("Enter Limit : ");
    scanf("%d",&n);
    s=n-1;
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
    }
    for(i=0;i<n;i++)
    {
        a[i]=b[s];
        s--;
    }
    printf("The Reversed Array :\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}