#include<stdio.h>
main()
{
    int a[100],i,j,n;
    printf("Enter Limit : ");
    scanf("%d",&n);
    
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            printf("This element %d has a duplicate element\n",a[i]);
        }
    }
}