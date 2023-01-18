#include<stdio.h>
int binary(int x[],int key,int low,int high)
{
    int mid=(low+high)/2;
    
    if(low<=high)
    {
        if(x[mid]==key)
        return(mid+1);
        else if(x[mid]>key)
        binary(x,key,low,mid-1);
        else
        binary(x,key,mid+1,high); 
    }
    else
    return(0);
}
main()
{
    int a[100],n,i,key,p;
    printf("Enter Limit : ");
    scanf("%d",&n);
    
    printf("Enter Array Elements in Sorted Way :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("Enter The Element To Be Searched : ");
    scanf("%d",&key);
    
    p=binary(a,key,0,n-1);
    
    if(p>0)
    printf("Found At Position %d.",p);
    else
    printf("Element Not Present.");
}