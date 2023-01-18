#include<stdio.h>
main()
{
    int i,a[100],n,key,mid,low,high;
    
    printf("Enter Limit : ");
    scanf("%d",&n);
    
    printf("Enter Array Elements in a Sorted Way :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("Enter The Element to be Searched : ");
    scanf("%d",&key);
    
    low=0;
    high=n-1;
    
    while(low<=high)
    {
        mid=(low+high)/2;
        
        if(a[mid]==key)
        {
            printf("The Element Found at %d Position.",mid+1);
            break;
        }
        else if(key<a[mid])
        low=mid+1;
        else
        high=mid-1;
    }
    if(low>high)
    printf("Element to be Searched is not Present in the Array.");
}
