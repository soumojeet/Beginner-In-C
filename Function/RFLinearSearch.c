#include<stdio.h>
int linear(int x[],int n,int key,int i)
{
    if(x[i]==key)
    return(++i);
    else if(i<n)
    linear(x,n,key,++i); 
    else
    return(0);
}
main()
{
    int a[100],i,n,key,p;
    printf("Enter Limit : ");
    scanf("%d",&n);
    
    printf("Enter Array Elements :\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   
    printf("Enter The Element To Be Searched : ");
    scanf("%d",&key);
  
    p=linear(a,n,key,0);
    if(p>0)
    printf("Found at Position %d.",p);
    else
    printf("Element Not Present.");
}