#include<stdio.h>
main()
{
    int a[100],i,n,p,j;
    printf("Enter Limit : ");
    scanf("%d",&n);
    
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("Enter the position where insertion takes place : ");
    scanf("%d",&p);
    
    for(i=0;i<n;i++)
    {
        if(i+1==p)
        {
            for(j=n;j>=i;j--)
            {
                a[j]=a[j-1];
            }
            printf("Enter the element to be inserted : ");
            scanf("%d",&a[i]);
            break;
        }
        if(p==n+1)
        {
            printf("Enter the element to be inserted : ");
            scanf("%d",&a[n]);
            break;
        }
    }
    printf("The Array After Insertion :\n");
    for(i=0;i<=n;i++)
    printf("%d\t",a[i]);
}