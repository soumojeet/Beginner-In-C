#include<stdio.h>
main()
{
    int a[100],i,n,d,p=-1;
    printf("Enter Limit : ");
    scanf("%d",&n);
    
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("Enter the Element to be deleted : ");
    scanf("%d",&d);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==d)
        p=i;
    }
    if(p==-1)
    printf("Deletion is not Possible.");
    else
    {
        for(i=p+1;i<n;i++)
        {
            a[i-1]=a[i];
        }
    }
    printf("The Array after deletion :\n");
    for(i=0;i<n-1;i++)
    printf("%d\t",a[i]);
    
}